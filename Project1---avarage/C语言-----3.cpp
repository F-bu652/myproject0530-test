#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	double c = (a + b) / 2.0;
	printf("%d与%d的平均值=%f\n", a, b, c);
	return 0;
}