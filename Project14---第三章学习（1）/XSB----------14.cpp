#include<stdio.h>
int main(void)
{
	float weight=0.0;
	float value=0.0;

	printf("Are you worth your weight in piatium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf_s("%f",&weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth that!If platinum is worth $%.2f.\n",value);
	printf("You are easily worth that!If platinum price drop,\n");
	printf("eat more to maintain your value.\n");
	getchar();
	getchar();
	return 0;
}