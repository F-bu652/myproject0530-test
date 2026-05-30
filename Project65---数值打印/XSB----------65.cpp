#include<stdio.h>
int main(void)
{
	int i = 0, rt = 1;
	printf("Please enter a number:");
	scanf_s("%d", &i);
	printf("%d ", i);
	while (rt<=10)
	{
		
		printf("%d ", i + rt * 1);
		rt++;
	}
	return 0;
}