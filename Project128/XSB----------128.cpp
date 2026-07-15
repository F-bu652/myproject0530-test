#include<stdio.h>
int main()
{
	int a[100] = {};
	int n = 0;
	int b = 0;
	int i = 0;
	int sum = 0;
	int ave = 0;

	scanf_s("%d", &n);
	while (n != -1)
	{
		a[b] = n;
		sum += n;
		b++;
		scanf_s("%d", &n);
	}

	ave = sum / b;
	printf("平均数为%d\n", ave);

	for (i = 0;i < b;i++)
	{
		if (a[i] > ave)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}