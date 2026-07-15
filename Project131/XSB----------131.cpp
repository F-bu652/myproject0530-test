#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5};
	int* p = arr;
	int a = 0;
	int b = 0;
	int i = 0;

	for (i = 0;i < 5/2;i++)
	{
		a = 4 - i;
		b = *(p+i);
		*(p+i) = *(p+a);
		*(p+a) = b;
	}

	printf("逆序数组输出为：");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}