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
//����m^n����ʹ�����еĲ�ͬλ����Ϊ1,��ͬλ����Ϊ0,��ô����ͱ������һ��������1�ĸ���,��a&(a - 1)������Ϊ���



//int main() {
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 32; i++) {
//	 if ((n & (1 << i)) != 0) {        //��n&(1 << i)���ж��Ƿ���1,ѭ��32��,��1���Խ���if���count++
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
//		n = n & (n - 1);               //��ס����жϷ���
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