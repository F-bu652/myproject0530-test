#include <stdio.h>
int main()
{
	printf("请输入需转换的英寸值：");
	double inch = 0.00;
    double cetermeter = 0.00;


	scanf_s("%lf", &inch);
	scanf_s("%lf", &cetermeter);

	printf("%lf",inch);
	printf("%lf",cetermeter);

	printf("长度是%f厘米。\n", inch*2.54);
	getchar();
	return 0;
}
	
	







