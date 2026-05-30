#include<stdio.h>
#define MONTH 12
#define YEARS 5
int main(void)
{
	const float rain[YEARS][MONTH] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};

	int year = 0;
	int month = 0;
	float sum = 0;
	float pum = 0;

	for (year = 0;year < YEARS;year++)
	{
		for (month = 0,sum=0;month < MONTH;month++)
			sum += rain[year][month];
		printf("The sum of %d year is %f inches.\n", 2010 + year, sum);
		pum += sum;

	}

	printf("\nThe average of the five year is %f inches.\n\n", pum / YEARS);
	printf("JAN FRE MAT APL MAY JUN JUL AUG SEP OCT NOV DEC\n");

	for (month = 0;month < MONTH;month++)
	{
		for (year = 0,sum=0;year < YEARS;year++)
			sum += rain[year][month];
		printf("%f ", sum/YEARS);
		
	}
	return 0;
}