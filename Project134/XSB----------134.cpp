#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[8];
	int i = 0;
	int n = 0;

	for(i=0;i<8;i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (i = 0;i < 8;i++)
	{
		if(arr[i] % 2 == 0)
		{
			n++;
		}
	}

	int* p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	int j = 0;
	for (i = 0;i < 8;i++)
	{
		if (arr[i] % 2 == 0)
		{
			p[j] = arr[i];
			j++;
		}
	}

	printf("原数组中的偶数组成的新数组为：");

	for (i = 0;i < n;i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	printf("新数组的首地址为：%p", p);
	free(p);
	return 0;
}
