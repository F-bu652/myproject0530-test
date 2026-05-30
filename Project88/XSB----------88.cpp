#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch = 65;

	while ((ch = getchar()) != '\n')//此处易犯错误：将getchar()视为输入的全部，忘记带输入类型
	{
		if (isalpha(ch) )
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);

	return 0;
}