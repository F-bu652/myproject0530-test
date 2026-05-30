#include<stdio.h>斐波那契数列
int main()
{
	int n = 0;
	int num = 0;
	int num1 = 0;
	int num2 = 0;

	for (n = 1;n < 30;n++)
	{
		if (n == 1)
		{
			num1 = 0;
			num2 = 0;
			num = 1;
			printf("第%d位斐波拉契数为%d\n",n,num);
		}
		else if(n == 2)
		{
			num1 = 0;
			num2 = num;
			num = num1 + num2;
			printf("第%d位斐波拉契数是%d\n",n, num);
		}
		else
		{
			num1 = num2;
			num2 = num;
			num = num1 + num2;
			printf("第%d斐波拉契数为%d\n", n,num);
		}
	}
	return 0;
}