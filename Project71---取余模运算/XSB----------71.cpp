#include<stdio.h>
int main(void)
{
	int m1=0, m2 = 0,m3=0;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:\n");
	scanf_s("%d",&m1);

	printf("Now enter the frist operand:");
	scanf_s("%d", &m2);

	while (m2 > 0)
	{
		printf("%d ", m2);
		printf("%");
		printf(" %d is", m1);
		printf(" %d\n", m2 % m1);

		printf("Enter next number for first operand(<0 to quit):");
		scanf_s("%d", &m2);

		return 0;
	}
	printf("Done!");

	return 0;
	}