#include<stdio.h>
int main()
{
	int e = 4, res = 1;
	for (int k = 0;0 < k < 5;++k) 
	{
		res *= e;
	}
	printf("%d", res);
}