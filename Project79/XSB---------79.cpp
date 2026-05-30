#include<stdio.h>
int main()
{
	int num = 100;

	for (num = 100;num>=100 && num<=200;num++)
	{
		int flag = 1;
		for(int i = 2;i <= num - 1;i++)
		{
			if (num % i == 0)
			{
				flag = 0;
				break;
		}
		}
		if (flag == 1)
		{
			printf("%d ", num);
		}
	}
	return 0;
}