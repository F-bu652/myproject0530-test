#include<stdio.h>
#include<float.h>
int main()
{
	double myVariable = 1.0 / 3.0;
	float eyVariable = 1.0f / 3.0f;
	//定义有double和float类型变量各一个并初始化为1.0/3.0

	float a, b, c, d = 0;
	double be = 0.0;
	double he = 0.0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	be = a / b;
	he = c / d;

	printf("%f,%f",be,he);
	printf("%.12f,%.12f",be,he);
	printf("%.16f,%.16f",be,he);

	return 0;
}