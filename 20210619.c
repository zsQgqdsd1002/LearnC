#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
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
//	printf("Ð×ÊÖ¾ÍÊÇ%c!", 'A' + i);
//	return 0;
//}

void Print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[11] = { 1,8,9,6,6,8,5,7,5,1,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int* q = arr + len - 1;
	while (p != q) 
	{
		if (*p % 2 == 0)
		{
			if (*q % 2 == 0) 
			{
				q--;
			}
			else 
			{
				int tmp = *p;
				*p = *q;
				*q = tmp;
				p++;
			}
		}
		else 
		{
			p++;
		}
	}
	while (q <= &arr[len - 2])
	{
		if (*q > * (q + 1)) 
		{
			int tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
		else 
		{
			q++;
		}
	}
	while (p >= &arr[1])
	{
		if (*p < *(p - 1)) 
		{
			int tmp = *(p - 1);
			*(p - 1) = *p;
			*p = tmp;
		}
		else 
		{
			p--;
		}
	}
	Print(arr, len);
	return 0;
}