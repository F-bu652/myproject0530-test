#define _CRT_SECURE_NO_WARNINGS

#include "game.h.cpp"//应用其中的头文件，使该界面作用更纯粹，利于检查，使程序更好看

//对于基础棋盘的布置
void InitBoard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;//打印并记录每一个的字的坐标
		}
	}
}
//游戏矩阵布置，知道行号列号方便游戏后续进行（将初始化界面放置在合法的不包括行列号打印行在内的矩阵界面内）
//r为包括行列号在内的矩阵规格量（即以r*r为标准的矩阵），c为不包括行列号在内的矩阵规格量（即以c*c为标准的矩阵）
void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	printf("------扫雷游戏------\n");
	int i = 0;
	//打印列号
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);//行号的打印
		int j = 0;
		// 
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);//打印并记录每一个棋子的坐标
		}
		printf("\n");
	} 
}

//
//布置10个雷
//随机找10个合法坐标
//1. 在范围内
//2. 没有布置过雷
//
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{//在合法的原始棋盘内找到布置雷的位置
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		//在原始界面中确认布雷的数量为十个
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
			
		} 
	}
}
//方便游戏进行的项目：统计周围雷的数量方便下次排雷(以后台输出的实际情况为准进行统计）
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
//你在找雷时游戏是怎么运行的（相当于游戏在运行的细节）
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r * c - EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf_s("%d %d", &x, &y);

		//判断坐标的合法性（确认输入数值位于游戏进行矩阵内）
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{//坐标合法的情况下对正在排的雷的是否为雷的判断
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, r, c);
				break;
			}
			else
			{//坐标合法且未触雷的情况下对排查情况的判断
				//如果这个坐标没有被排查过
				if (show[x][y] == '*')
				{
					//统计这个坐标周围有几个雷
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, r, c);//将统计的雷的数量在进行界面中进行显示
					win++;
				}
				else
				{
					printf("该坐标，已经被排查过了\n");
				}
			}
		}
		else
		{
			printf("输入的坐标有误，重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, r, c);
	}//即当全部雷都被排除时，游戏胜利并结束
}
//整体逻辑解析：在我看来，此段程序更像是一段“应用”的内部运行逻辑。先框定该游戏的界面范围——再通过打印行列号和
//记录棋局内每个坐标点的坐标来与后面你输入的寻找坐标勾连，达到排雷的效果——第三步：布雷，在合法界面内找到10个
//坐标布10个雷——第四步：排雷，通过输入想要排雷的坐标点来达到排雷的效果（此处要保证输入坐标合法且有效），同时
//，要注意在成功排除某坐标点的雷后要利用后台数据统计该坐标点附近的雷，达到方便排雷的效果——我的预期：在成功排雷
//某坐标点后自动清除那些利用后台数据统计周边雷数为零的坐标，其停止界限为统计数据大于零的点。
//更深感悟：此组程序为对text.c程序的游戏具体运行方式的补充。  






