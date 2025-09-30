#include <stdio.h>
/*int m;
int min(int x, int y);
int main()
{
	int a, b;
	printf("\n输入两个整数:");
	scanf_s("%d,%d", &a, &b);
	m = min(a, b);
		printf("比较小的数值:%d\n", m);
}
int min(int x, int y)
{
	int t = 0;
	if (x < y) t = x;
	else t = y;
	return(t);
}
#define pi  3.14159
int main(void){
	float r,c,s;
	printf("\n输入半径r:");
	scanf_s("%f", &r);
	c = pi * (2 * r);
	s = pi * (r * r);
	printf("\n周长为:%f", c);
	printf("\n面积为:%f", s);
}
int main(void)
{
	float a, c, s;
	printf("\n输入边长:");
	scanf_s("%f", &a);
	c = a * 4;
	s = a * a;
	printf("\n边长:%f", c);
	printf("\n面积:%f", s);
}
int main() {


	float upper_base, lower_base, height, area;


	// 提示用户输入梯形的上底、下底和高


	printf("请输入梯形的上底：");


	scanf_s("%f", &upper_base);


	printf("请输入梯形的下底：");


	scanf_s("%f", &lower_base);


	printf("请输入梯形的高：");


	scanf_s("%f", &height);


	// 计算梯形的面积


	area = 0.5 * (upper_base + lower_base) * height;


	// 输出结果


	printf("梯形的面积是：%.2f", area);


	return 0;


}
int main(void) {
	int a, b;
	printf("输入第一件商品价格:");
	scanf_s("%d", &a);
	printf("\n输入第二件商品价格:");
	scanf_s("%d", &b);
	printf("\n总金额%d", a + b);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float score;
	printf("输入学生成绩: ");
	if (scanf_s("%f", &score) != 1) {        
		printf("输入格式错误！\n");
		return 1;
	}

	if (score >= 60.0)                        
		printf("合格\n");
	else
		printf("不合格\n");

	return 0;
}
int main(void) {
	float sc;
	printf("输入分数:");
	scanf_s("%f", &sc);
	if (sc >= 60.0)
		printf("\n合格");
	else
		printf("\n不合格");
	return 0;
}
int main(void) {//以不同形式表现变量
	int num1;
	char num2;
	num1 = 'a';
	num2 = 109;
	num1 = num1 + 22;
	num2 = num2 - 33;
	printf("%c,%c\n", num1, num2);
	printf("%d,%d\n", num1, num2);
	return 0;
}
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;                

	printf("请输入三个整数（用空格或回车分隔）: ");
	if (scanf_s("%d %d %d", &a, &b, &c) != 3) {   
		printf("输入格式错误！\n");
		return 0;
	}

	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("最大数是: %d\n", max);
	return 0;
}*/




