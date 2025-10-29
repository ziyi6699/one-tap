/*#include <stdio.h>
int main() {
	int age;
	char gender;
	float height=0;
	double weight=0;
	unsigned int pulse;
	printf("请输入年龄：");
	scanf_s("%d", &age);
    printf("请输入性别（M/F）：");
	scanf_s(" %c", &gender);     
    printf("请输入身高（米）：");
	scanf_s("%f", &height);
    printf("请输入体重（千克）：");
	scanf_s("%lf", &weight);
    printf("请输入心率（次/分钟）：");
	scanf_s("%u", &pulse);
	const double g = 9.8;
	double BMI = weight / (height * height);
	double force = weight * g;
	printf("宇航员信息登记成功!\n性别:%c\n年龄:%d\n身高:%.2f米\n体重:%.2f千克\n心率:%u次/分钟\nBMI指数:%.2f\n所受重力:%.2f牛\n",gender,age,height,weight,pulse,BMI,force);
	if (BMI < 18.5)
		printf("体型判断:体重过轻\n");
	else if (BMI >= 18.5 && BMI < 24)
		printf("体型判断:体重正常\n");
	else { printf("体型判断:体重偏重\n"); }
	return 0;
}
#include <stdio.h>
int main() {
    int age;
    char gender[10];//改为字符数组存储中文
    float height = 0;
    double weight = 0;
    unsigned int pulse;
    printf("请输入年龄：");
    scanf_s("%d", &age);
    //    printf("请输入性别（M/F）：");
    //    scanf_s(" %c", &gender);     
    printf("请输入性别（男/女）：");
    scanf_s("%s", gender, (unsigned)sizeof(gender));//读取字符串

    printf("请输入身高（米）：");
    scanf_s("%f", &height);
    printf("请输入体重（千克）：");
    scanf_s("%lf", &weight);
    printf("请输入心率（次/分钟）：");
    scanf_s("%u", &pulse);
    const double g = 9.8;
    double BMI = weight / (height * height);
    double force = weight * g;
    //printf("宇航员信息登记成功!\n性别:%c\n年龄:%d\n身高:%.2f米\n体重:%.2f千克\n心率:%u次/分钟\nBMI指数:%.2f\n所受重力:%.2f牛\n",gender,age,height,weight,pulse,BMI,force);

    printf("宇航员信息登记成功!\n");
    printf("性别:%c\n", gender);
    printf("年龄:%d\n", age);
    printf("身高:%.2f米\n", height);
    printf("体重:%.2f千克\n", weight);
    printf("心率:%u次/分钟\n", pulse);
    printf("BMI指数:%.2f\n", BMI);
    printf("所受重力:%.2f牛\n", force);

    if (BMI < 18.5)
        printf("体型判断:体重过轻\n");
    else if (BMI >= 18.5 && BMI < 24)
        printf("体型判断:体重正常\n");
    else { printf("体型判断:体重偏重\n"); }
    return 0;
}*/
