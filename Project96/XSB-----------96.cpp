
#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int m = 0;
	int n = 0;
	
	for (a = 1; a < 10;a++)
	{
		for (b = 0;b < 10;b++)
		{
			for (c = 0; c < 10;c++)
			{
				m = a * a * a + b * b * b + c * c * c;
				n = a * 100 + b * 10 + c;
				if (m<1000 && m == n)
				{
					printf("水仙花数可以是%d\n", n);
				}
			}
		}
	}
	return 0;
}
/*
printf("%d\n", n);
		e = a * a * a;
		f = b * b * b;
		g = c * c * c;
		m = e + f + g;
		n = a * 100 + b * 10 + c;

		if (m == n)
		{
			printf("%d是水仙花数\n", n);

		}


*/