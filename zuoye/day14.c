#include<stdio.h>
int main() {
    
	
	int score0=0, score1 = 0, score2 = 0, score3 = 0, score4 = 0;
	int* p=&score0;
	int i, sum = 0;
	double ave, max;
	
	printf("请输入5门课程的成绩:\n");
	
	
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score0 + i);
	}
	max = *p;  
	
	
	for (i = 0; i < 5; i++) {
		sum += *(&score0 + i);   //*(&score0 + i)等价于p[i]
		if (*(&score0 + i) > max) {
			max = *(&score0 + i);
		}
	}
	
	
	ave = sum / 5.0;
	
	printf("平均分=%.2f\n最高分=%.2f\n", ave, max);
	
	return 0;
}
