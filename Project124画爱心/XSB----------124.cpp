#include<stdio.h>
int main()
{
	float x = 0;
	float y = 0;

	for (y = 1.5f;y > -1.5f;y -= 0.1f)
	{
		for (x = -1.5f;x < 1.5f;x += 0.05f)
		{
			float a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0)
			{
				putchar('*');
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}