/*#include<stdio.h>
int main() {
	char str[100];
	printf("请输入一行字符串:\n ");
	scanf_s("%[^\n]", str, (unsigned int)sizeof(str));
	int letter = 0, digit = 0, space = 0, other = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
			letter++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digit++;
		}
		else if (str[i] == ' ') {
			space++;
		}
		else {
			other++;
		}
	}
	printf("字母个数:%d\n", letter);
	printf("数字个数:%d\n", digit);
	printf("空格个数:%d\n", space);
	printf("其他类型个数:%d\n", other);
	return 0;
}*/

