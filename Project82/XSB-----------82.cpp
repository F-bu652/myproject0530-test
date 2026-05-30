#include<stdio.h>
#include<math.h>
int main(int argc, const char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	double x1 = 0;
	double x2 = 0;
	
	printf("Please enter the constant coefficient:\n");
	scanf_s("%d %d %d", &a, &b, &c);

	

	if (b * b - 4 * a * c >= 0)
	{
		x1 = 0.5 * (((-b) + sqrt(b * b - 4 * a * c)) / a);
		x2 = 0.5 * (((-b) - sqrt(b * b - 4 * a * c)) / a);

		printf("%.2f %.2f", x1, x2);
	}
	else if (b * b - 4 * a * c < 0)
	{
		printf("输入错误，请重新输入。");
	}
	return 0;
}