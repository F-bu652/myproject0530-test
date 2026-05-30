#include<stdio.h>
int main()
{
	int a[3][3]{
		1,2,3,
		4,5,6,
		100,8,15
	};
	int i = 0;
	int j = 0;
	int sum = 0;
	int sum1 = 0;
	for (i = 0;i < 3;i++)
	{
		sum += a[i][i];
	}
	for (i = 0;i < 3;i++)
	{
		sum1 += a[2 - i][i];
	}
	printf("对角线三数的和为%d\n", sum);
	printf("副对角线三数的和为%d", sum1);
	return 0;
}