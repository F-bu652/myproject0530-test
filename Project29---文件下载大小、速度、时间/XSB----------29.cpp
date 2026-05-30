#include<stdio.h>
int main()
{
	printf("Please enter the megabits and second:");
	float megabits = 0;
	float second = 0;

	scanf_s("%f", &megabits);
	scanf_s("%f", &second);

	printf("At %f megabits per second,a file of %f megabits,\n",megabits/second,megabits);
	printf("download in %f second.\n", second);

    return 0;

}