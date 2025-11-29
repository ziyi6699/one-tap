/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <iphlpapi.h>
#include <icmpapi.h>
#include <windows.h>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "ws2_32.lib")


//验证输入的网络地址格式是否正确
int isValidNetwork(const char* ipStr) {
    if (!ipStr) return 0;
    struct in_addr addr;
    if (inet_aton(ipStr, &addr) == 0) return 0;

    
    unsigned char* bytes = (unsigned char*)&addr.s_addr;
    
    if (bytes[0] != 0) {
        printf("Warning: Last octet should be 0 (e.g., 192.168.1.0). Using anyway.\n");
    }
    return 1;
}

int main() {
    char input[32];
    char baseIP[32];
    printf("Enter network address (e.g., 192.168.1.0): ");
    if (scanf_s("%31s", input, (unsigned)_countof(input)) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (!isValidNetwork(input)) {
        printf("Invalid IP address format.\n");
        return 1;
    }

   
    strncpy_s(baseIP, sizeof(baseIP), input, _TRUNCATE);
    char* lastDot = strrchr(baseIP, '.');
    if (!lastDot) {
        printf("Invalid format.\n");
        return 1;
    }
    *lastDot = '\0'; 

    
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    printf("Scanning %s.1 - %s.254...\n", baseIP, baseIP);

    HANDLE hIcmpFile;
    char sendBuf[32] = { 0 };
    char recvBuf[sizeof(ICMP_ECHO_REPLY) + 8];
    DWORD replySize = sizeof(recvBuf);
    DWORD timeout = 500; 

    for (int i = 1; i <= 254; i++) {
        char target[32];
        sprintf_s(target, sizeof(target), "%s.%d", baseIP, i);
        DWORD ipAddr = inet_addr(target);

        hIcmpFile = IcmpCreateFile();
        if (hIcmpFile == INVALID_HANDLE_VALUE) {
            printf("IcmpCreateFile failed. Exiting.\n");
            break;
        }

        DWORD ret = IcmpSendEcho(hIcmpFile, ipAddr, sendBuf, sizeof(sendBuf), NULL, recvBuf, replySize, timeout);
        if (ret != 0) {
            PICMP_ECHO_REPLY pEchoReply = (PICMP_ECHO_REPLY)recvBuf;
            if (pEchoReply->Status == IP_SUCCESS) {
                printf("Host alive: %s\n", target);
            }
        }

        IcmpCloseHandle(hIcmpFile);
        Sleep(10); 
    }

    WSACleanup();
    printf("Scan finished.\n");
    return 0;
}*/