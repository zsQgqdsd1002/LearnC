#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//
//int SuShu(int n) {
//	int j;
//	if (n < 1) {
//		return -1;
//	}
//	else if (n == 1) {
//		printf("既不是素数也不是合数!");
//	}
//	else {
//		for (j = 2; j < sqrt(n); j++) {
//			if (n % j == 0) {
//				return 0;
//			}
//		}
//	}
//	return n;
//}
//
//
//int main() {
//	for (int i = 100; i < 201; i++) {
//		int ret = SuShu(i);
//		if (ret > 0) {
//			printf("%d\n", ret);
//		}
//	}
//	return 0;
//}
//
//
//void RunNian(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		printf("%d是闰年!\n", year);
//	}
//	else {
//		printf("%d不是闰年!\n", year);
//	}
//}
//
//int main() {
//	int i;
//	scanf("%d", &i);
//	RunNian(i);
//	return 0;
//}
//
//
//void change(int* p, int* q) {
//	int tmp = 0;
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	change(&a, &b);
//	printf("%d %d\n", a, b);
//}
//
//void CFKJB(int i) {
//	for (int j = 1; j <= i; j++) {
//		for (int k = 1; k <= j; k++) {
//			printf("%d*%d=%d ", j, k, j * k);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	CFKJB(a);
//	return 0;
//}
//
//
//void func(n) {
//	if (n > 9) {
//		func(n / 10);
//		printf("%d", n % 10);
//	}
//	else {
//	printf("%d", n);
//	}
//}
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	func(a);
//	return 0;
//}
//
//int JieC(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		int ret = n * JieC(n - 1);
//		return ret;
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int ret = JieC(n);
//	printf("%d", ret);
//	return 0;
//}
//
//char Strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + Strlen(1 + str);
//	}
//}
//
//int main() {
//	char* str = "hello";
//	int ret = Strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//
//char Strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char* str = "abcde";
//	int ret = Strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//
//int DigitSum(int n) {
//	int ret = 0;
//	if (n > 9) {
//		DigitSum(n / 10);
//		ret = n % 10 + DigitSum(n / 10);
//	}
//	else {
//		return n % 10;
//	}
//	return ret;
//}
//
//int main() {
//	int a = 1729;
//	int sum = DigitSum(a);
//	printf("%d", sum);
//	return 0;
//}
//
//
//long long myPor(n, k) {
//	long long ret;
//	if (k != 0) {
//		ret = n * myPor(n, k - 1);
//	}
//	else {
//		return 1;
//	}
//	return ret;
//}
//
//int main() {
//	long long ret = myPor(5, 8);
//	printf("%lld", ret);
//	return 0;
//
//}
//
//long long fib(n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	long long ret = fib(a);
//	printf("%lld", ret);
//	return 0;
//}
//
//long long fib(int n) {
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 0;
//	if (n <= 0) {
//		return -1;
//	}
//	else if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		for (int i = 3; i <= n; i++) {
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		return f3;
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long ret = fib(n);
//	printf("%lld", ret);
//	return 0;
//}
//
//long long Jump(n) {
//	if (n == 1) {
//		return 1;
//	}
//	else if (n == 2) {
//		return 2;
//	}
//	else {
//		return Jump(n - 1) + Jump(n - 2);
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long ret = Jump(n);
//	printf("%lld", ret);
//	return 0;
//}


//char _myStrlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + _myStrlen(str + 1);
//	}
//}
//
//int main() {
//	char* a = "Hello,CSDN";
//	int ret = _myStrlen(a);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//    float a = 3;
//    float b = 4;
//    float c = 5;
//    printf("%.0f %.0f %.0f", a, b, c);
//    printf("\n");
//    printf("%.2f %.2f", (a + b + c), (a * b / 2));
//    return 0;
//}

#include<stdio.h>
int main() {
    double a;
    scanf("%lf.1", &a);
    double π = 3.1415926;
    double v = (4 / 3) * π *( a * a * a);
    printf("%.3lf", v);
    return 0;
}