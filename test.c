#define _CRT_SECURE_NO_WARNINAS 1
#include <stdio.h>
//int Add(int a, int b) {
//	int z;
//	z = a + b;
//	return 



//
//int main() {
//	int year;
//	for (year = 1000; year < 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0) {
//			printf("%d ",year);
//		}
//	}
//
//	return 0;
//}




//int main() {
//	int a;
//	int b;
//	printf("请输入两个数字:\n");
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		if (a > b) {
//			printf("%d\n", a);
//		}
//		else if (a == b) {
//			printf("这两个数相等!");
//		}
//		else {
//			printf("%d\n", b);
//		}
//	}
//	return 0;
//	}





//int main() {
//	int a;
//	int b;
//	int c;
//	printf("请输入三个数:\n");
//	scanf("%d%d%d",&a,&b,&c);
//	while ((a > b)&&(a>c)) {
//		if ( b > c) {
//			printf("%d %d %d\n", a, b, c);
//		}
//		else {
//			printf("%d %d %d\n", a, c, b);
//		}
//		break;
//	}
//	while ((b > a) && (b > c)) {
//		if (a > c) {
//			printf("%d %d %d\n", b, a, c);
//		}		else {
//			printf("%d %d %d\n", b, c, a);
//		}
//		break;
//	}
//	while ((c > a) &&(c>b) ) {
//		if ((c > a && c > b) && a > b) {
//			printf("%d %d %d\n", c, a, b);
//		}
//		else {
//			printf("%d %d %d\n", c, b, a);
//		}
//		break;
//	}
//	return 0;
//}




//int main() {
//	int a;
//	for (a = 1; a < 100; a++) {
//		if (a % 3 == 0) {
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//int main() {
//	int a;
//	int b;
//	printf("请输入两个数:\n");
//	scanf("%d%d",&a,&b);
//	int c = a;
//	if (a > b) {
//		c = b;
//	}
//	for (int i = c; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int i,j;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >= i / 2)
//		{
//			printf("%d ", i);
//
//		}
//
//	}
//	return 0;
//}





//int sum();
//int main() {
//	int a = 10;
//	int n = 20;
//	int c = add(a, n);
//	printf("%d\n",c);
//	return 0;
//}
//
//int add(int x, int y) {
//	int sum = x + y;
//	return sum;
//}


/*int main() {
	int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	int** p2 = &p;
	printf("%d\n",**p2);
	**p2 = 50;
	printf("%d\n",*p);
	printf("%d\n",a);
	return 0;
}*/
	
//int main() {
//	char a[5] = { 'b','i','t','e','\0' };
//	printf("%s", a );
//	printf("\r");
//}

//#include<stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("    %d    \n   %d %d   \n  %d %d %d  \n %d %d %d %d \n%d %d %d %d %d\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
//	return 0;
//}

#include<stdio.h>
int main() {
	printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
	return 0;
}