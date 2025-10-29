/*#include<stdio.h>
#include <string.h>
int main() {
	char str[100];
	printf("请输入一行字符串: ");
	scanf_s("%[^\n]", str, (unsigned int)sizeof(str));
	printf("该字符串长度为:%d\n", strlen(str));
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
	printf("转换后: %s\n", str);
	return 0;
 
}*/