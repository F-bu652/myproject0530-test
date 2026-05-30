#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "\"Hua zijie\"";
	printf("%s\n", str);

	printf("%40s", str);

	printf("%-40s", str);

	int length = strlen(str) + 3;
	printf("%*s", length, str);

	return 0;
}

