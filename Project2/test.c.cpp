#include<stdio.h>
int main()
{
	int n;
	printf("n=");
	scanf_s("%d", &n);

	if (n % 10 == 0)
		printf("%dÊÇ10µÄ±¶Êý¡£", n);
	
	return 0;
}