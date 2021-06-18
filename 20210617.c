#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void yanghuisanjiao(n)
//{
//	int a[30][30] = { 1 };
//	int i, j;
//	for (i = 1; i < n; i++)
//	{
//		a[i][0] = 1;
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	yanghuisanjiao(n);
//	return 0;
//}
//void Print(char arr[],int len)
//{
//	char* p = arr;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", *p);
//		p++;
//	}
//}
//void Mychange(char arr[], char arr1[], int len) {
//	char* p = arr;
//	char* q = arr1;
//	for (int i = 0; i < len; i++)
//	{
//		char tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q++;
//	}
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd' };
//	char arr2[] = { 'e', 'f', 'g', 'h' };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	Mychange(arr, arr2, ret);
//	Print(arr, ret);
//	printf("\n");
//	Print(arr2, ret);
//	return 0;
//}

//char* MyStr(char* dst, const char* zhuan)
//{
//	char* p = dst;
//	assert(dst && zhuan);
//	while (*p++ = *zhuan++);
//	return (dst);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char brr[] = "ghljkl";
//	char* p = arr;
//	const char* q = brr;
//	MyStr(p, q);
//	printf("%s", arr);
//	return 0;
//}

//int Mystrlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr = arr + 1;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "qwertasdfg";
//	char* p = arr;
//	int ret = Mystrlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//int main() {
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		murder[i] = 1;
//		if ((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1) == 3)
//		{
//			break;
//		}
//		else
//		{
//			murder[i] = 0;
//		}
//	}
//	printf("%c", 'a' + i);
//}


//enum color {
//	red,
//	green,
//	yello,
//	blue
//};
//int main()
//{
//	enum color a = green;
//	printf("%d", a);
//}

//int main() {
//	int a = 10;
//	void* p = &a;
//	printf("%d", *p);
//}


//int main() {
//	int* p = NULL;
//	int a[] = { 1,2,3,4,56,7,8 };
//	p = a;
//}

//int main()
//{
//	int a = 1;
//	float* p = (float*)&a;
//	printf("%d\n", a);
//	printf("%f\n", *p);
//	return 0;
//}


