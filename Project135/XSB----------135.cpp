#include<stdio.h>
void remove_spaces(char* s);
int main()
{
	char as[] = "Hello world!";
	/*int i = 0;
    remove_spaces(as);
	for(i=0;i<11;i++)
	{
		if(as[i] != ' ')
			printf("%c", as[i]);
	}*/
	char* q=as;
	char* s=as;

	printf("%s\n", as);

	while (*q != '\0')
	{
		if (*q != ' ')
		{
			*s = *q;
			s++;
		}
		q++;
	}
	*s = '\0';

	printf("%s", as);
	return 0;
}

/*void remove_spaces(char* s)
{
	char* w = s;
	char* r = s;
	while (*r) {
		if (*r != ' ')
		{
			*w = *r;
			w++;
		}
		w++;
	}
	*w = '\0';
}*/