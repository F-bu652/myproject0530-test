#include<stdio.h>
int br(void);
int main(void)
{
	char ch = '\a';
	printf("%c", ch);
	br();
}
int br(void)
{
	printf("STartle by the sudden sound,Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that\"\n");
	return 0;
}