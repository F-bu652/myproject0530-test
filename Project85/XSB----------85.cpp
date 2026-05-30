#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	int mid = 0;
	int min = 0;

	printf("Please enter the three numbers:");
	scanf_s("%d %d %d", &a, &b, &c);

	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	mid = (a > b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	min = a + b + c - max - mid;

	printf("%d\n",max);
	printf("%d\n",mid);
	printf("%d\n",min);

	return 0;
}