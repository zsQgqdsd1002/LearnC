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
		printf("����������:\n");
		int x = 0;
		int y = 0;
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {

			if (board[x - 1][ y - 1] == ' ') {
				board[x - 1][ y - 1] = 'X';
				break;
			}
			else {
				printf("��λ����������!\n");
			}
		}
		else {
			printf("��λ�ò��Ϸ�!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	while (1) {
		int x = rand() % row;
		//rand()Ϊ��������ɺ���
		//row == 3,���Բ���ʲô����% row�����ֻ��0,1,2���ֽ�����ʽ�������޸�
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
	}
}
//IsFullֻ��game.c��ΪIsWin�ṩ����,�������ļ��в���Ҫ��,��д�ɾ�̬.
static int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return -1;//δ��
			}
		}
	}
	return 1;//����,˵����ǰƽ��
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
	//�ж��Ƿ�ƽ��
	if (IsFull(board, row, col) == 1) {
		return 'Q';//ƽ��
	}
	return ' ';//û��ƽ��,���������.
}