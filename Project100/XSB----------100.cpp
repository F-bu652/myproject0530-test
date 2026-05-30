#include<stdio.h>
int main()
{
	int arr[3][3]{};
	int i = 0, j = 0, sum = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0;i <= 2;i++)
		for (j = 0;j <= 2;j++)
			scanf_s("%d", &arr[i][j]);

	for (i = 0;i <= 2;i++)
		for (j = 0;j <= 2;j++) 
			sum += arr[i][j];
		
	printf("所有元素之和为%d\n", sum);
	
	for (i = 0;i <= 2;i++)
	{
			sum1 += arr[i][i];
		
	}
	printf("主对角线元素之和： % d\n", sum1);
	for (i = 0;i <= 2;i++)
	{
			sum2 += arr[i][2-i];
		
	}
	printf("副对角线元素之和：%d\n", sum2);
	return 0;  
}