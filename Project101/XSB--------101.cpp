#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	char str1[3]{};
	char str2[3]{};
	char str3[6]{};

	for (i = 0;i < 12;i++)
	{
		if (i <= 2)
		{
			scanf_s("%3s", str1);
		}
		else if(i<=5)
		{
			scanf_s("%3s", str2);
		}
		else if (i <= 11)
		{
			scanf_s("%6s", str3);
		}
	}

		printf("%s %s %s", str1, str2, str3);
		printf("!");
		return 0;
}