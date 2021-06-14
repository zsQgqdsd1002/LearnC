#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int a = m ^ n;
//	int count = 0;
//	while (a != 0) {
//		count++;
//		a = a&(a - 1);
//	}
//	printf("%d", count);
//}
//利用m^n可以使得所有的不同位数置为1,相同位数变为0,那么问题就变成了求一个数字里1的个数,用a&(a - 1)计算最为简便



//int main() {
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 32; i++) {
//	 if ((n & (1 << i)) != 0) {        //用n&(1 << i)来判断是否有1,循环32次,有1可以进入if语句count++
//			count++;
//		}
//	}
//	printf("%d", count);
//  return 0;
//}
//
//int main() {
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		count++;
//		n = n & (n - 1);               //记住这个判断方法
//	}
//	printf("%d", count);
//	return 0;
//}

//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	return 0;
//}
//void Func() {
//	static int x = 0;
//
//	x = x + 3;
//	printf("%d\n", x);
//}
//int main() {
//	Func();
//	Func();
//	Func();
//	return 0;
// }
//
//int main() {
//	int x = 3;
//	if (x > 3) 
//		if (x > 2) 
//			printf("hahaha");
//	else 
//		printf("hehehe");	
//	return 0;
//}

int main() {
	int i = 0;
	int sum = 0;
	do {
		sum = sum + i;
		i++;
	} while (i < 10000);
	printf("%d", sum);
	return 0;
}