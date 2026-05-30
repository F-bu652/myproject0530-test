#include<stdio.h>
 int main()
{
	printf("Please enter you age:");
	int age = 0;
	

	scanf_s("%d",&age);

	printf("年龄对应的秒数为%d秒。\n",age * 365 * 86400);
	return 0;
}