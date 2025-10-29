/*#include<stdio.h>

int findbalanceindex(int arr[], int n)
{
	long long sum = 0;
	
	
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	long long leftsum = 0;
	
	
	for (int i = 0; i < n; ++i) {
		long long rightsum = sum - leftsum - arr[i];
		if (leftsum == rightsum) {
			return i;
		}
		leftsum += arr[i];
	}
	return -1;
}
int main(void) {
	
	
	int arr[100], n=0,temp;
	char c;
	
	
	printf("请输入数组元素（空格分隔，回车结束，最多100个）：\n");
	while (n < 100 && scanf_s("%d", &temp) == 1) {
		arr[n++] = temp;
		c = getchar();
		if (c == '\n') break;
	}
	
	
	int index = findbalanceindex(arr, n);
	
	
	if (index == -1) {
		printf("无平衡点\n");
	}
	else if (index != -1) {
		printf("平衡点为:%d\n",arr[index]);
	}
	
	
	return 0;
}*/
