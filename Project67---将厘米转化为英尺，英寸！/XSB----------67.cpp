#include<stdio.h>
#include<math.h>
#define INCH_TO_CM 2.54
#define FEET_TO_CM 30.48
int main(void)
{
	int  feet = 0;
	float cm = 0.0;
	double rt = 0.0, inches = 0.0;
	printf("Please enter your height(cm):\n");
	scanf_s("%f", &cm);
	while (cm > 0)
	{
		inches = cm / INCH_TO_CM;
		feet = inches / FEET_TO_CM;

		printf("%.1f", rt);
		rt = inches % INCH_TO_CM;
		printf("%f cm %.1f inches,%d feet.\n",cm, rt, feet);
		printf("Enter the next value(<0 to quit):");
		scanf_s("%f", &cm);
		return 0;
	}

	return 0;
}