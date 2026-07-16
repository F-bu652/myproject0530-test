#include<stdio.h>
void swap(int* a, int* b);

int main(void)
{
	int a = 12;
	int b = 82;

	printf("交换前：a=%d b=%d\n", a, b);
	printf("交换后：a=%p b=%p\n", &a,&b);

	swap(&a, &b);

	printf("交换后：a=%d b=%d\n", a, b);
	printf("交换后：a=%p b=%p\n", &a, &b);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//变量地址固定不变，变量值可以改变。