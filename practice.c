#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3
#define COL 3



void Menu() {
	printf("******************************\n");
	printf("******��ӭ������������Ϸ******\n");
	printf("************0.exit************\n");
	printf("************1.play************\n");
	printf("******************************\n");
}


void InitBoard(char Board[ROW][COL]) {
	//for (int row = 0; row < ROW; row++) {
	//	for (int col = 0; col < COL; col++) {
	//		Board[row][col] = ' ';
	//	}
	//}
	memset(Board, ' ', ROW * COL * sizeof(char));
}

void Print(char Board[ROW][COL]) {
	printf("============\n");
	for (int row = 0; row < ROW; row++) {
		for (int col = 0; col < COL; col++) {
			printf(" %c ", Board[row][col]);
			if (col < COL - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (row < ROW - 1) {
			for (int col = 0; col < COL; col++) {
				printf("---");
				if (col < COL - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("============\n");
}

void PlayerMove(char Board[ROW][COL]) {
	while (1) {
		printf("����������:");
		int x = 0;
		int y = 0;
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <=COL){
			if (Board[x - 1][y - 1] == ' ') {
				Board[x - 1][y - 1] = 'X';
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

void ComputerMove(char Board[ROW][COL]) {
	while (1) {
		srand((unsigned)time(NULL));
		int x = rand() % ROW;
		int y = rand() % COL;
		if (Board[x][y] == ' ') {
			Board[x][y] = 'O';
			break;
		}
	}
}

int IsFull(char Board[ROW][COL]) {
	for (int row = 0; row < ROW; row++) {
		for (int col = 0; col < COL; col++) {
			if (Board[row][col] == ' ') {
				return -1;
			}
		}
	}
	return 1;
}

char IsWin(char Board[ROW][COL]) {
	for (int row = 0; row < ROW; row++) {
		if (Board[row][0] == Board[row][1] && Board[row][1] == Board[row][2] && Board[row][0] != ' ') {
			return Board[row][0];
		}
	}
	for (int col = 0; col < COL; col++) {
		if (Board[0][col] == Board[1][col] && Board[1][col] == Board[2][col] && Board[0][col] != ' ') {
			return Board[0][col];
		}
	}
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' ') {
		return Board[0][0];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != ' ') {
		return Board[0][2];
	}
	if (IsFull(Board) == 1) {
		return 'Q';
	}
	return ' ';
}



void game() {
	char ret = 0;
	char Board[ROW][COL] = { 0 };
	InitBoard(Board);
	Print(Board);
	while (1) {
		PlayerMove(Board);
		ret = IsWin(Board);
		Print(Board);
		if (ret != ' ') {
			break;
		}
		ComputerMove(Board);
		ret = IsWin(Board);
		Print(Board);
		if (ret != ' ') {
			break;
		}
	}
	if (ret == 'X') {
		printf("�������������!\n");
	}
	if (ret == 'O') {
		printf("����yyds!\n");
	}
	if (ret == 'Q') {
		printf("���ƽ��...\n");
	}
}

int main() {
	Menu();
	printf("���������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	if (choice == 0) {
		printf("goodbye!");
	}
	else if (choice == 1) {
		printf("��Ϸ��ʼ!\n");
		game();
	}
	else {
		printf("�벻Ҫ�ñ�����ֿ���Ц!");
	}
	return 0;
}

