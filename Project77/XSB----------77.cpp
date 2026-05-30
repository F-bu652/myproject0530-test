#include<stdio.h>
int main(int argc,const char*argv[])
{
	printf("Please enter the number of the year and the day:\n");

	int year=0, month=0, day = 0;
	int sum = 0;
	int leap = 0;

	scanf_s("%d,%d,%d", &year,&month,&day);
	printf("year=%d,month=%d,day=%d", year, month, day);

	switch(month)
	{
	case 1:printf("1月份\n");sum = 0;break;
	case 2:printf("2月份\n");sum = 31;break;
	case 3:printf("3月份\n");sum = 59;break;
	case 4:printf("4月份\n");sum = 90;break;
	case 5:printf("5月份\n");sum = 120;break;
	case 6:printf("6月份\n");sum = 151;break;
	case 7:printf("7月份\n");sum = 181;break;
	case 8:printf("8月份\n");sum = 212;break;
	case 9:printf("9月份\n");sum = 243;break;
	case 10:printf("10月份\n");sum = 273;break;
	case 11:printf("11月份\n");sum = 304;break;
	default :printf("12月份\n");break;
	}//利用月份中天数来计算总天数，遇见特殊情况闰年是则是使用if语句的判断来辅助加减

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		leap = 1;
	}else
	{
		leap = 0;
	}//判定某年份是否为闰年
	if (leap == 1 && month > 2)
	{
		sum++;
	}//在判断年份为闰年的基础上对该情况进行辅助加减

	sum = sum + day;
	printf("总天数是%d\n",sum);

	return 0;
}