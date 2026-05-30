#include<stdio.h><q refer="2"></q><span class="_q_s"></span>
int main()
{
	char c;
	printf("Please enter a character:");
	scanf_s("%c", &c);
	printf("The ASCII value of %c is %dn",c,(int)c);
	return 0;
}