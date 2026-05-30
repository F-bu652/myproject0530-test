#include<stdio.h>
int main()
{
	int dn[4] = {28,29,30,31};
	int mcn[7] = { 1,3,5,7,8,10,12};
	int mdn[5] = { 2,4,6,9,11 };
	int mb[4] = { 4,6,9,11 };
	int year = 0;
	int month = 0;
	int js = 0;

	printf("Please enter the year you need to judge:\n");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d年是闰年，请输入要判断的月份:\n",year);
		scanf_s("%d", &month);
		int i = 0;
			if (month == mcn[i])
			{
				js = dn[3];
			}
			else if (month == mdn[i])
			{
				if (month == mb[i])
				{
					js = dn[2];
				}
				else if (month ==2)
				{
					js = dn[1];
				}
			}
	}
	else
	{
		printf("%d年是平年，请输入要判断的月份:\n",year);
		scanf_s("%d", &month);
		int i = 0;
		if (month == mcn[i])
		{
			js = dn[3];
		}
		else if (month == mdn[i])
		{
			if (month == mb[i])
			{
				js = dn[2];
			}
			else if (month == 2)
			{
				js = dn[0];
			}
		}
	}

	printf("%d年%d月有%d天",year, month, js);

	return 0;
}