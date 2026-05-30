#include<stdio.h>
int main()
{
	float height = 0.0;
	char name[40];
	printf("Please enter your height(ภๅรื) and name:");
		scanf_s("%f",&height);
		scanf_s("%s", &name, 20);

		printf("%s,you are %f inch.\n",name,height/2.54);
		return 0;
}