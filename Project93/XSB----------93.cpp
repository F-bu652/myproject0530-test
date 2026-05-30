#include<stdio.h>
int main()
{
	int i = 0;
	int q = 0;
	int n = 0;
	int sum = 0;
	int average = 0;

	for (i = 1;i < 11;i++)
	{
		if (i % 2 != 0)
		{
			q = -i;
		}
		else if (i % 2 == 0)
		{
			q = i;
			n++;
			sum += q;
		}

		printf("q = %d,",q);
		printf("n = %d,", n);
		printf("sum = %d\n", sum);
	}

	
	average = sum / n;
	printf("正整数的平均数为%d", average);
	
	return 0;
}