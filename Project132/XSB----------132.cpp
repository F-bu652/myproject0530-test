#include<stdio.h>
int main()
{
	int arr[] = { 2,3,1,5,4 };
	int* p = arr;
	int i = 0;
	int* j = arr;
	int max = 0;

	for (i = 1;i < 5;i++)
	{
		if (arr[i] > arr[i - 1])
		{
			max = arr[i];
		}
	}
	
	for (i = 0;i < 5;i++)
	{
		j = &arr[i];
		printf("%p\n", j);
	}

	for(i=0;i<5;i++)
	{
		if (arr[i] == max)
		{
			p = &arr[i];
		}
	}
	printf("   %p", p);
	return 0;
}