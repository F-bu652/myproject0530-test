#include<stdio.h>Ñî»ÔÈı½Ç
int main()
{
	int i = 0;
	int j = 0;
	int a[20][20]{};
	for (i = 1;i <= 20;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (i == j)
			{
				a[i][j] = 1;
				printf(" %5d\n", a[i][j]);
			}
			else if (j == 1 && i != j)
			{
				a[i][j] = 1;
				printf(" %5d", a[i][j]);
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				printf(" %5d", a[i][j]);
			}
		}
	}
	return 0;
}
/*
			if (j == 1)
			{
				a[i][j] = 1;
				printf("  %d\n", a[i][j]);
			}
*/