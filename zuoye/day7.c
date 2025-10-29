/*#include<stdio.h>
int main() {
	for (int i = 1; i <= 10; i++) {//for循环练习
		printf("%d ", i);
	}
	return 0;
}
	int n;//改前
	printf("请输入n:\n");
	scanf_s("%d", &n);
	int x = 1, sum = 0;
	printf("1");
	while (x < n) {
		x++;
		printf("+%d", x);
		sum += x - 1;
	}
	sum += n;
	printf("=%d\n", sum);
	return 0;
}
	int n = 0, sum = 0, i = 0;//改后
	printf("请输入n:\n");
	scanf_s("%d", &n);
	while (i < n) {
		i++;
		printf("%d", i);
		if (i != n) {
			printf("+");
		}
		else {
			printf("=");
		}
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/

	
