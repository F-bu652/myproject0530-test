#include<stdio.h>
int main()
{
	int cnt = 0;
	int n = 0;
	scanf_s("%d",&n);

	do
	{
		n /= 10;
		cnt++;
	} while (n);

	printf("%d", cnt);
	return 0;
}