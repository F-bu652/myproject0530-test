#include<stdio.h>
int  one_three(void);
int two(void);
int main(void)
{
	printf("starting now!\n");
	one_three();
	printf("\n");
	two();
	printf("");
	printf("done");
	return 0;
}
int one_three(void)
{
	printf("one");
	return 0;
}
int two(void)
{
	printf("two\n");
	printf("three\n");
	return  0;
}