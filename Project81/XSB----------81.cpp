#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void menu()
{
	printf("************\n");
	printf("** 1.play **\n");
	printf("** 0.Esc  **\n");
	printf("************\n");
}

void game()
{
	int r = rand() % 100 + 1;//1.生成随机数

	int guess = 0;//猜数字——循环

	system("cls");//清空界面

	while (1)
	{
		printf("请猜数字：");
		scanf_s("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
			break;
		}
		else if (guess < r)
		{
			printf("猜小了\n");
			break;
		}
		else(guess = r);
		{
			printf("恭喜你，猜对了，数字是%d\n" ,r);
			break;
		}
	}


}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();

		printf("输入——>:");
		scanf_s("%d", &input);
		 
		switch (input)
		{
		case 1:
		{
			printf("输入正确，请开始游戏。\n");
			game();
			break;
		}
	    case 0:(input == 0);
	
		{
			printf("游戏结束，请退出\n");
			break;
		}default:
		{
			printf("选择错误\n");
			break;
		}
		}
	} while (input);

	return 0;
}