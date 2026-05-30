#include<stdio.h>
int main()
{
	printf("Please enter your height(厘米)：");
	float height = 0;

	scanf_s("%f",&height);
	printf("%.2f",height);
	printf("你的身高是%f英寸。\n",height/2.54);
	return 0;
}