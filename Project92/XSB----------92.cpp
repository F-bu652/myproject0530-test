#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	
	for (i = 1;i < 8;i++)
	{
		if (i <= 4)
		{
			for (i = 1;i <= 4;i++)
			{
				for (b = 1;b <= 4 - i;b++)
				{
					printf(" ");
				}
				for (a = 1;a <= 2 * i - 1;a++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		else {
			for (i = 5;i < 8;i++)
			{
				for (b = 1;b <= i - 4;b++)
				{
					printf(" ");
				}
				for (a = 1;a <= 7-2*(i-4);a++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
	}

	return 0;
}