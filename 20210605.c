#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//long long Fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	long long b = Fib(a);
//	printf("%lld", b);
//	return 0;
//}


//long long Jump(int n) {
//	if ( n == 1){
//		return 1;
//}
//	else if (n == 2) {
//		return 2;
//	}
//	else {
//		return Jump(n - 1) + Jump(n - 2);
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	long long b = Jump(a);
//	printf("%lld", b);
//	return 0;
//}

//#include<stdio.h>
//int Fun(n) {
//    int a = 2 << n - 1;
//    return a;
//}
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        printf("%d\n", Fun(a));
//    }
//    return 0;
//}
//int main() {
//    int n, m, h,a;
//    scanf("%d %d %d", &n, &m, &h);
//    a = h / m;
//    if (h % m == 0) {
//        a = h / m;
//    }
//    else {
//        a = h / m + 1;
//    }
//    printf("%d",n - a);
//    return 0;
//}

int main() {
    int i, j;
    int k = 0;
    for (i = 100; i < 1000; i++) {
        for (j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0) 
                break;
            }
            if(j >= sqrt(i)){
                k += 1;
            }  
    }
    printf("%d", k);
    return 0;
}
int main() {
    int i, j;
    int k = 0;
    for (i = 100; i < 1000; i++) {
        for (j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j >= sqrt(i))
        {
            k += 1;
        }
    }
    printf("%d", k);
    return 0;
}