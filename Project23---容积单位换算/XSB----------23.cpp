#include<stdio.h>
int main()
{
	float pint=0.0;
	printf("Please enter the pint number:");
	scanf_s("%f", &pint);
	printf("cup number=%f\n", pint * 2);
	printf("ounce number=%f\n", pint * 2 * 8);
	printf("soup ladle=%f\n", pint * 2 * 8 * 2);
	printf("teaspoon number=%f\n", pint * 2 * 8 * 2 * 3);
	return 0;
}