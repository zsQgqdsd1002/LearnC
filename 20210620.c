#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//Ñî»ÔÈý½Ç
//int main()
//{
//	int arr[30][30] = { 0 };
//	for (int i = 1; i < 30; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 30; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//µÝ¹éÊµÏÖ×Ö·û´®ÄæÐò
//void func(char* str)
//{
//	char head = *str;
//	int str_len = strlen(str);
//	*str = *(str + str_len - 1);
//	*(str + str_len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		func(str + 1);
//	}
//	*(str + str_len - 1) = head;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	func(arr);
//	printf("%s", arr);
//	return 0;
//}

//char *MyStrcpy(char* dst, const char* src)
//{
//	char* p = dst;
//	assert(dst && src);
//	while (*src != '\0')
//	{
//		*dst = *src;
//		src++;
//		dst++;
//	}
//	*dst = '\0';
//	//while (*dst++ = *src++);
//	return p;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	const char* arr1 = "zxcvbn";
//	char* ret = MyStrcpy(arr,arr1);
//	printf("%s", ret);
//	return 0;
//}

char* MyStrncpy(char* dst, const char* src, size_t count)
{
	char* p = dst;
	const char* q = src;
	assert(dst && src);
	if (count < strlen(src) + 1)
	{
		while (*src != *(q + count))
		{
			*dst = *src;
			src++;
			dst++;
		}
		return p;
	}
	else
	{
		while (*src != '\0')
		{
			*dst = *src;
			src++;
			dst++;
		}
		for (size_t i = 0; i < (count - strlen(src)); i++)
		{
			*(dst + i) = '\0';
		}
		return p;
	}
}
int main()
{
	char arr[20] = "abcdefqwerty";
	const char* arr1 = "zxcvbn";
	char* ret = MyStrncpy(arr, arr1, 3);
	printf("%s", ret);
	return 0;
}