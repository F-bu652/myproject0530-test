/*#include<stdio.h>
#include<string.h>
int my_strlen(char* as)
{
	int cnt = 0;
	while (*as !='\0')
	{
		cnt++;
		as++;
	}
	
	return cnt;
}
char* my_strcpy(char* as, char* bs)
{
	char* s = as;
		while (*bs != '\0')
		{
			*as = *bs;
			as++;
			bs++;
		}
		*as = '\0';
		return s;
}
int my_strcmp(const char* as, const char* bs)
{
	while (* as && * bs &&* as == *bs)
	{
		as++;
		bs++;
	}
	return *as - *bs;
}
int main(int argc,char const *argv[])
{
	char as[] = "3270";
	char bs[] = "4197";
	int cmp = my_strcmp(as, bs);
	my_strcpy(as, bs);
	printf("len=%d\n", my_strlen(as));
	printf("cpy=%s\n", my_strcpy(as,bs));
	printf("cmp=%d\n", cmp);

	return 0;
}*/
#include<stdio.h>
#include<string.h>
int strlen(char* as)
{
	int cnt = 0;
	while (*as != '\0')
	{
		cnt++;
		as++;
	}
	return cnt;
}
char* strcpy(char* as, char* bs)
{
	char* s = as;
	while (*bs != '\0')
	{
		*as = *bs;
		as++;
		bs++;
	}
	*as = '\0';
	return s;
}
int strcmp(const char*as,const char *bs)
{
	while (*as && *bs && *as == *bs)
	{
		as++;
		bs++;
	}
	return *as - *bs;
}
int main()
{
	char as[] = "3270";
	char bs[] = "4197";

	strlen(as);
	int f = strcmp(as, bs);
	strcpy(as, bs);
	int b = strcmp(as, bs);

	printf("len=%d\n", strlen(as));
	printf("len=%s\n", strcpy(as,bs));
	printf("len=%d\n", f);
	printf("len=%d\n", b);
	return 0;
}
//易错点：1.注意strcpy函数在使用时，特别是在该程序中为char *类型，所以返回的strcpy
//的数据为整个数组，所以说strcpy的类型需是带*类型以更好返回数组。
//2.这里注意一下strcpy的位置，因为这个函数完全改变了as数组的值，所以说如果要使用未修
// 改前as数组的值必须将使用它的函数前置于strcpy前规范，若放于其后规范，则会使用修改
//后的值，如该程序运行结果所示。