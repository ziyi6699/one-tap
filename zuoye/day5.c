/*#include<stdio.h>
int main() {
	int num, time, type, away ;
	float sum;
	printf("�������ײͱ��(1~5):\n");
	scanf_s("%d", &num);
	printf("������ʱ���(1-��ͣ�2-��ͣ�3-��ͣ�4-��ҹ):\n");
	scanf_s("%d", &time);
	printf("������ѧ������(1-��������2-�о�����3-��ʦ):\n");
	scanf_s("%d", &type);
	printf("�������Ƿ����(1-�ǣ�2-��):\n");
	scanf_s("%d", &away);
	switch (num) {
	case 1: sum = 8;
		printf("ԭ��Ϊ��%.1fԪ\n", sum); break;
	case 2: sum = 15;
		printf("ԭ��Ϊ��%.1fԪ\n", sum); break;
	case 3: sum = 12;
		printf("ԭ��Ϊ��%.1fԪ\n", sum); break;
	case 4: sum = 14;
		printf("ԭ��Ϊ��%.1fԪ\n", sum); break;
	case 5: sum = 20;
		printf("ԭ��Ϊ��%.1fԪ\n", sum); break;
	}
	if (time == 1) {
		sum = sum * 0.9;
		printf("���9���Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	else if (time == 2) {
		sum = sum * 1;
		printf("ʱ��μ۸�Ϊ��%.1fԪ\n", sum);
	}
	else if (time == 3) {
		sum = sum * 0.8;
		printf("���8���Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	else if (time == 4) {
		sum = sum * 0.75;
		printf("��ҹ7.5���Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	if (type == 1) {
		sum = sum - 1;
		printf("������1Ԫ�Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	if (type == 2) {
		sum = sum - 2;
		printf("�о����Ż�2Ԫ�Żݺ�۸�Ϊ��%.1fԪ\n", sum);
	}
	if (type == 3) {
		sum = sum * 1;
		printf("��ʦ�۸�Ϊ��%.1fԪ\n", sum);
	}
	switch (away) {
	case 1: sum = sum + 1;
		printf("�����+1Ԫ������Ӧ����%.1fԪ\n", sum); break;
	case 2: sum = sum * 1;
		printf("����Ӧ����%.1fԪ\n", sum); break;
	};
	return 0;
}*/