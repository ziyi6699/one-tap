/*int m;//�Ƚϴ�С
int min(int x, int y);
int main()
{
	int a, b;
	printf("\n������������:");
	scanf_s("%d,%d", &a, &b);
	m = min(a, b);
		printf("�Ƚ�С����ֵ:%d\n", m);
}
int min(int x, int y)
{
	int t = 0;
	if (x < y) t = x;
	else t = y;
	return(t);
}
#define pi  3.14159
int main(void){//�����
	float r,c,s;
	printf("\n����뾶r:");
	scanf_s("%f", &r);
	c = pi * (2 * r);
	s = pi * (r * r);
	printf("\n�ܳ�Ϊ:%f", c);
	printf("\n���Ϊ:%f", s);
}
int main(void)
{
	float a, c, s;
	printf("\n����߳�:");
	scanf_s("%f", &a);
	c = a * 4;
	s = a * a;
	printf("\n�߳�:%f", c);
	printf("\n���:%f", s);
}
int main() {


	float upper_base, lower_base, height, area;


	// ��ʾ�û��������ε��ϵס��µ׺͸�


	printf("���������ε��ϵף�");


	scanf_s("%f", &upper_base);


	printf("���������ε��µף�");


	scanf_s("%f", &lower_base);


	printf("���������εĸߣ�");


	scanf_s("%f", &height);


	// �������ε����


	area = 0.5 * (upper_base + lower_base) * height;


	// ������


	printf("���ε�����ǣ�%.2f", area);


	return 0;


}
int main(void) {//�ӷ�����
	int a, b;
	printf("�����һ����Ʒ�۸�:");
	scanf_s("%d", &a);
	printf("\n����ڶ�����Ʒ�۸�:");
	scanf_s("%d", &b);
	printf("\n�ܽ��%d", a + b);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {//�ϸ����
	float score;
	printf("����ѧ���ɼ�: ");
	if (scanf_s("%f", &score) != 1) {        
		printf("�����ʽ����\n");
		return 1;
	}

	if (score >= 60.0)                        
		printf("�ϸ�\n");
	else
		printf("���ϸ�\n");

	return 0;
}
int main(void) {
	float sc;
	printf("�������:");
	scanf_s("%f", &sc);
	if (sc >= 60.0)
		printf("\n�ϸ�");
	else
		printf("\n���ϸ�");
	return 0;
}
int main(void) {//�Բ�ͬ��ʽ���ֱ���//�ȴ�С
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

	printf("�����������������ÿո��س��ָ���: ");
	if (scanf_s("%d %d %d", &a, &b, &c) != 3) {   
		printf("�����ʽ����\n");
		return 0;
	}

	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("�������: %d\n", max);
	return 0;
}
#include <stdio.h>//����ͬ��
#include <stdlib.h>
int main() {
	int x, y, m, n;
	scanf_s("%d,%d", &x, &y);
	m = (4 * y - x) / 2;
    n = (x - 2 * y) / 2;
	printf("���У�%d ���У�%d\n", m, n);
	return 0;
}
int main() {//�������
	char ch1, ch2, ch3, ch4, ch5;
	printf("����:");
	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	ch4 = getchar();
	ch5 = getchar();
	printf("\n���:");
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	putchar(ch4);
	putchar(ch5);
	return 0;

}

#include<stdio.h> //����
#include <math.h>
int main() {
	int n;
	printf("����n��ֵ:");
	scanf_s("%d", &n);
	int t;
	t = (2 * n) - 1;
	printf("���=%d", t);
	return 0;
}
#include <stdio.h> //����ͬ��
#include <stdlib.h>
int main() {
	int n = 0, m = 0;
	printf("ͷ����,�ż�ֻ��");
	if (scanf_s("%d,%d", &n, &m) != 2) {
		printf("�����ʽ����\n");
		return 1;
	}

	if ((4 * n - m) % 2 == 0 && (m - 2 * n) % 2 == 0) {
		int x = (4 * n - m) / 2;  
		int y = (m - 2 * n) / 2;  

		if (x >= 0 && y >= 0) {
			printf("����%dֻ������%dֻ\n", x, y);
		}
		else {
			printf("�޽⣨������\n");
		}
	}
	else {
		printf("��������������⣩\n");
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
#include <stdio.h> //ʱ��
#include<time.h>
int main() {
	time_t t = time(NULL);
	char buf[26];
	if (ctime_s(buf, sizeof(buf), &t) == 0)
		printf("%s", buf);
	else
		printf("ctime_s ʧ��\n");
	return  0;
}
#include<stdio.h> //�������
int main() {
	int a, b, c;
	if (scanf_s("%d,%d,%d", &a, &b, &c) != 3)
		return 0;
	printf("%8d,%8d,%8d", a, b, c);
	return 0;
}
#include <stdio.h>//�������
int main() {
	int a = 0;
	scanf_s("%d", &a);
	printf("%d%d%d", a%10, (a/10)%10, a/100);
	return 0;
}
#include <stdio.h>//����λ��
int main() {
	float a = 0;
	scanf_s("%f", &a);
	printf("%.3f", a * a);
	return 0;
}
#include <stdio.h>//�����
#include <stdlib.h>
#include <time.h>
int main() {
	int rnd;
	srand(time(NULL));
	rnd = rand() % 100;
	printf("%d", rnd);
	return 0;
}
#include <stdio.h>//�ӷ�
int main() {
	int a, b;
	printf("�����������֣�\n");
	scanf_s("%d %d", &a, &b);
	int c = a + b;
	printf("��Ϊ��%d", c);
}
#include <stdio.h>//������ж�����
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
#include<stdio.h>//����ϵͳ
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
#include<stdio.h>//�򵥵�ifǶ��
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
#include<stdio.h>//�������
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

#include<stdio.h>//�ж��м�����ͬ����
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
#include <stdio.h>//������

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
#include<stdio.h>//whileѭ��
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
#include<stdio.h>//��forѭ��
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
#include<stdio.h>//�ȼ�whileѭ��
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
#include<stdio.h>//continue��break��Ӧ��
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
#include<stdio.h>//����Ҫ�ȵ�����������������ִ�С�Ƚ�
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
#include<stdio.h>//�ж�����
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
#include<stdio.h>//�žų˷���
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
#include <stdio.h> // �žų˷���

int main() {
	printf("�žų˷���\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%-2d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>\//forѭ������1��300�ĺ�
int main() {
	int sum = 0;
	for (int i = 1; i <= 300; i++) {
		sum += i;
	}
	printf("sum=%d", sum);
	return 0;
}
#include <stdio.h>//���100���ڵ�����
#include <math.h>
int main() {
	int i, j, isPrime;
	printf("100���ڵ������У�\n");
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
#include<stdio.h>//ָ��
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
#include<stdio.h>//++x��ʹ��
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
#include <stdio.h>//���Լ��

int main() {
	int m, n;

	printf("�������������� m n��");
	if (scanf_s("%d %d", &m, &n) != 2) {
		printf("�����ʽ����\n");
		return 1;
	}

	if (m < 0) m = -m;
	if (n < 0) n = -n;


	if (m == 0 && n == 0) {
		printf("gcd(0, 0) δ���壨Լ��Ϊ 0��\n");
		return 0;
	}

	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}

	printf("���Լ��Ϊ: %d\n", m);
	return 0;
}
#include <stdio.h>//����쳲���������

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
	printf("������������ n������ n <= 46����");
	if (scanf_s("%d", &n) != 1) {
		printf("�����ʽ����\n");
		return 1;
	}
	if (n < 0) {
		printf("������Ǹ�����\n");
		return 1;
	}
	if (n > 46) {
		printf("���������������� n <= 46������������...\n");
	}
	printf("fib(%d) = %d\n", n, fib(n));
	return 0;
}
#include <stdio.h>// FizzBuzz����
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
#include<stdio.h>//����1��10�Ľ׳�
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
#include<stdio.h>//����1��n�ĺͣ������˳�
int main() {
	int n;
	while (1) {
		printf("input n (�����˳�)��");
		if (scanf_s("%d", &n) != 1) break;
		if (n < 0) break;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("1 �� %d �ĺ�Ϊ��%d\n", n, sum);
	}
	return 0;
}*/














