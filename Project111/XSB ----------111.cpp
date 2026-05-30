#include<stdio.h>

int main()
{
	int n = 0;
	long long int sum1 = 1;
	long long int sum2 = 0;
	int b = 0;
	long long int c[100]{};
	int a = 0;

	for (n = 1;n < 21;n++)
	{
		for (b = n;b > 0;b--)
		{
			sum1 *= b;
		}
		c[n] = sum1;
		printf("%lld! = %lld\n", n, c[n]);
		sum1 = 1;
	}

	for (n = 1;n < 21;n++)
	{
		sum2 += c[n];
	}
	printf("这些数的阶乘之和为%lld", sum2);
	
	return 0;
}

	
