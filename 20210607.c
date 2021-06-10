#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count = 0;
//long long Fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	if (n == 3) {
//		count++;
//
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main() {
//	int n ;
//	scanf("%d", &n);
//	long long ret = Fib(n);
//	printf("%lld\n", ret);
//	printf("count = %d", count);
//	return 0;
//}
//
//long long Fib(n) {
//	long long f1 = 1;
//	long long f2 = 1;
//	long long f3 = 0;
//	if (n <= 0) {
//		return -1;
//	}
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	for (int i = 3; i <= n; i++) {
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return f3;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long ret = Fib(n);
//	printf("%lld", ret);
//	return 0;
//}

//int main() {
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//√∞≈›≈≈–Ú1.0
//void  Show(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void bubberSort(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,23,31,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubberSort(arr, len);
//	Show(arr, len);
//}
//


//
//√∞≈›≈≈–Ú2.0   ”≈ªØ—≠ª∑¥Œ ˝
//void  Show(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void bubberSort(int arr[], int len) {
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,23,31,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubberSort(arr, len);
//	Show(arr, len);
//}

//√∞≈›≈≈–Ú3.0   ”≈ªØ≈–∂œÃıº˛
//void Show(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void bubberSort(int arr[], int len) {
//	for (int i = 0; i < len - 1; i++) {
//		int flag = 0;
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag++;
//			}
//		}
//		if (flag == 0) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,3,8,0,9,1,7,5,6,1,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubberSort(arr, len);
//	Show(arr, len);
//	return 0;
//}


//void Show(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < len; i++) {
//		int* p = &arr1[i];
//		int* q = &arr2[i];
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//	}
//	Show(arr1, len);
//	Show(arr2, len);
//	return 0;
//}


//void reverse(int arr[], int len) {
//	int n = 0;
//	int m = len - 1;
//	for (int i = 0; i < len / 2; i++) {
//		int* p = &arr[n];
//		int* q = &arr[m];
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//		n++;
//		m--;
//	}
//}
//void Print(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void Init(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int* p = &arr[i];
//		*p = 0;
//	}
//}
//void Reverse(int arr[], int len) {
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, len);
//	Print(arr, len);
//	printf("\n");
//	reverse(arr, len);
//	Print(arr, len);
//	printf("\n");
//	Init(arr, len);
//	Print(arr, len);
//	return 0;
//}