/*#include<stdio.h>
int main() {
	
	int type, age, vip;
	double sum;
	
	
	printf("请输入电影类型:(1.动作片，2.爱情片，3.动画片，4.科幻片):\n");
    scanf_s("%d", &type);
	printf("请输入观众年龄:\n");
	scanf_s("%d", &age);
	printf("是否为会员:(1是，0否):\n");
	scanf_s("%d", &vip);
	
	
	switch (type) {
	case 1: sum = 50;
		printf("电影类型为动作片\n原价为：%.1f元\n", sum); break;
	case 2:sum = 40;
		printf("电影类型为爱情片\n原价为：%.1f元\n", sum); break;
	case 3:sum = 35;
		printf("电影类型为动画片\n原价为：%.1f元\n", sum); break;
	case 4:sum = 60;
		printf("电影类型为科幻片\n原价为：%.1f元\n", sum); break;
	default:printf("电影类型输入错误\n"); return 1;
	}
	
	
	if (age < 12) {
		sum /= 2;
		printf("年龄优惠后价格为：%.1f元\n", sum);
	}
	else if (age >= 60) {
		sum /= 2;
		printf("年龄优惠后价格为：%.1f元\n", sum);
	}
	
	
	sum = (vip == 1) ? sum * 0.9 : sum;
	if (vip == 1) {
		printf("会员9折后价格为：%.1f元\n", sum);
	}
	
	
	if (sum <30) {
		printf("这票价太划算了！\n");
	}
	else {
		printf("祝您观影愉快！\n");
	}
	
	return 0;
}*/