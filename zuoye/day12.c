/*#include<stdio.h>
void SwapByValue(int x,int y,int z)//ֵ����
{
	int temp_n;
	temp_n=x;
	x=y;
	y=z;
	z=temp_n;
	//printf("In swapByValue: x=%d, y=%d, z=%d\n",x,y,z); 
}


void SwapByPointer(int* x, int* y, int* z) {//ָ�봫��
	int temp_m;
	temp_m = *x;
	*x = *y;
	*y = *z;
	*z = temp_m;
	//printf("In SwapByPointer: x=%d, y=%d, z=%d\n", *x, *y, *z);
}


int main() {
	int a = 10, b = 20, c = 30;
	printf("��ʼֵ: a=%d, b=%d, c=%d\n", a, b, c);

printf("\n=== ֵ���ݲ��� ===\n");
SwapByValue(a, b, c);
printf("�������ֵ: a=%d, b=%d, c=%d\n", a, b, c);


printf("\n=== ָ�봫�ݲ��� ===\n");
SwapByPointer(&a, &b, &c);
printf("�������ֵ: a=%d, b=%d, c=%d\n", a, b, c);
return 0;
}*/