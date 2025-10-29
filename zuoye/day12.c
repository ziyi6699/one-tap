/*#include<stdio.h>
void SwapByValue(int x,int y,int z)//值传递
{
	int temp_n;
	temp_n=x;
	x=y;
	y=z;
	z=temp_n;
	//printf("In swapByValue: x=%d, y=%d, z=%d\n",x,y,z); 
}


void SwapByPointer(int* x, int* y, int* z) {//指针传递
	int temp_m;
	temp_m = *x;
	*x = *y;
	*y = *z;
	*z = temp_m;
	//printf("In SwapByPointer: x=%d, y=%d, z=%d\n", *x, *y, *z);
}


int main() {
	int a = 10, b = 20, c = 30;
	printf("初始值: a=%d, b=%d, c=%d\n", a, b, c);

printf("\n=== 值传递测试 ===\n");
SwapByValue(a, b, c);
printf("交换后的值: a=%d, b=%d, c=%d\n", a, b, c);


printf("\n=== 指针传递测试 ===\n");
SwapByPointer(&a, &b, &c);
printf("交换后的值: a=%d, b=%d, c=%d\n", a, b, c);
return 0;
}*/