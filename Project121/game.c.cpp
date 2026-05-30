
#define _CRT_SECURE_NO_WARNINGS

#include "game.h.cpp"

void InitBoard(char board[ROWS][COLS], int r, int c, int set)
{
	int i = 0;
	for (i = 0;i < r;i++)
	{
		int j = 0;
		for (j = 0;j < c;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisPlayboard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	for (i = 0;i < r;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i < r;i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1;j < c;j++)
		{
			printf("%c ", board[i][j]);
		}
	}
}

void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int GetMineBoard(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y+1] + mine[x][y+1] + mine[x+1][y+1] 
		+mine[x+1][y] + mine[x+1][y-1]+ mine[x][y-1] 
		+ mine[x-1][y-1] + mine[x-1][y] - 8 * '0';
}
 
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;


}
