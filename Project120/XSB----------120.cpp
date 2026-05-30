#include<stdio.h>
int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000l;
	long start;
	long stop;
	double answer;

	printf("This program computes the sum of the squares of"
           "integers in a range.\n The lower bound should not "	
	       "be less than -10000000 and\n the upper bound "
	       "should not be more than +10000000.\nEnter the "
		   "limits (enter 0 for both limits to quit):\n"
	       "lower limit: ");
	start = get_long();
	printf("upper limit:");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("The sum of the squares of the integers ");
			printf("from %ld is %g\n",
				start, stop, answer);
		}
		printf("Enter the limits (enter 0 for ")
	}
	return 0;
}