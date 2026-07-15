#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int i = 0;
	int* p = arr;

	printf("按正常的输出顺序为：");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", p[i]);
	}

	printf("\n按指针算术运算方式输出为：");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}