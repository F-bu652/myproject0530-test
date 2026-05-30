#include<stdio.h>
int main(void)
{
	long num = 0;
	long sum = 0L;
	int status=0;

	printf("Please enter an integer to be summed");
	printf("( to quit):");
	status = scanf_s("%ld", &sum);
	while (status == 1)
	{
		sum = sum + num;
		printf("Please enter next ingeger (Q to quit):");
		status = scanf_s("%ld", &num);
	}
	printf("Those integer sum to %ld.", sum);

	return 0;
}