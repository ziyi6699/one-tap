/*#include<stdio.h>
int main() {
    int choice, id, num, age;
    printf("��������������(1-����,2-ѩ��,3-���):");
    scanf_s("%d", &choice);
    printf("���������(1-ѧ��,2-��ʦ):");
    scanf_s("%d", &id);
    printf("�����빺������:");
    scanf_s("%d", &num);
    printf("����������:");
    scanf_s("%d", &age);
    float money = 0, sum = 0;
    if (id == 2 && age <= 18) {
        printf("input error\n");
        return 0;
    }
    if (id == 1) {
        if (choice == 1)
            money = 3;
        else if (choice == 2)
            money = 2.5;
        else if (choice == 3)
            money = 4;
    }
    else if (id == 2) {
        if (choice == 1)
            money = 4;
        else if (choice == 2)
            money = 3.5;
        else if (choice == 3)
            money = 5;
    }
    sum = money * num;
    if (num >= 2) {
        sum *= 0.9;
    }
    if (age <= 18) {
        sum *= 0.8;
    }
    printf("���Ϊ:%.1fԪ\n", sum);
    return 0;
}*/


