#include<stdio.h>
int main()
{
	int a[10]{ 1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(a) / 4;
	int* p;
	int i = 0;

	for (i = 1;i <= 3;i++)
	{
		p = a + n - 1;
		int t = 0;
		t = *p;
		while (p > a)
		{
			*p = *(p - 1);
			p--;
		}
		*p = t;
	}

	for (p > a;p < a + n;p++)
	{
		printf("%d ", *p);
	}
	return 0;
}