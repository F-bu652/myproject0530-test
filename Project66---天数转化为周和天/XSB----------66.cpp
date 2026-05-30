#include<stdio.h>
#define D_TO_W 7
int main(void)
{
	int day, week ,YK= 0;
	printf("Pleaes enter a number of days:");
	scanf_s("%d", &day);
	while (day > 0)
	{
		week = day / D_TO_W;
		YK = day % D_TO_W;
		printf("%d day is %d week,%d day", day, week, YK);
		printf("Enter next value(<0 to quit):");
		scanf_s("%d", &day);
		return 0;
	}
	return 0;
}