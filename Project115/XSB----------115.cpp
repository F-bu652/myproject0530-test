#include<stdio.h>
int main()
{
	int a = 0;
	int b(int x);
	long long int c[25]{};
	int d = 0;
	int e = 0;

	for (a = 1;a < 21;a++)
	{
		c[a] = b(a);
	}

	for (a = 1;a < 21;a++)
	{
		printf("%2d!= %lld\n", a, c[a]);
	}
	
	return 0;
}
int b(int x)
{
	int t = 0;
	long long int js = 1;
	for (t = 1;t < x + 1;t++)
	{
		js *= t;
	}
	return js;
}