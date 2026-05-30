#include<stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	int num1 = 0;
	int t = 0;
	i < 100000;
	int a[5]{};
	int b = 0;

	printf("请输入一个六位数以下的整数：");
	scanf_s("%d", &i);

	if (i < 100000 && i>1)
	{
		i /= 10;
		num++;
	}
	printf("该数是%d位数\n", num);
	for (b = 1;b <= num;b++)
	{
		t = b - 1;
		a[t] = i % 10;
		i /= 10;
		t++;
	}
	for (i = 4;i > 0;i--)
	{
		num1 += (a[i]*10);
	}
	printf("%d", num1);
	return 0;
}