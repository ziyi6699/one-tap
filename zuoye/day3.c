/*#include <stdio.h>
int main() {
	int age;
	char gender;
	float height=0;
	double weight=0;
	unsigned int pulse;
	printf("���������䣺");
	scanf_s("%d", &age);
    printf("�������Ա�M/F����");
	scanf_s(" %c", &gender);     
    printf("��������ߣ��ף���");
	scanf_s("%f", &height);
    printf("���������أ�ǧ�ˣ���");
	scanf_s("%lf", &weight);
    printf("���������ʣ���/���ӣ���");
	scanf_s("%u", &pulse);
	const double g = 9.8;
	double BMI = weight / (height * height);
	double force = weight * g;
	printf("�Ա��Ϣ�Ǽǳɹ�!\n�Ա�:%c\n����:%d\n���:%.2f��\n����:%.2fǧ��\n����:%u��/����\nBMIָ��:%.2f\n��������:%.2fţ\n",gender,age,height,weight,pulse,BMI,force);
	if (BMI < 18.5)
		printf("�����ж�:���ع���\n");
	else if (BMI >= 18.5 && BMI < 24)
		printf("�����ж�:��������\n");
	else { printf("�����ж�:����ƫ��\n"); }
	return 0;
}
#include <stdio.h>
int main() {
    int age;
    char gender[10];//��Ϊ�ַ�����洢����
    float height = 0;
    double weight = 0;
    unsigned int pulse;
    printf("���������䣺");
    scanf_s("%d", &age);
    //    printf("�������Ա�M/F����");
    //    scanf_s(" %c", &gender);     
    printf("�������Ա���/Ů����");
    scanf_s("%s", gender, (unsigned)sizeof(gender));//��ȡ�ַ���

    printf("��������ߣ��ף���");
    scanf_s("%f", &height);
    printf("���������أ�ǧ�ˣ���");
    scanf_s("%lf", &weight);
    printf("���������ʣ���/���ӣ���");
    scanf_s("%u", &pulse);
    const double g = 9.8;
    double BMI = weight / (height * height);
    double force = weight * g;
    //printf("�Ա��Ϣ�Ǽǳɹ�!\n�Ա�:%c\n����:%d\n���:%.2f��\n����:%.2fǧ��\n����:%u��/����\nBMIָ��:%.2f\n��������:%.2fţ\n",gender,age,height,weight,pulse,BMI,force);

    printf("�Ա��Ϣ�Ǽǳɹ�!\n");
    printf("�Ա�:%c\n", gender);
    printf("����:%d\n", age);
    printf("���:%.2f��\n", height);
    printf("����:%.2fǧ��\n", weight);
    printf("����:%u��/����\n", pulse);
    printf("BMIָ��:%.2f\n", BMI);
    printf("��������:%.2fţ\n", force);

    if (BMI < 18.5)
        printf("�����ж�:���ع���\n");
    else if (BMI >= 18.5 && BMI < 24)
        printf("�����ж�:��������\n");
    else { printf("�����ж�:����ƫ��\n"); }
    return 0;
}*/
