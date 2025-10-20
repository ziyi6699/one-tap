/*int m;//比较大小
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
int main(void){//算面积
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
int main(void) {//加法运算
	int a, b;
	printf("输入第一件商品价格:");
	scanf_s("%d", &a);
	printf("\n输入第二件商品价格:");
	scanf_s("%d", &b);
	printf("\n总金额%d", a + b);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {//合格与否
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
int main(void) {//以不同形式表现变量//比大小
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
}
#include <stdio.h>//鸡兔同笼
#include <stdlib.h>
int main() {
	int x, y, m, n;
	scanf_s("%d,%d", &x, &y);
	m = (4 * y - x) / 2;
    n = (x - 2 * y) / 2;
	printf("鸡有：%d 兔有：%d\n", m, n);
	return 0;
}
int main() {//输入输出
	char ch1, ch2, ch3, ch4, ch5;
	printf("输入:");
	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	ch4 = getchar();
	ch5 = getchar();
	printf("\n输出:");
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	putchar(ch4);
	putchar(ch5);
	return 0;

}

#include<stdio.h> //数列
#include <math.h>
int main() {
	int n;
	printf("输入n的值:");
	scanf_s("%d", &n);
	int t;
	t = (2 * n) - 1;
	printf("结果=%d", t);
	return 0;
}
#include <stdio.h> //鸡兔同笼
#include <stdlib.h>
int main() {
	int n = 0, m = 0;
	printf("头几个,脚几只：");
	if (scanf_s("%d,%d", &n, &m) != 2) {
		printf("输入格式错误\n");
		return 1;
	}

	if ((4 * n - m) % 2 == 0 && (m - 2 * n) % 2 == 0) {
		int x = (4 * n - m) / 2;  
		int y = (m - 2 * n) / 2;  

		if (x >= 0 && y >= 0) {
			printf("鸡有%d只，兔有%d只\n", x, y);
		}
		else {
			printf("无解（负数）\n");
		}
	}
	else {
		printf("输入错误（无整数解）\n");
	}

	return 0;
}
#include <stdio.h>
int main() {
	int a = 0, b = 0;
	printf("a,b=");
	scanf_s("%d,%d", &a, &b);
	printf("a=%c,b=%c\n",a,b);
	return 0;
}
#include <stdio.h> //时间
#include<time.h>
int main() {
	time_t t = time(NULL);
	char buf[26];
	if (ctime_s(buf, sizeof(buf), &t) == 0)
		printf("%s", buf);
	else
		printf("ctime_s 失败\n");
	return  0;
}
#include<stdio.h> //对齐输出
int main() {
	int a, b, c;
	if (scanf_s("%d,%d,%d", &a, &b, &c) != 3)
		return 0;
	printf("%8d,%8d,%8d", a, b, c);
	return 0;
}
#include <stdio.h>//逆序输出
int main() {
	int a = 0;
	scanf_s("%d", &a);
	printf("%d%d%d", a%10, (a/10)%10, a/100);
	return 0;
}
#include <stdio.h>//限制位数
int main() {
	float a = 0;
	scanf_s("%f", &a);
	printf("%.3f", a * a);
	return 0;
}
#include <stdio.h>//随机数
#include <stdlib.h>
#include <time.h>
int main() {
	int rnd;
	srand(time(NULL));
	rnd = rand() % 100;
	printf("%d", rnd);
	return 0;
}
#include <stdio.h>//加法
int main() {
	int a, b;
	printf("输入两个数字：\n");
	scanf_s("%d %d", &a, &b);
	int c = a + b;
	printf("和为：%d", c);
}
#include <stdio.h>//随机数判断闰年
#include <stdlib.h>
#include <time.h>
int main() {
	int rnd;
	srand(time(NULL));
	rnd = rand() % 9999;
	printf("year=%d\n", rnd);
	if (rnd % 4 == 0 && rnd / 2 != 0)
		printf("yes");
	else(printf("no"));
	return 0;
}
#include<stdio.h>//评分系统
#include<stdlib.h>
int main() {
	int g;
	printf(" input stdunt grade : ");
	scanf_s("%d", &g);
	if (g < 0 || g>100)
		printf("mistake input");
	else if (g >= 90)
		printf("A");
	else if (g >= 80)
		printf("B");
	else if (g >= 70)
		printf("C");
	else if (g >= 60)
		printf("D");
	else(printf("not pass"));
	return 0;
}
#include<stdio.h>//简单的if嵌套
int main() {
	int N;
	printf("input number");
	scanf_s("%d", &N);
	if (N > 0)
		printf("positive");
	else if (N < 0)
		printf("negative");
	else printf("zero");
	return 0;
}
#include<stdio.h>//检查整除
int main() {
	int n;
	printf("input:");
	scanf_s("%d", &n);
	if (n % 5 == 0 && n % 6 == 0)
		printf("yes");
	else printf("no");
	return 0;
}
#include<stdio.h>
int main() {
	int x;
	printf("input:");
	scanf_s("%d", &x);
	if (x / 10 >= 10 && x % 11 == 0)
		printf("yes");
	else printf("no");
	return 0;
}
#include<stdio.h>
int main() {
	int a, b;
	char op;
	double re=0;
	printf("input:");
	scanf_s("%d %c %d", &a, &op, &b);
	switch (op) {
	case '+':
		re = a + b;
		printf("re=%.2f\n", re);
		break;
	case '-':
		re = a - b;
		printf("re=%.2f\n", re);
		break;
	case '*':
		re = a * b;
		printf("re=%.2f\n", re);
		break;
	case '/':
		if (b == 0)
			printf("mistake\n");
		else re = a / b;
			printf("re=%.2f\n", re);
			break;
	}
	return 0;
}

#include<stdio.h>//判断有几个相同数字
int main() {
	int x, y;
	int c = 0;
	printf("input:");
	scanf_s("%d %d", &x,&y);
	if (x  < 10000 || x  > 99999 || y > 10 || y < 1)
	{
		printf("mistake");
		return 1;
	}
	int c1 = x / 10000;
	int c2 = (x / 1000) % 10;
	int c3 = (x / 100) % 10;
	int c4 = (x / 10) % 10;
	int c5 = x % 10;
	c = (c1 == y) + (c2 == y) + (c3 == y) + (c4 == y) + (c5 == y);
	printf("count=%d\n", c);
	return 0;
}
#include <stdio.h>//计算器

int main() {
	int a, b;
	char op;
	double re = 0;

	printf("input opration:\n");
	scanf_s("%c", &op);
	printf("input number:\n ");
	scanf_s("%d %d", &a, &b);
	

	switch (op) {
	case '+':
		re = a + b;
		printf("re=%.2f\n", re);
		break;
	case '-':
		re = a - b;
		printf("re=%.2f\n", re);
		break;
	case '*':
		re = a * b;
		printf("re=%.2f\n", re);
		break;
	case '/':
		if (b == 0)
			printf("mistake\n");
		else {
			re = (double)a / b;
			printf("re=%.2f\n", re);
		}
		break;
	default:
		printf("miatake\n");
	}

	return 0;
}
#include<stdio.h>
int main() {
	int x;
	double y = 0;
	printf("input x");
	scanf_s("%d", &x);
	if (x < 0 || x>20)
		printf("input error");
	else if (x >= 0 && x <= 5)
		y = -x + 2.5;
	else if (x >= 5 && x <= 10)
		y = 2 - 1.5 * (x - 3) * (x - 3);
	else if (x >= 10 && x <= 20)
		y = (x / 2) - 1.5;
	printf("%.3f", y);
	return 0;
}
#include<stdio.h>//while循环
#include<stdlib.h>
int main() {
	int sum=0,i=1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("sum=%d", sum);
	return 0;
}
#include<stdio.h>//简单for循环
int main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("sum=%d", sum);
	return 0;
}
#include<stdio.h>
int main() {
	int a,sum = 0;
	scanf_s("%d", &a);
	for (int x = a; x > 0; x = a /= 10) {
		sum += a % 10;
	}
	printf("sum=%d", sum);
	return 0;
}
#include<stdio.h>//等价while循环
int main() {
	int a, sum = 0;
	scanf_s("%d", &a);
	while (a > 0) {
		sum += a % 10;
		a /= 10;
	}
	printf("sum=%d", sum);
	return 0;
}
#include<stdio.h>//continue和break的应用
int main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i == 100) {
			break;
		}
		sum += i;
	}
	printf("sum=%d", sum);
	return 0;
}
#include<stdio.h>//输入要比的数字行数后进行数字大小比较
int main() {
	int x = 0, y = 0, z = 0, line;
	scanf_s("%d", &line);
	while (line > 0) {
		scanf_s("%d,%d,%d", &x, &y, &z);
		int max = x > y ? (x > z ? x : z) : (y > z ? y : z);
		printf("max is %d\n", max);
		line--;
	}
	return 0;
}
#include<stdio.h>//判断素数
int main() {
	int x = 0, i = 2, isp = 1;
	scanf_s("%d", &x);
	while (i < x) {
		if (x % i == 0) {
			isp = 0;
		}
		i++;
	}
	if (isp) {
		printf("%d is isp",x);
	}
	else {
		printf("%d not isp",x);
	}
	return 0;
}
#include<stdio.h>//九九乘法表
int main() {
	int x = 1, y = 1;
	printf("9*9 excel\n");
	while (x <= 9) {
		y = 1;
		while (y < x) {
			printf("%d\t", x * y);
			y++;
		}
		printf("\n");
		x++;
	}
	return 0;
}
#include <stdio.h> // 九九乘法表

int main() {
	printf("九九乘法表：\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%-2d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>\//for循环计算1到300的和
int main() {
	int sum = 0;
	for (int i = 1; i <= 300; i++) {
		sum += i;
	}
	printf("sum=%d", sum);
	return 0;
}
#include <stdio.h>//输出100以内的素数
#include <math.h>
int main() {
	int i, j, isPrime;
	printf("100以内的素数有：\n");
	for (i = 2; i < 100; i++) {
		isPrime = 1; 
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = 0; 
				break; 
			}
		}
		if (isPrime) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
#include<stdio.h>
#include<math.h>
int main() {
	int isp;
	for (int i = 2; i <= 100; i++) {
		isp = 1;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isp = 0;
				break;
			}
		}
		if (isp) {
			printf("%d ", i);
		}
	}
	return 0;
}
#include<stdio.h>
int main() {
	int a, b, c;
	printf("input three number:");
	scanf_s("%d,%d,%d",&a,  &b, &c);
	double sum = 0;
	if (a > b) {
		printf("error");
	}
	while (a <=b) {
		sum = (a + c) ;
		printf("sum=%.3f\n", sum);
		a+=2;
     }
	return 0;
}
#include<stdio.h>//指针
int main() {
	int a = 3;
	int* t = &a;
	printf("%p %d\n", t, *t);
}
#include<stdio.h>
int main(){
	int a, b, d;
	int c[3] = {a=0,b=0,d=0};
	printf("input a,b,d:");
	scanf_s("%d,%d,%d", &a, &b, &d);
	int* p = c;
	while (a < b) {
		int sum = a + d;
		printf("sum=%d\n", sum);
		a++;
	}
	printf("%d,%d,%d", *(p), *(p + 1), *(p + 2));
	return 0;
}
#include<stdio.h>//++x的使用
int main() {
	int a, s, n, count;
	a = 2;
	s = 0;
	n = 1;
	count = 1;
	while (count <= 7) {
		n = n * a;
		s = s + n;
		++count;
		printf("s=%d\n", s);
	}
	return 0;
}
#include <stdio.h>//最大公约数

int main() {
	int m, n;

	printf("请输入两个整数 m n：");
	if (scanf_s("%d %d", &m, &n) != 2) {
		printf("输入格式错误\n");
		return 1;
	}

	if (m < 0) m = -m;
	if (n < 0) n = -n;


	if (m == 0 && n == 0) {
		printf("gcd(0, 0) 未定义（约定为 0）\n");
		return 0;
	}

	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}

	printf("最大公约数为: %d\n", m);
	return 0;
}
#include <stdio.h>//计算斐波那契数列

int fib(int n) {
	if (n <= 0) return 0;
	if (n == 1 || n == 2) return 1;
	int a = 1, b = 1, c;
	for (int i = 3; i <= n; ++i) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main(void) {
	int n;
	printf("请输入正整数 n（建议 n <= 46）：");
	if (scanf_s("%d", &n) != 1) {
		printf("输入格式错误\n");
		return 1;
	}
	if (n < 0) {
		printf("请输入非负整数\n");
		return 1;
	}
	if (n > 46) {
		printf("结果可能溢出（建议 n <= 46）。继续计算...\n");
	}
	printf("fib(%d) = %d\n", n, fib(n));
	return 0;
}
#include <stdio.h>// FizzBuzz问题
int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("thive\n");
		}
		else if (i % 3 == 0) {
			printf("three\n");
		}
		else if (i % 5 == 0) {
			printf("five\n");
		}
		else {
			printf("%d\n", i);
		}
	}
	return 0;
}
#include<stdio.h>//计算1到10的阶乘
int main() {
	int n=1;
	int fact = 1;
	do {
		fact*= n;
		printf("%d!=%d\n", n,fact);
		n++;
	} while (n <= 10);
	return 0;
		
}
#include<stdio.h>//计算1到n的和，负数退出
int main() {
	int n;
	while (1) {
		printf("input n (负数退出)：");
		if (scanf_s("%d", &n) != 1) break;
		if (n < 0) break;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("1 到 %d 的和为：%d\n", n, sum);
	}
	return 0;
}*/














