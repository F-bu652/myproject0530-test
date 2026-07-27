#include<stdio.h>
#include<string.h>
int strlen(char* as)
{
	int cnt = 0;
	while (*as != '\0')
	{
		cnt++;
		as++;
	}
	return cnt;
}
char* strcpy(char* as, char* bs)
{
	char* s = as;
	while (*bs != '\0')
	{
		*as = *bs;
		as++;
		bs++;
	}
	*as = '\0';

	return s;
}
int strcmp(const char* as, const char* bs)
{
	while (*as && *bs && *as == *bs)
	{
		as++;
		bs++;
	}
	return *as - *bs;
}
int main()
{
	char as[] = "4197";
	char bs[] = "3270";

	strlen(as);
	int b = strcmp(as, bs);
	strcpy(as, bs);
	int f = strcmp(as, bs);

	printf("%d\n", strlen(as));
	printf("%s\n", strcpy(as, bs));
	printf("%d\n", b);
	printf("%d\n", f);

	return 0;
}