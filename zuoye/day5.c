/*#include<stdio.h>
int main() {
	int num, time, type, away ;
	float sum;
	printf("请输入套餐编号(1~5):\n");
	scanf_s("%d", &num);
	printf("请输入时间段(1-早餐，2-午餐，3-晚餐，4-宵夜):\n");
	scanf_s("%d", &time);
	printf("请输入学生类型(1-本科生，2-研究生，3-教师):\n");
	scanf_s("%d", &type);
	printf("请输入是否外带(1-是，2-否):\n");
	scanf_s("%d", &away);
	switch (num) {
	case 1: sum = 8;
		printf("原价为：%.1f元\n", sum); break;
	case 2: sum = 15;
		printf("原价为：%.1f元\n", sum); break;
	case 3: sum = 12;
		printf("原价为：%.1f元\n", sum); break;
	case 4: sum = 14;
		printf("原价为：%.1f元\n", sum); break;
	case 5: sum = 20;
		printf("原价为：%.1f元\n", sum); break;
	}
	if (time == 1) {
		sum = sum * 0.9;
		printf("早餐9折优惠后价格为：%.1f元\n", sum);
	}
	else if (time == 2) {
		sum = sum * 1;
		printf("时间段价格为：%.1f元\n", sum);
	}
	else if (time == 3) {
		sum = sum * 0.8;
		printf("晚餐8折优惠后价格为：%.1f元\n", sum);
	}
	else if (time == 4) {
		sum = sum * 0.75;
		printf("宵夜7.5折优惠后价格为：%.1f元\n", sum);
	}
	if (type == 1) {
		sum = sum - 1;
		printf("本科生1元优惠后价格为：%.1f元\n", sum);
	}
	if (type == 2) {
		sum = sum - 2;
		printf("研究生优惠2元优惠后价格为：%.1f元\n", sum);
	}
	if (type == 3) {
		sum = sum * 1;
		printf("教师价格为：%.1f元\n", sum);
	}
	switch (away) {
	case 1: sum = sum + 1;
		printf("打包费+1元，最终应付：%.1f元\n", sum); break;
	case 2: sum = sum * 1;
		printf("最终应付：%.1f元\n", sum); break;
	};
	return 0;
}*/