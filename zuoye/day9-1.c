/*#include<stdio.h>
int main() {
	int score[10];


	for (int i = 0; i < 10; i++) {
		printf("����ɼ�:\n");
		scanf_s("%d", &score[i]);
	}
	double ave;
	int max, min;
	ave = 0;


	for (int i = 0; i < 10; i++) {
		ave += score[i];
	}
	printf("ƽ����: %.2f\n", ave / 10);


	max = score[0];
	for (int i = 0; i < 10; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	printf("��߷�: %d\n", max);

	min = score[0];
	for (int i = 0; i < 10; i++) {
		if (score[i] < min) {
			min = score[i];
		}
	}
	printf("��ͷ�: %d\n", min);



		int pass_count = 0;
		int excellent_count = 0;
		for (int i = 0; i < 10; i++) {
			if (score[i] >= 60) {
				pass_count++;
			}
			if (score[i] >= 85) {
				excellent_count++;
			}
		}
		printf("��������: %d\n", pass_count);
		printf("��������: %d\n", excellent_count);


		printf("����ƽ���ֵĳɼ���:");
		for (int i = 0; i < 10; i++) {
			if (score[i] > ave / 10) {
				printf("%d ", score[i]);
			}

			
		}
		return 0;
}*/






