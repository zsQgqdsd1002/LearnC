#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int sum = 0;
//int Is2(a) {
//	int b = a & (a - 1);
//	if (b == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int func(a) {
//	if (a == 1) {
//		return 1;
//	}
//	else {
//		a = a / 2;
//		func(a);
//		sum = sum + a;
//	}
//	return sum;
//}
//int main() {
//	int money = 0;
//	int sale = 0;
//	scanf("%d %d", &money, &sale);
//	int bottle = money / sale;
//	int a = Is2(bottle);
//	int ret = func(bottle);
//	bottle = bottle + ret;
//	if (a == 0) {
//		printf("%d", bottle + 1);
//	}
//	else {
//		printf("%d", bottle);
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//·½·¨2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}

//int main() {
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++) {
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++) {
//		int j = 0;
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}


int main() {
	int i = 256;
	char* p = &(char)i;
	printf("%d\n", *p);
	printf("%d", *(p + 1));
}