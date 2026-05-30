#include<stdio.h>
int main()
{
	printf("Please enter your heihgt(inch):");
	double inch = 0;

	scanf_s("%lf",&inch);

	printf("你的身高是%lf厘米",inch*2.54);

	return 0;
}