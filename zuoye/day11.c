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
	
	
	printf("����������Ԫ�أ��ո�ָ����س����������100������\n");
	while (n < 100 && scanf_s("%d", &temp) == 1) {
		arr[n++] = temp;
		c = getchar();
		if (c == '\n') break;
	}
	
	
	int index = findbalanceindex(arr, n);
	
	
	if (index == -1) {
		printf("��ƽ���\n");
	}
	else if (index != -1) {
		printf("ƽ���Ϊ:%d\n",arr[index]);
	}
	
	
	return 0;
}*/
