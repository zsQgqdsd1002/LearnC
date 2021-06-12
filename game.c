#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBorad(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//void InitBoard(char board[ROW][COL], int row, int col) {
//	memset(board, ' ', row * col * sizeof(char));
//}
void ShowBorad(char board[ROW][COL], int row, int col) {
	printf("============\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("============\n");
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	while (1) {
		printf("请输入坐标:\n");
		int x = 0;
		int y = 0;
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {

			if (board[x - 1][ y - 1] == ' ') {
				board[x - 1][ y - 1] = 'X';
				break;
			}
			else {
				printf("该位置已有棋子!\n");
			}
		}
		else {
			printf("该位置不合法!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	while (1) {
		int x = rand() % row;
		//rand()为随机数生成函数
		//row == 3,所以不管什么数字% row结果都只有0,1,2三种结果，故结果不用修改
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
	}
}
//IsFull只在game.c中为IsWin提供辅助,在其他文件中不需要它,故写成静态.
static int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return -1;//未满
			}
		}
	}
	return 1;//已满,说明当前平局
}
char IsWin(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (int j = 0; j < col; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}
	//判断是否平局
	if (IsFull(board, row, col) == 1) {
		return 'Q';//平局
	}
	return ' ';//没有平局,正常情况下.
}