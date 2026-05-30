#include<stdio.h>r
int main(void)
{
	float salary;

	printf("Enter you desired mnothly salary:\n");
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12);
	printf("\rGee!\n");

	return 0;
}