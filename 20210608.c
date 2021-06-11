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
	printf("游戏开始!\n");
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
		printf("玩家获胜!\n");
	}
	else if(ret == 'O') {
		ShowBorad(board, ROW, COL);
		printf("电脑获胜!\n");
	}
	else if (ret == 'Q') {
		printf("平局!\n");
	}
}
int main() {
	srand((unsigned)time(NULL));//随机种子
	int input;
	do {
		menu();
		printf("输入你的选择:\n");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("玩家已退出游戏!");
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
