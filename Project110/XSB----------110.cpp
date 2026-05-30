#include<stdio.h>
int main()
{
	int i = 0;
	int x = 0;
	int r = 0;
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	int a[100]{};
	float b[100]{};
	float sum = 0;

	printf("该斐波那契数列为：\n");
	for (i = 1;i < 22;i++)
	{
		if (i == 1)
		{
			num = 1;
			a[i] = num;
			num1 = 0;
			num2 = 0;
		}
		else if (i == 2)
		{
			num = 1;
			a[i] = num;
			num1 = 0;
			num2 = 1;
			num = num + num2;
		}
		else if (i > 2)
		{
			a[i] = num;
			num1 = num2;
			num2 = num;
			num = num1 + num2;
		}
		printf("%d ", a[i]);
	}
	

	printf("\n");

	printf("新的数列为：\n");
	for (i = 1;i < 21;i++)
	{
		b[i] = static_cast<float>(a[i]) / a[i + 1];
	}

	for (i = 1;i < 21;i++)
	{
		printf("%f ", b[i]);
		sum += b[i];
	}

	printf("\n");
	printf("\n");
	printf("前二十一个新数列元素之和为%f", sum);
}