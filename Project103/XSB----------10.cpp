#include<stdio.h>
int main()
{
	int i = 0;
	int t = 0;
	int c = 0;
	int a[6]{ 1,2,3,4,5,6 };
	int b[6]{};

	printf("原数组如下：\n");
	for (i = 0;i < 6;i++)
	{
		printf("%d ", a[i]);
	}
	
	for (i = 0;i < 6;i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	printf("\n");
	printf("倒序数组如下：\n");

	for (i = 5;i >= 0;i--)
	{
		c = b[i];
		b[i] = a[5 - i];
		a[5 - i] = c;
		printf("%d ", a[5 - i]);
	}
	return 0;
}