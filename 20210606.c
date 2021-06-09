#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#if 0
void move(char pos1, char pos2) {
	printf("%c->%c,", pos1, pos2);
}
void Hanuota(int n, char pos1, char pos2, char pos3) {
	if (n == 1) {
		move(pos1, pos3);
	}
	else {
		Hanuota(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanuota(n - 1, pos2, pos1, pos3);
	}
}
int main() {
	Hanuota(4, 'A', 'B', 'C');
	return 0;
}
#endif

//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d", arr[2][2]);
//	arr[2][2] = arr[1][1] * arr[0][0];
//	printf("%d", arr[2][2]);
//}
//


//int main() {
//	int i = 1;
//	for (int n = 1; n <= 20; n++) {
//		printf("%d ", i);
//		i = i * 2;
//	}
//	return 0;
//}
//
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int num = 1234;
//	print(num);
//	return 0;
//}

//int Jie(n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return 2 * Jie(n - 1);
//	}
//}
//int main() {
//	int n = 10;
//	int a = Jie(n);
//	printf("%d", a);
//	return 0;
//}


//void Move(char pos1, char pos2) {
//	printf("%c->%c ", pos1, pos2);
//}
//void ToH(int n, char pos1, char pos2, char pos3) {
//	if (n == 1) {
//		Move(pos1, pos2);
//	}
//	else {
//		ToH(n - 1, pos1, pos3, pos2);
//		Move(pos1, pos3);
//		ToH(n - 1, pos2, pos1, pos3);
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	ToH(n, 'A', 'B', 'C');
//	return 0;
//}


//int main() {
//	char a;
//	while (scanf("%c", &a) != EOF){
//		getchar();
//		if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z')) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//			}
//		}
//	return 0;
//}

//int main() {
//    double a ;
//    int b, c, d;
//    scanf("%lf %d %d %d", &a, &b, &c, &d);
//    if (b == 11 && c == 11) {
//        a = a * 0.7;
//        if (d == 1) {
//            a = a - 50;
//        }
//    }
//    else if (b == 12 && c == 12) {
//        a = a * 0.8;
//        if(d == 1){
//            a = a - 50;
//        }
//    }
//    else {
//        printf("%.2lf", a);
//    }
//    if (a < 0) {
//        printf("0");
//    }
//    else {
//        printf("%.2lf", a);
//    }
//    return 0;
//}

//long long Zou(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    else if (n == 2) {
//        return 2;
//    }
//    else {
//        return Zou(n - 1) + Zou(n - 2);
//    }
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    long long ret = Zou(n);
//    printf("%lld", ret);
//    return 0;
//}

//
//int main() {
//	int count = 0;
//	for (int a = 1; a < 2020; a++) {
//		if (a % 10 == 9 || (a / 10) % 10 == 9 || (a / 100) % 10 == 9) {
//			count++;
//		}
//	}
//		printf("%d", count);
//		return 0;
//}


