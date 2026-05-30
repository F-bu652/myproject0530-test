#include<stdio.h>
int main()
{
	int a = 0;
	int b[100]{};
	int d[100]{};
	int sum = 0;
	int i = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	
	for (i = 1;i <= 5000;i++)
	{
		
		for (a = 1;a < i;a++)
		{
			if (i % a == 0)
			{
				b[y] = a;
				y++;
				n++;
			}	
		}

		for (a = 0;a < n;a++)
		{
			//这里要注意中括号内的变量与循环在使用的变量保持一致，使得循环正常进行。
			sum += b[a];
		}

		if (sum == i)
		{
			d[x] = i;
			x++;
		}

		for (y = 0;y < n + 1;y++)
		{
			b[y] = 0;
		}
		y = 0;
		n = 0;
		sum = 0;
		//这里是一处错误：没有将数组中用来存储因数量的y值，记录因数量的n，记录因数和的
		//sum值初始化导致后面的循环惊醒时发生紊乱。
	}

	printf("5000及以内的完数有：\n");
	for (x = 0;x < 100;x++)
	{
		printf("%d ", d[x]);
		if ((x + 1) % 3 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
