//三个文件之间的关系game.h给game.c的运行提供函数的声明，text.c为游戏的具体操作界面，game.c为游戏在经过text.c
//的操作后的具体实现界面（即棋盘的具体呈现界面）
//game.h的功能：为棋盘的具体呈现界面提供初始化的数据、界面
//game.c的功能：游戏在经过操作界面后的具体呈现界面，包括初始界面（棋盘的具体初始布局）、布雷后的原始布局、原始布局进行掩饰后的界面、游戏进行界面
//game.c的功能：游戏的具体运行的界面，负责管理游戏的具体进程，如游戏的持续进行、完成之后的重新进行等等
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int r, int c);

//布置雷
void SetMine(char mine[ROWS][COLS], int r, int c);

//排查雷
//是在mine数组中排除雷的东西，存放到show数组中
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);
