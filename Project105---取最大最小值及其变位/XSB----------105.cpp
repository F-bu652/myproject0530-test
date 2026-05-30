#include<stdio.h>
int main()
{
	int a[5]{ 1,2,3,4,5 };
	int* p;
	int max = 0;
	int min = a[0];
	int i = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	
	p = a;
	printf("%p ", p);
	printf("\n");
	printf("%d\n", *p);

	for (i = 0;i < 5;i++)
	{
		if (max < a[i])
		{
			max = a[i];
			i = x;
		}
	}


	for (b = 1;b < 5;b++)
	{
		if (min > a[b])
		{
			min = a[b];
			b = y;
		}
	}

	printf("所有元素的最大值是%d\n", max);
	printf("所有元素的最小值是%d\n", min);

	b = a[0];
	a[0] = a[x];
	a[x] = b;

	b = a[4];
	a[4] = a[y];
	a[y] = b;

	printf("修正后的数组为:");
	for (c = 0;c < 5;c++)
	{
		printf("%d ", a[c]);
	}

	return 0;
}