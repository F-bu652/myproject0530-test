#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float t;
	int cd = 0;
	int ad = 0;

	printf("Enter the list of daily low tempertures.\n");
	printf("Use Celsius,and enter q to quit.\n");

	while (scanf_s("%f", &t) == 1)
	{
		ad++;
		if (t < FREEZING)
			cd++;
	}//判断冷天气天数
	if (ad != 0)
		printf("%d days total :%.f%% were below freezing.\n",
			ad,100.0 *(float) cd/ad);
	//输出0度以下温度在样本总量中的占比（强制输出整数百分比）
	if (ad == 0)
		printf("No data entered!\n");

	return 0;
}