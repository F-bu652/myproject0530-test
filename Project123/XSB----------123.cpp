#include<stdio.h>
int main()
{
	int a = 0;
	char b = 0;
	int c = 0;

	printf("请输入需要判断的数：\n");
	scanf_s("%d", &a);

	if (a >= 0 && a < 60)
	{
		b = 'D';
		c = 1;
	}
	else if (a >= 60 && a < 70)
	{
		b = 'C';
		c = 2;
	}
	else if (a >= 70 && a < 85)
	{
		b = 'B';
		c = 3;
	}
	else if (a >= 85 && a <= 100)
	{
		b = 'A';
		c = 4;
	}

	switch (c)
	{
	case 1:
		printf("该成绩的等级是%c",b);
		break;
	case 2:
		printf("该成绩的等级是%c", b);
		break;
	case 3:
		printf("该成绩的等级是%c", b);
		break;
	case 4:
		printf("该成绩的等级是%c", b);
		break;
	
	}
	return 0;
}