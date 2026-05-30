#define _CRT_SECURE_NO_WARNINGS

#include "game.h.cpp"//利用该程序中的头文件
//进入的游戏的提示输入数值
void menu()
{
	printf("******************************\n");
	printf("******     1. play      ******\n");
	printf("******     0. exit      ******\n");
	printf("******************************\n");
}
//游戏运行时的显示界面设置包括可见界面（即在玩游戏时呈现的界面），不可见界面（相当于游戏在进行时这局游戏的后台
//显示的真实局内详细状况。界面变化的实况
void game()
{
	char mine[ROWS][COLS];//雷的信息布置到这个数组中
	char show[ROWS][COLS];//排查出的雷的信息存放在这里
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0',后台数据
	InitBoard(show, ROWS, COLS, '*');//'*',前端显示

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷 
	FindMine(mine, show, ROW, COL);
}
//进入游戏时游戏的宏观运行程序
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
    //游戏在每次重新开始时需要重新寻找雷的位置（为了避免任意两局游戏的雷的总体不重复性，使得游戏具有可玩性）
	do
	{
		menu();
		printf("请选择:");
		scanf_s("%d", &input);
		//检查输入数字：输入为‘0’时不可进行游戏，输入为‘1’时进入游戏，输入为其他数字时提示输入错误
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
		//
	} while (input);
}
//游戏总框架
int main()
{
	test();
	return 0;
}
//整体逻辑解析：在我看来，此段程序更像是一段“应用”的外部呈现逻辑。


