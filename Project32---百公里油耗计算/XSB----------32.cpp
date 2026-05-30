#include<stdio.h>
const double ATT=3.785;
const double BTT=1.609;
int main(void)
/*void可为返回值以不返回任何数；
      其也可以接受任意指针的赋值，也可以将任意类型的指针赋值给它*/
{
	double myVaruable = 1.0/3.0;
	printf("Please enter the mileage and the consumption of fossil in the travelling:");

	double mileage, gallon = 0.0;
	scanf_s("%lf",&mileage);
	scanf_s("%lf",&gallon);

	printf("%.1lf\n",mileage/gallon);
	printf("%.1lf", mileage*ATT / gallon*BTT);

	return 0;
	
}