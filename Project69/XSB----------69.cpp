#include<stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54
int main(int agrc,char*agrv[])
{
	int feet = 0;
	float inches, cm = 0;
	printf("CONVERT CM TO INCHES!\n");
	printf("Enter the height in centimeter:");
	scanf_s("%f", &cm);
	while (cm > 0)
	{
		feet = cm / FEET_TO_CM;
		inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
		printf("%.lf cm =%d feet,%.1f inches\n", cm, feet, inches);
		printf("Enter the height in centimeters(<=0 TO QUIT):");
		scanf_s("%f", &cm);
	}
	return 0;
}