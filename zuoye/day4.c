/*#include<stdio.h>
int main() {
    int choice, id, num, age;
    printf("请输入饮料类型(1-可乐,2-雪碧,3-红茶):");
    scanf_s("%d", &choice);
    printf("请输入身份(1-学生,2-老师):");
    scanf_s("%d", &id);
    printf("请输入购买数量:");
    scanf_s("%d", &num);
    printf("请输入年龄:");
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
    printf("金额为:%.1f元\n", sum);
    return 0;
}*/


