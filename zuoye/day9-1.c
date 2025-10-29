/*#include<stdio.h>
int main() {
	int score[10];


	for (int i = 0; i < 10; i++) {
		printf("输入成绩:\n");
		scanf_s("%d", &score[i]);
	}
	double ave;
	int max, min;
	ave = 0;


	for (int i = 0; i < 10; i++) {
		ave += score[i];
	}
	printf("平均分: %.2f\n", ave / 10);


	max = score[0];
	for (int i = 0; i < 10; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	printf("最高分: %d\n", max);

	min = score[0];
	for (int i = 0; i < 10; i++) {
		if (score[i] < min) {
			min = score[i];
		}
	}
	printf("最低分: %d\n", min);



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
		printf("及格人数: %d\n", pass_count);
		printf("优秀人数: %d\n", excellent_count);


		printf("高于平均分的成绩有:");
		for (int i = 0; i < 10; i++) {
			if (score[i] > ave / 10) {
				printf("%d ", score[i]);
			}

			
		}
		return 0;
}*/






