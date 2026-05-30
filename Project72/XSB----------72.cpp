#include<stdio.h>
void pound(int n);
int main(void)
{
	int row = 0;
	char ch = 0;

	for (row = 1;row < 5;row++)
	{
		for (ch = 0;ch++;) {
			printf("$$$$$$$$");
		}
		printf("\n");
	}
	return 0;
} 
void pound(int n)
{
	while (n-- > 0)
		printf("$");
	printf("\n");
}