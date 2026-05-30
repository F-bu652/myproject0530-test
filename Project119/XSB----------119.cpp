#include<stdio.h>
#define BASIC 10
#define  ADD 15
#define  L1 0.15
#define  L2 0.20
#define  L3 0.25
int main()
{
	float hour = 0;
	float sum = 0;
	float tax = 0;
	float ni = 0;

	printf("Please enter the working time of this week:\n");
	scanf_s("%f", &hour);

	if (hour < 41)
	{
		sum = hour * BASIC;
	}
	else if (hour < 98)
	{
		sum = BASIC * 40 + (hour - 40) * ADD;
	}

	if (0 < sum <= 300)
	{
		tax = sum * L1;
	}
	else if (sum <= 450)
	{
		tax = 300 * L1 + (sum - 300) * L2;
	}
	else if (sum > 450)
	{
		tax = 300 * L1 + (sum - 300) * L2 + (sum - 450)*L3;
	}

	ni = sum - tax;

	printf("总工资为：%f dollar\n",sum);
	printf("税金为：%f dollar\n", tax);
	printf("净收入为：%f dollar",ni);

	return 0;
}