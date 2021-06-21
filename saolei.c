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
//	printf("***��ӭ����ɨ��***\n");
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
//				printf("������!\n");
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
//			printf("������������ ����������\n");
//		}
//	}
//
//	if (step_count == ROW * COL - MINE_COUNT)
//	{
//		printf("�����ɨ��֮��?\n");
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
//		printf("���������ѡ��:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�ټ��ݰ�");
//			break;
//		case 1:
//			Game();
//			break;
//		default:
//			printf("����������!\n");
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
//* row: ��������
//* col ����������
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
//	* 1.��ʼ���������̣� ���û�չʾ�����̣� һ���Ǵ�������Ƿ����׵�����
//	*     1.2 ���û�չʾ�����̣� ��ʼ��Ϊ?
//	*     1.3 ���������̳�ʼ��Ϊȫ�ַ�0
//	* 2.���������̳�ʼ������
//	*     2.1 ������г�ʼ������
//	* 3.���û�չʾ�����̾�չʾ����
//	* 4.�ɼ��û����룬 �����ж�
//	*     ���ף� ��Ϸ����
//	*     û�в��ף� 
//	*         ���㵱ǰλ�ã� �������׵���ֵ�� չʾ���û�
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
//				printf("���ź��� �ȵ����ˣ� ��Ϸ����\n");
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
//			printf("������������ ����������\n");
//		}
//	}
//
//	if (step_count == ROW * COL - MINE_COUNT)
//	{
//		printf("��ϲ�㣬 ��Ӯ��...\n");
//	}
//
//}
//
//void Menu()
//{
//	printf("*************begin game****************\n");
//	printf("*** 1. paly ************** 2. �˳�******\n");
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
//			printf("�����˳��� �ݰݣ� ��ӭ�´�����\n");
//			input = 0;
//			break;
//		default:
//			printf("������������� �����¿�ʼ...\n");
//			input = 9999;
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}