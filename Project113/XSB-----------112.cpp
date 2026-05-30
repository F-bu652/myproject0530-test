#include<stdio.h>
int main()
 {
	int a = 0, b = 0;
	int max = 0;

	printf("请输入两个数字：");
	scanf_s("%d %d", &a, &b);

	if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("最大值是%d", max);
	return 0;
}
