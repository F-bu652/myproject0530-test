#include<stdio.h>
#define SPACE ' '
int main(void)
 {
	char ch = 65;

	/*ch = getchar();//类似于scanf的输入(scanf("%ch",&ch))
	 
	 while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);//等同于自加
		ch = getchar();//再输入获取下一个字符
		
	}*/

	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		
	}

	putchar(ch);//输出，类似于（printf（"%c",ch))

	return 0;
}