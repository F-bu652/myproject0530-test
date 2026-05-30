#include<stdio.h>
int main()
{
	float num  = 64.25;
	printf("Enter a float-point value:%.2f\n", num);
	printf("fixed-point:%.6f\n", num);
	printf("expontial notation:%.6e\n", num);
	printf("p notation:%.2a", num);
	return 0;
}