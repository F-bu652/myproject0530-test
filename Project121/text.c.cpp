#define _CRT_SECURE_NO_WARNING

#include "game.h.cpp"

void menu()
{
	printf("****************\n");
	printf("***  1.play  ***\n");
	printf("***  2.exit  ***\n");
	printf("****************\n");
}

void game()
{
	char mine[ROWS][COLS];//雷的信息布置到这个数组中
	char show[ROWS][COLS];//排查出的雷的信息存放在这里
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0',后台数据
	InitBoard(show, ROWS, COLS, '*');//'*',前端显示

	DisPlayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷 
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

		do {
			menu();
			printf("请输入：\n");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏。");
				break;
			default:
				printf("输入错误，请重新输入");
				break;
			}
		} while (input);
}

int main()
{
	test();
	return 0;
}