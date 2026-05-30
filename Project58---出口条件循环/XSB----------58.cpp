#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered = 0;

	do
	{
		printf("To enter the triskaphobia therapy club,\n");
		printf("piease enter the secret code number:");
		scanf_s("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations!You are cured!\n");
	return 0;
}