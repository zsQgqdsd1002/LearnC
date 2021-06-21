//#define _CRT_SECURE_NO_WARNINGS 1
//#define ROW 9
//#define COL 9
//#define ROWS ROW + 3
//#define COLS COL + 3
//#define MINE_COUNT 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void InitBoard(char board[][COLS], int row, int col, char c);
//void ShowBoard(char board[][COLS], int row, int col);
//void SetMine(char board[][COLS], int row, int col);
//int GetMineCount(char b[][COLS], int x, int y);
//void JudgeMine(char user_display[][COLS], char mine[][COLS], int row, int col);
//
//
//void Menu()
//{
//	printf("******************\n");
//	printf("***欢迎来到扫雷***\n");
//	printf("******0.exit******\n");
//	printf("******1.play******\n");
//	printf("******************\n");
//}
//void InitBoard(char board[][COLS], int row, int col, char c)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = c;
//		}
//	}
//}
//
//void ShowBoard(char board[][COLS], int row, int col)
//{
//	printf("--------------begin-----------\n");
//	for (int i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	for (int i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (int j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("---------------end------------\n");
//}
//void SetMine(char board[][COLS], int row, int col)
//{
//	int mine_count = MINE_COUNT;
//	while (mine_count > 0)
//	{
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//		if(board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			mine_count--;
//		}
//	}
//}
//int GetMineCount(char b[][COLS], int x, int y)
//{
//	return (b[x - 1][y - 1]) + (b[x - 1][y]) + (b[x - 1][y + 1]) +
//		(b[x][y - 1]) + (b[x][y + 1]) + (b[x + 1][y - 1]) +
//		(b[x + 1][y]) + (b[x + 1][y + 1]) - 8 * '0';
//}
//void JudgeMine(char user_display[][COLS], char mine[][COLS], int row, int col)
//{
//	int step_count = 0;
//	while (step_count < row * col - MINE_COUNT)
//	{
//		printf("please enter x,y: ");
//		fflush(stdout);
//		int x, y;
//		scanf("%d,%d", &x, &y);
//
//		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("踩雷了!\n");
//				ShowBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int mine_count = GetMineCount(mine, x, y);
//				printf("mine_count : %d\n", mine_count);
//				user_display[x][y] = mine_count + '0';
//				ShowBoard(user_display, ROW, COL);
//
//				step_count++;
//			}
//		}
//		else
//		{
//			printf("输入的坐标错误， 请重新输入\n");
//		}
//	}
//
//	if (step_count == ROW * COL - MINE_COUNT)
//	{
//		printf("你就是扫雷之王?\n");
//	}
//
//}
//
//void Game()
//{
//	char user_display[ROWS][COLS];
//	char mine_board[ROWS][COLS];
//	InitBoard(user_display, ROWS, COLS, '?');
//	InitBoard(mine_board, ROWS, COLS, '0');
//	ShowBoard(user_display, ROW, COL);
//	SetMine(mine_board, ROW, COL);
//	JudgeMine(user_display, mine_board, ROW, COL);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	setvbuf(stdout, NULL, _IONBF, 0);
//	int input;
//	do
//	{
//		Menu();
//		printf("请输入你的选择:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("再见拜拜");
//			break;
//		case 1:
//			Game();
//			break;
//		default:
//			printf("请重新输入!\n");
//		}
//	} while (input != 0);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <time.h>
//
//#define ROW 9
//#define COL 9
//
//#define ROWS ROW+2
//#define COLS COL+2
//
//#define MINE_COUNT 10
//
//void InitBoard(char board[][COLS], int row, int col, char c);
///*
//* row: 雷区的行
//* col ：雷区的列
//*/
//void SetMine(char board[][COLS], int row, int col);
//
//void ShowBoard(char board[][COLS], int row, int col);
//
//void JudgeMine(char user_display[][COLS], char mine[][COLS], int row, int col);
//
//
//void InitBoard(char board[][COLS], int row, int col, char c)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = c;
//		}
//	}
//}
//
//void ShowBoard(char board[][COLS], int row, int col)
//{
//	//printf("--------------begin-----------\n");
//	for (int i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	for (int i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (int j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("---------------end------------\n");
//}
//
//void SetMine(char board[][COLS], int row, int col)
//{
//	int mine_count = MINE_COUNT;
//
//	//[1,9]
//	//rand() ==> [0, 32767]
//	//rand() % 9  ==> [0, 8]
//	while (mine_count > 0)
//	{
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//		if(board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			mine_count--;
//		}
//	}
//}

//
//void Game()
//{
//	/*
//	* 1.初始化两个棋盘， 给用户展示的棋盘， 一个是代码计算是否有雷的棋盘
//	*     1.2 给用户展示的棋盘， 初始化为?
//	*     1.3 给代码棋盘初始化为全字符0
//	* 2.给代码棋盘初始化雷区
//	*     2.1 随机进行初始化雷区
//	* 3.给用户展示的棋盘就展示出来
//	* 4.采集用户输入， 进行判断
//	*     踩雷： 游戏结束
//	*     没有踩雷： 
//	*         计算当前位置， 附近的雷的数值， 展示给用户
//	*/
//	char user_display[ROWS][COLS];
//	char mine_board[ROWS][COLS];
//
//	InitBoard(user_display, ROWS, COLS, '?');
//	InitBoard(mine_board, ROWS, COLS, '0');
//
//	ShowBoard(user_display, ROW, COL);
//	//ShowBoard(mine_board, ROW, COL);
//
//	SetMine(mine_board, ROW, COL);
//	//ShowBoard(mine_board, ROW, COL);
//
//	JudgeMine(user_display, mine_board, ROW, COL);
//}
//
//int GetMineCount(char b[][COLS], int x, int y)
//{
//	return b[x - 1][y - 1] + b[x - 1][y] + b[x - 1][y + 1] +
//		b[x][y - 1] + b[x][y + 1] + b[x + 1][y - 1] +
//		b[x + 1][y] + b[x + 1][y + 1] - 8 * '0';
//}
//
//
//void JudgeMine(char user_display[][COLS], char mine[][COLS], int row, int col)
//{
//	int step_count = 0;
//	while (step_count < row * col - MINE_COUNT)
//	{
//		printf("please enter x,y: ");
//		fflush(stdout);
//		int x, y;
//		scanf("%d,%d", &x, &y);
//
//		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("很遗憾， 踩到雷了， 游戏结束\n");
//				ShowBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int mine_count = GetMineCount(mine, x, y);
//				user_display[x][y] = mine_count + '0';
//				ShowBoard(user_display, ROW, COL);
//
//				step_count++;
//			}
//		}
//		else
//		{
//			printf("输入的坐标错误， 请重新输入\n");
//		}
//	}
//
//	if (step_count == ROW * COL - MINE_COUNT)
//	{
//		printf("恭喜你， 你赢了...\n");
//	}
//
//}
//
//void Menu()
//{
//	printf("*************begin game****************\n");
//	printf("*** 1. paly ************** 2. 退出******\n");
//	printf("*****************end*******************\n");
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	setvbuf(stdout, NULL, _IONBF, 0);
//	int input = 0;
//	do
//	{
//		Menu();
//		printf("please select: ");
//		fflush(stdout);
//
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Game();
//			break;
//		case 2:
//			printf("即将退出， 拜拜， 欢迎下次再来\n");
//			input = 0;
//			break;
//		default:
//			printf("输入的内容有误， 请重新开始...\n");
//			input = 9999;
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}