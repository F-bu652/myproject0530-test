void vs(int * pa,int * pb)
{
	int z = *pa;
	*pa = *pb;
	*pb = z;
}

#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 20;
	printf("两数的值调换前：a=%d,b=%d\n", a, b);
	vs(&a, &b);
	printf("两数的值调换之后：a=%d,b=%d", a, b);
	return 0;
}