#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <string.h>
#include <iphlpapi.h>
#include <icmpapi.h>
#include <windows.h>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "ws2_32.lib")


//扫描单个端口
void scan_port(const char* ip, int port) {
    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock == INVALID_SOCKET) return;


    DWORD timeout = 800;
    setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeout, sizeof(timeout));
    setsockopt(sock, SOL_SOCKET, SO_SNDTIMEO, (const char*)&timeout, sizeof(timeout));

    struct sockaddr_in addr = { 0 };
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    inet_pton(AF_INET, ip, &addr.sin_addr);

    if (connect(sock, (struct sockaddr*)&addr, sizeof(addr)) == 0) {
        printf("端口 %d 开放\n", port);
    }

    closesocket(sock);
}


//验证输入的网络地址格式是否正确
int isValidNetwork(const char* ipStr) {
    if (!ipStr) return 0;
    struct in_addr addr;
    if (inet_pton(AF_INET, ipStr, &addr) != 1) return 0;

    unsigned char* bytes = (unsigned char*)&addr.s_addr;

    if (bytes[0] != 0) {
        printf("网段结尾应为 0 (e.g., 192.168.1.0).\n");
    }
    return 1;
}


int main() {

    //ping主机
    char input[32];
    char baseIP[32];
    printf("输入网段初始 (e.g., 192.168.1.0): ");
    if (scanf_s("%31s", input, (unsigned)_countof(input)) != 1) {
        printf("错误输入\n");
        return 1;
    }

    if (!isValidNetwork(input)) {
        printf("不合法的IP输入\n");
        return 1;
    }


    strncpy_s(baseIP, sizeof(baseIP), input, _TRUNCATE);
    char* lastDot = strrchr(baseIP, '.');
    if (!lastDot) {
        printf("不可ping.\n");
        return 1;
    }
    *lastDot = '\0';


    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    int n;
    printf("输入扫描主机数量 (1-254): ");
    scanf_s("%d", &n);
    printf("扫描 %s.1 - %s.n...\n", baseIP, baseIP);

    HANDLE hIcmpFile;
    char sendBuf[32] = { 0 };
    char recvBuf[sizeof(ICMP_ECHO_REPLY) + 8];
    DWORD replySize = sizeof(recvBuf);
    DWORD timeout = 500;

    for (int i = 1; i <= n; i++) {
        char target[32];
        sprintf_s(target, sizeof(target), "%s.%d", baseIP, i);
        DWORD ipAddr = inet_addr(target);

        hIcmpFile = IcmpCreateFile();
        if (hIcmpFile == INVALID_HANDLE_VALUE) {
            printf("扫描失败，退出.\n");
            break;
        }

        DWORD ret = IcmpSendEcho(hIcmpFile, ipAddr, sendBuf, sizeof(sendBuf), NULL, recvBuf, replySize, timeout);
        if (ret != 0) {
            PICMP_ECHO_REPLY pEchoReply = (PICMP_ECHO_REPLY)recvBuf;
            if (pEchoReply->Status == IP_SUCCESS) {
                for(int i=0; i < ret; i++)
                printf("主机 %s 存活\n", target);
            }
        }

        IcmpCloseHandle(hIcmpFile);
        Sleep(10);
        
    }
    WSACleanup();
    printf("扫描结束\n");

    
    //询问用户是否进行端口扫描
    printf("是否进行端口扫描？(y/n): ");
    char choice;
    scanf_s(" %c", &choice, 1);
    if (choice != 'n' && choice != 'N') {
        return 0;
    }



    //开始运行端口扫描
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        return 1;
    }

    char ip[16];
    int port_n;

    printf("IP: ");
    scanf_s("%15s", ip, (unsigned)sizeof(ip));
    printf("端口数: ");
    scanf_s("%d", &port_n);

    for (int port = 1; port <= port_n; port++) {
        scan_port(ip, port);
    }

    WSACleanup();
    return 0;
}