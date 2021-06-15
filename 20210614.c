#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int* p = &arr[0];
//	int a = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < a; i++) {
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int* p = &arr[0];
//	int a = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < a / 2; i++) {
//		int tmp = 0;
//		tmp = *(p + i);
//		*(p + i) = *(p + a - i - 1);
//		*(p + a - i - 1) = tmp;
//	}
//	for (int i = 0; i < a; i++) {
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//
//int main() {
//	int sum = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a;
//	sum = a;
//	for (int i = 0; i < 4; i++) {
//		a = a * 10 + b;
//		sum = sum + a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main() {
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", i);
//	}
//	for (int i = 10; i < 100; i++) {
//		int j = i / 10;
//		int k = i % 10;
//		if (j * j + k * k == i) {
//			printf("%d ", i);
//		}
//	}
//	for (int i = 100; i < 1000; i++) {
//		int j = i / 100;
//		int k = i % 10;
//		int l = i / 10 % 10;
//		if (j * j * j + k * k * k + l * l * l == i) {
//			printf("%d ", i);
//		}
//	}
//	for (int i = 1000; i < 10000; i++) {
//		int j = i / 1000;
//		int k = i % 10;
//		int l = i / 10 % 10;
//		int m = i / 100 % 10;
//		if (j * j * j * j + k * k * k * k + l * l * l * l + m * m * m * m == i) {
//			printf("%d ", i);
//		}
//	}	for (int i = 10000; i < 100000; i++) {
//		int j = i / 10000;
//		int k = i % 10;
//		int l = i / 10 % 10;
//		int m = i / 100 % 10;
//		int n = i / 1000 % 10;
//		if (j * j * j * j * j + k * k * k * k * k + l * l * l * l * l + m * m * m * m * m + n * n * n * n * n == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main() {
	int a = 0;
	for (int i = 0; i < 10; i++) {
	/*	if (i == 5) {
			continue;
		}*/
		a = a + i;
	}
	printf("%d", a);
	return 0;
}