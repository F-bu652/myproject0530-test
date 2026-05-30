#include<stdio.h>
int main(int argc, const char* argv[])
{
	int i = 0, k = 0;
	printf("Please enter the profit of this month:\n");

	scanf_s("%d", &i);

	if (i <= 100000)
	{
		k = i * 0.1;
		printf("%d\n", k);
	}
	else if (i <= 200000)
	{
		k = 0.1 * 100000 + (i - 100000) * 0.075;
	}
	else if (i <= 400000)
	{
		k = 0.1 * 100000 + 100000 * 0.075 + (i - 200000) * 0.05;
	}
	else if (i <= 600000)
	{
		k = 0.1 * 100000 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03;
	}
	else if (i <= 1000000)
	{
		k = 0.1 * 100000 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015;
	}
	else(i > 1000000); {
		k = 0.1 * 100000 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 +400000*0.015 +(i - 1000000) * 0.01;
	}
	printf("The profit of this month is %d\n", k);

		return 0;
	}