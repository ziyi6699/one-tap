/*#include<stdio.h>
int main() {
	char str[100];
	printf("������һ���ַ���:\n ");
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
	printf("��ĸ����:%d\n", letter);
	printf("���ָ���:%d\n", digit);
	printf("�ո����:%d\n", space);
	printf("�������͸���:%d\n", other);
	return 0;
}*/

