#include<stdio.h>
int main()
{
	printf("请分别输入你的年龄和月份：");
	int year = 0;
	int month = 0;

	scanf_s( "%d %d", & year,&month);
	
	printf("已活过的天数为%d天。\n",year*365+month*30);

	return 0;
	
}