#include<stdio.h>
int main()
{
	float number = 0; 
	printf("Please enter the number:");
	scanf_s("%f", &number);

	printf("The input is %3.1f or %.2e\n",number,number);
	printf("The input is %+.3f or %.3E",number,number);
	return 0;
}