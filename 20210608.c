#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("******************\n");
	printf("******0.exit******\n");
	printf("******1.play******\n");
	printf("******************\n");
}
void game() {
	char board[ROW][COL] = { 0 };
	printf("��Ϸ��ʼ!\n");
	InitBorad(board, ROW, COL);
	ShowBorad(board, ROW, COL);
	char ret;
	while (1) {
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ') {
			break;
		}
		ShowBorad(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ') {
			break;
		}
		ShowBorad(board, ROW, COL);
	}
	if (ret == 'X') {
		ShowBorad(board, ROW, COL);
		printf("��һ�ʤ!\n");
	}
	else if(ret == 'O') {
		ShowBorad(board, ROW, COL);
		printf("���Ի�ʤ!\n");
	}
	else if (ret == 'Q') {
		printf("ƽ��!\n");
	}
}
int main() {
	srand((unsigned)time(NULL));//�������
	int input;
	do {
		menu();
		printf("�������ѡ��:\n");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("������˳���Ϸ!");
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	} while (input != 0);
	return 0;
}
