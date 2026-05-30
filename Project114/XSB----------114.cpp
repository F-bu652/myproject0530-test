#include<stdio.h>
int main()
{
	int a[]{ 12,4,5,63,8 };
	int b = 0;
	int c = 0;
	int t = 0;

	for (b = 0;b < 5;b++)
	{
		for (c = b;c < 5;c++)
		{
			if (a[b] > a[c])
			{
				t = a[b];
				a[b] = a[c];
				a[c] = t;
			}
		}
	}
	for (b = 0;b < 5;b++)
	{
		printf("%d ", a[b]);
	}
	return 0;
}