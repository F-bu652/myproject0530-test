#include<stdio.h>
char* find_address(char*s)
	{
	while (*s != '\0')
	{
		if (*s == ' ')
		{
			return s;
		}
		s++;
	}
	return NULL;

	}
int main()
{
	char as[] = "215 718";
	char* a = find_address(as);

	if (*a != NULL)
	{
		printf("%p", a);
	}
	else if (*a==NULL)
	{
		return NULL;
	}
	return 0;
}
//易错点：1.取地址专用的输出符是%p，%s输出的是自空格开始后的内容，%C输出的是空格本身
//这里要牢牢记住；
//2.*a是单个字符，类似于普通的字符类型，输出的是单个字符，如果硬取地址的话会出错，是
//假地址。