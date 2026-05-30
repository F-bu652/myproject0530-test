#include<stdio.h>
#include<math.h>
int main()
{
	double js = 3.14;
	double r = 0.0;
	double h = 0.0;
	double zc = 0.0;
	double mj = 0.0;
	double yqbmj = 0.0;
	double yqtj = 0.0;
	double yztj = 0.0;

	scanf_s("%d %d", &r, &h);

	zc = 2 * js * r;
	mj = r * r * js;
	yztj = r * r * js * h;
	yqbmj = 4 * js * r * r;
	yqtj = static_cast<float>(4) / 3 * js * r * r * r;

	printf("%lf", zc);
	printf("%lf", mj);
	printf("%lf", yztj);
	printf("%lf", yqbmj);
	printf("%lf", yqtj);

	return 0;
}