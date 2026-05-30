#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];//name是一个能容纳四十个字符的数组

	printf("Hi!What's your first name?\n");
	scanf_s("%s",name,20);
	printf("%s,what is your weight in pound?\n",name);
	scanf_s("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n", letters);
	printf("and we have %d byte to store it.\n",size);

	return 0;
}
