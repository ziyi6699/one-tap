/*#include<stdio.h>
int main() {
	
	int type, age, vip;
	double sum;
	
	
	printf("�������Ӱ����:(1.����Ƭ��2.����Ƭ��3.����Ƭ��4.�ƻ�Ƭ):\n");
    scanf_s("%d", &type);
	printf("�������������:\n");
	scanf_s("%d", &age);
	printf("�Ƿ�Ϊ��Ա:(1�ǣ�0��):\n");
	scanf_s("%d", &vip);
	
	
	switch (type) {
	case 1: sum = 50;
		printf("��Ӱ����Ϊ����Ƭ\nԭ��Ϊ��%.1fԪ\n", sum); break;
	case 2:sum = 40;
		printf("��Ӱ����Ϊ����Ƭ\nԭ��Ϊ��%.1fԪ\n", sum); break;
	case 3:sum = 35;
		printf("��Ӱ����Ϊ����Ƭ\nԭ��Ϊ��%.1fԪ\n", sum); break;
	case 4:sum = 60;
		printf("��Ӱ����Ϊ�ƻ�Ƭ\nԭ��Ϊ��%.1fԪ\n", sum); break;
	default:printf("��Ӱ�����������\n"); return 1;
	}
	
	
	if (age < 12) {
		sum /= 2;
		printf("�����Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	else if (age >= 60) {
		sum /= 2;
		printf("�����Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	
	
	sum = (vip == 1) ? sum * 0.9 : sum;
	if (vip == 1) {
		printf("��Ա9�ۺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	
	
	if (sum <30) {
		printf("��Ʊ��̫�����ˣ�\n");
	}
	else {
		printf("ף����Ӱ��죡\n");
	}
	
	return 0;
}*/