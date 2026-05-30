#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<easyx.h>

#define ROW 10
#define COL 10
#define MineNum 10 //雷的数量

void show(int map[][COL]); 
void init(int map[][COL]);

int main()
{
	//扫雷地图
	int map[10][10]{};
	
	init(map);
	show(map);

	return 0;
}
void show(int map[][COL])
{
	for (int i = 0;i < ROW;i++)
	{
		for(int k = 0;k <COL;k++)
		{
			printf("%4d", map[i][k]);
		}
		printf("\n");
	}
}
//初始化数据
void init(int map[][COL])
{
	//设置随机数种子
	srand((unsigned int)time(NULL));
	//随机设置十个雷，用1表示
	for (int i = 0; i < MineNum; )
	{
		//数组的有效下标[0,9]
		int r = rand() % ROW;
		int c = rand() % COL;
		
		//排除重复的雷
		if (map[r][c] == 0)
		{
			//保证成功设置雷 
			map[r][c] = -1;
			i++;
		}	
	}
	for (int i = 0;i < ROW;i++)
	{
		for (int k = 0;k < COL;k++)
		{
			//找到雷并遍历所在的九宫格——找所在九宫格内是否还存在雷,以及存在几个雷
			if (map[i][k] == -1)
			{
				for (int r = i-1;r <= i+1; r++)
				{
					for (int c = k - 1;c <= k + 1; c++)
					{
						if ((r>=0 && r<ROW && c>=0 && c<COL) && map[r][c] != -1)
						{
							++map[r][c];
						}
					}
				}
			}
		}
	}
}