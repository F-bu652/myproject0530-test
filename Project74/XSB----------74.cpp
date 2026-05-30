#include<stdio.h>
int main(int argc, const char* argv[])
{
	int g = 0, b = 0, s = 0;
	int count = 0;
	for (int b = 1;b < 5;b++)
	{
		for (int s = 1;s < 5;s++)
		{
			for (int g = 1;g < 5;g++)
			{
				if (b != s && s != g && g != b) {
					printf("%d,%d,%d\n", b, s, g);
					count++;
				}
			}
		}
	}
	printf("count=%d\n",count);
	return 0;
}