#include<stdio.h>
#define MIN_HOUR 60
int main(void)
{
	int minute, hour=0,br = 0;
	printf("Convert minutes to hours and minutes.\n");
	printf("Please enter the longth of time(minute):");
	scanf_s("%d", &minute);
	while (minute>0)
	{
		hour = minute / MIN_HOUR;
		br = minute % MIN_HOUR;
		printf("%d minutes is %d hours,%d minutes\n", minute, hour, br);
		printf("Enter next value(<0 to quit):\n");
		scanf_s("%d", &minute);
		return 0;
	}
	return 0;
}