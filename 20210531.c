#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h> 
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int left = 0;//数组最左端下标
//	int right = 4;//数组最右边下标
//	int key = 5;//要寻找的数字
//	while (left <= right) {
//		int mid = (left + right) / 2;//二分查找
//		if (arr[mid] < key) {
//			left = mid + 1;//要寻找的数字大于中间值,left右移
//		}
//		else if (arr[mid] > key) {//要寻找的数字小于中间值,right左移
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("找到了!下标为:%d", mid);
//			break;
//		}
//		if (left > right) {//左右下标相遇且擦肩而过后代表没有
//			printf("未找到,请重新输入!");
//		}
//	}
//}         


//void menu() {
//	printf("***********************\n");
//	printf("********1.play*********\n");
//	printf("********0.exit*********\n");
//	printf("***********************\n");
//}
//void game() {
//	printf("开始游戏!\n");
//	int input;
//	int randNum = rand() % 100;
//	while (1) {
//		printf("请输入你猜的数字:\n");
//		scanf("%d", &input);
//		if (input > randNum) {
//			printf("猜大啦!\n");
//		}
//		if (input < randNum) {
//			printf("猜小啦!\n");
//		}
//		if (input == randNum) {
//			printf("猜对啦\n!");
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入你的选择:\n");
//		scanf("%d", &input); 
//		switch (input)
//		{
//			case 0:
//				printf("退出游戏!\n");
//				break;
//			case 1:
//				game();
//				break;
//				default:
//					break;
//
//		}
//	} while (input == 100);
//}

//int main() {
//	char* strcpy(char* destination, const char* source);
//	char* p1 = "abcdef";
//	char p2[20];
//	char* p = strcpy(p2, p1);
//	printf("%s\n", p2);
//}

//int main() {
//	while (1) {
//		int n;
//		int j = 1;
//		int sum = 0;
//		printf("请输入一个数字:\n");
//		scanf("%d", &n);
//		for (n; n > 0; n--) {
//			int ret = 1;
//			for (j = 1; j <= n; j++) {
//				ret = j * ret;
//			}
//			sum = sum + ret;
//		}
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}

//int Fun(i) //阶乘函数
//{
//	int j = 1;
//	printf("请输入一个数:\n");
//	scanf("%d",&i);
//		while (i != 0) 
//		{
//			j = i * j;
//			i--;
//		}
//		printf("%d\n", j);
//	return 0;
//}	
//int main() {
//	Fun();
//	return 0;
//}


//int main() {
//	int i;
//	double j = 1.0;
//	for (i = 2; i <= 100; i++) {
//		double ret = 1.0 / i;
//		j = j - ret;
//	}
//	printf("%lf\n", j);
//	return 0;
//}


//int main() {
//	int i;
//	double j = 0;
//	for (i = 1; i <= 100; i++) {
//		double ret = 1.0 / i;
//		if (i % 2 == 0) {
//			j = j - ret;
//		}
//		if (i % 2 != 0) {
//			j = j + ret;
//		}
//	}
//	printf("%lf\n", j);
//	return 0;
//}

//int main() {
//	char input[10] = { 0 };
//	system("shut down -s -t 60");
//again:
//	printf("电脑将在一分钟内关机!如果输入:我是猪,就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪")) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = {1,7,9,2,0,9,5,3,7,8};
//	int i = 0;
//	int left = 1;
//	int right = 0;
//	for (i = 0; i < 9; i++) {
//		for (right = 0; right < 9; right++) {
//			if (arr[left] > arr[right]) {
//				left;
//			}
//			else {
//				left = right;
//			}
//		}
//	}
//	printf("%d\n", arr[left]);
//	return 0;
//}

//int main() {
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%02d  ", i, j, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	int j = 1;
//	int num = 0;
//	for (i = 1; i < 101; i++) {
//		for (j = 1; j < 10; j++) {
//			if (10*j - i == 1) {
//				num = num + 1;
//			}
//		}
//		if (100 - i <= 10) {
//			num = num + 1;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}


int main() {
	do {
		int input;
		printf("你觉得杨超在放屁吗?是请输入1,不是请输入0:\n");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("没错!还是你最了解他!\n\n");
			break; 
		case 1:
			printf("有一说一,他真的没有在放屁，他说的都是实话!我可以作证!\n\n");
			break;
		default:
			printf("不要拿别的数字开玩笑!\n\n");
			break;
		}
	} while (1);
}


//#include<stdio.h>
//int main() {
//    float a;
//    scanf("%f", &a);
//    int b = (int)a;
//    b = b - (b / 10) * 10
//        printf("%d", b);
//    return 0;
//}

//int main() {
//    int a = 31560000;
//    int b;
//    scanf("%d", &b);
//    printf("%d", a * b);
//    return 0;
//}