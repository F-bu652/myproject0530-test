#include<stdio.h>
int main(void)
{
	int count, sum = 0;
	int RT = 0;

	count = 0;
	sum = 0;
	printf("Pliease enter the number you want to calculate:");
	scanf_s("%d", &RT);
	while (count++ < RT)
		sum = sum + count;
	printf("sum=%d\n", sum);
	return 0;
}