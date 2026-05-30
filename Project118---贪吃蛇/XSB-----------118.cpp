#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  // 用于随机数种子

// ==================== 跨平台适配（Windows/Linux/Mac） ====================
#ifdef _WIN32
// Windows 环境
#include <windows.h>
#include <conio.h>   // Windows 保留 conio.h
#define CLEAR_SCREEN() system("cls")
#define SLEEP(ms) Sleep(ms)
#define KBHIT() _kbhit()
#define GETCH() _getch()
#else
// Linux/Mac 环境（使用 ncurses 库）
#include <ncurses.h>
#include <unistd.h>
#define CLEAR_SCREEN() clear()
#define SLEEP(ms) usleep(ms * 1000)
#define KBHIT() (getch() != ERR)  // ncurses 非阻塞输入
#define GETCH() getch()
#endif

// ==================== 游戏配置 ====================
#define WIDTH 30   // 游戏区域宽度
#define HEIGHT 20  // 游戏区域高度
#define INIT_LEN 3 // 蛇初始长度

// 蛇身节点结构体
typedef struct {
    int x;  // 横坐标
    int y;  // 纵坐标
} SnakeNode;

// 游戏全局变量
SnakeNode snake[WIDTH * HEIGHT];  // 蛇身数组（最大长度=区域总格子数）
int snake_len = INIT_LEN;         // 当前蛇长度
int food_x, food_y;               // 食物坐标
char direction = 'r';             // 初始方向（r=右, l=左, u=上, d=下）
int score = 0;                    // 分数
int game_over = 0;                // 游戏结束标记

// ==================== 函数声明 ====================
void init_game();         // 初始化游戏
void draw_game();         // 绘制游戏界面
void handle_input();      // 处理键盘输入
void move_snake();        // 移动蛇
void generate_food();     // 生成食物
int check_collision();    // 碰撞检测（边界/自身）

// ==================== 主函数 ====================
int main() {
    // Linux/Mac 初始化 ncurses
#ifndef _WIN32
    initscr();            // 初始化 ncurses
    cbreak();             // 禁用行缓冲
    noecho();             // 不回显输入字符
    keypad(stdscr, TRUE); // 启用功能键（方向键）
    nodelay(stdscr, TRUE);// 设置非阻塞输入
#endif

    srand(time(NULL));    // 初始化随机数种子（食物生成）
    init_game();          // 初始化游戏

    // 游戏主循环
    while (!game_over) {
        draw_game();      // 绘制界面
        handle_input();   // 检测键盘输入
        move_snake();     // 移动蛇
        SLEEP(200);       // 控制游戏速度（数值越小速度越快）

        // 碰撞检测：边界/自身
        if (check_collision()) {
            game_over = 1;
            CLEAR_SCREEN();
            printf("\n====================\n");
            printf("    游戏结束！\n");
            printf("    最终得分：%d\n", score);
            printf("====================\n");
            printf("按任意键退出...\n");
            GETCH(); // 等待按键
            break;
        }
    }

    // Linux/Mac 释放 ncurses 资源
#ifndef _WIN32
    endwin();
#endif
    return 0;
}

// ==================== 初始化游戏 ====================
void init_game() {
    // 初始化蛇身（初始在屏幕左侧，水平向右）
    for (int i = 0; i < snake_len; i++) {
        snake[i].x = WIDTH / 2 - i;  // 蛇头在中间，身体向左延伸
        snake[i].y = HEIGHT / 2;
    }

    // 生成第一个食物
    generate_food();

    // 初始化分数和游戏状态
    score = 0;
    game_over = 0;
    direction = 'r'; // 初始向右
}

// ==================== 绘制游戏界面 ====================
void draw_game() {
    CLEAR_SCREEN(); // 清屏

    // 绘制上边界
    printf("+");
    for (int i = 0; i < WIDTH; i++) printf("-");
    printf("+\n");

    // 绘制游戏区域（每行）
    for (int y = 0; y < HEIGHT; y++) {
        printf("|"); // 左边界
        for (int x = 0; x < WIDTH; x++) {
            int is_snake = 0;
            int is_food = 0;

            // 判断当前位置是否是蛇身
            for (int i = 0; i < snake_len; i++) {
                if (snake[i].x == x && snake[i].y == y) {
                    is_snake = 1;
                    // 蛇头用 '@'，蛇身用 '○'
                    printf(i == 0 ? "@" : "○");
                    break;
                }
            }
            if (is_snake) continue;

            // 判断当前位置是否是食物
            if (x == food_x && y == food_y) {
                is_food = 1;
                printf("●"); // 食物用 '●'
            }
            if (is_food) continue;

            // 空区域
            printf(" ");
        }
        printf("|\n"); // 右边界
    }

    // 绘制下边界
    printf("+");
    for (int i = 0; i < WIDTH; i++) printf("-");
    printf("+\n");

    // 显示分数和操作提示
    printf("分数：%d | 操作：方向键控制 | 撞墙/撞自己=游戏结束\n", score);
    fflush(stdout); // 强制刷新输出（避免界面卡顿）
}

// ==================== 处理键盘输入（方向键） ====================
void handle_input() {
    // 检测是否有按键按下（非阻塞）
    if (KBHIT()) {
        int key = GETCH(); // 获取按键

        // 适配方向键码（Windows/ncurses 统一）
        switch (key) {
#ifdef _WIN32
            // Windows 方向键（两字节：0xE0 后接键码）
        case 0xE0:
            key = GETCH();
            switch (key) {
            case 72: if (direction != 'd') direction = 'u'; break; // 上
            case 80: if (direction != 'u') direction = 'd'; break; // 下
            case 75: if (direction != 'r') direction = 'l'; break; // 左
            case 77: if (direction != 'l') direction = 'r'; break; // 右
            }
            break;
#else
            // Linux/Mac ncurses 方向键
        case KEY_UP:    if (direction != 'd') direction = 'u'; break;
        case KEY_DOWN:  if (direction != 'u') direction = 'd'; break;
        case KEY_LEFT:  if (direction != 'r') direction = 'l'; break;
        case KEY_RIGHT: if (direction != 'l') direction = 'r'; break;
#endif
        }
    }
}

// ==================== 移动蛇 ====================
void move_snake() {
    // 1. 保存旧蛇头位置，计算新蛇头位置
    SnakeNode old_head = snake[0];
    SnakeNode new_head = old_head;

    // 根据方向更新新蛇头坐标
    switch (direction) {
    case 'u': new_head.y--; break; // 上
    case 'd': new_head.y++; break; // 下
    case 'l': new_head.x--; break; // 左
    case 'r': new_head.x++; break; // 右
    }

    // 2. 移动蛇身（从尾到头，每个节点继承前一个节点的位置）
    for (int i = snake_len - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    // 3. 更新蛇头为新位置
    snake[0] = new_head;

    // 4. 判断是否吃到食物
    if (new_head.x == food_x && new_head.y == food_y) {
        snake_len++;       // 蛇身变长
        score += 10;       // 加分
        generate_food();   // 生成新食物
    }
}

// ==================== 生成食物（避免生成在蛇身上） ====================
void generate_food() {
    // 循环生成，直到食物不在蛇身上
    while (1) {
        // 随机生成食物坐标（范围：0~WIDTH-1, 0~HEIGHT-1）
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;

        // 检查是否和蛇身重叠
        int overlap = 0;
        for (int i = 0; i < snake_len; i++) {
            if (snake[i].x == food_x && snake[i].y == food_y) {
                overlap = 1;
                break;
            }
        }

        // 无重叠则退出循环
        if (!overlap) break;
    }
}

// ==================== 碰撞检测（边界/自身） ====================
int check_collision() {
    SnakeNode head = snake[0];

    // 1. 边界碰撞（超出游戏区域）
    if (head.x < 0 || head.x >= WIDTH || head.y < 0 || head.y >= HEIGHT) {
        return 1;
    }

    // 2. 自身碰撞（蛇头撞到身体）
    for (int i = 1; i < snake_len; i++) {
        if (head.x == snake[i].x && head.y == snake[i].y) {
            return 1;
        }
    }

    return 0; // 无碰撞
}