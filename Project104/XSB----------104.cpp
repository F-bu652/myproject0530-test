#include<stdio.h>
int main()
{
	int a[6]{};
	int i = 0;
	int b = 0;
	int max = 0;
	int min = 0;
	int t = 0;

	printf("输入数组为：");
	for (i = 0;i <= 5;i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("\n");
	for (i = 0;i < 6;i++)
	{
		if (a[i] > max)
		{
			b = a[i];
			a[i] = max;
			max = b;
			
		}
		if (a[i] < min)
		{
			b = a[i];
			a[i] = min;
			min = b;

		}
	}

	printf("所有元素中的最大值是%d\n", max);
	printf("所有元素中的最小值是%d\n", min);

	t = max;
	max = a[0];
	a[0] = t;

	t = min;
	min = a[5];
	a[5] = t;

	printf("改动后的数组为：");
	for (i = 0;i < 6;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}