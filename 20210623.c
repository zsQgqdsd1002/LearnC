#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//void* Mymemcpy(void* dst, void* src, int count)
//{
//	assert(dst && src);
//	void* p = dst;
//	while (count != 0)
//	{
//		*(char*)dst = *(char*)src;
//		((char *)dst)++;
//		((char *)src)++;
//		count--;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr1[10] = { 1,2,3,5,6 };
//	char arr2[10] = {3,4,5,6,7,8};
//	Mymemcpy(arr1, arr2, 3);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//void* Mymemmove(void* dst, void* src, int count)
//{
//	assert(dst && src);
//	void* p = dst;
//	if (src > dst)
//	{
//		while (count != 0)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)dst)++;
//			((char*)src)++;
//			count--;
//		}
//	}
//	else
//	{
//		count--;
//		while (count >= 0)
//		{
//			*((char*) dst + count) = *((char*) src + count);
//			count--;
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	char arr1[10] = { 1,2,3,5,6 };
//	char arr2[10] = { 3,4,5,6,7,8 };
//	Mymemmove(arr1, arr2, 3);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//const char* Mystrstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	while (*s1 != '\0')
//	{
//		s1 = str1;
//		s2 = str2;
//		while (*s1 == *s2 && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return str1;
//		}
//		str1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	const char* arr1 = "abcdef";
//	const char* arr2 = "cde";
//	char* ret = Mystrstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//int Mystrcmp(const char* str1, const char* str2)
//{
//	
//	assert(str1 && str2);
//	int tmp = 0;
//	if (*str1 == '\0') 
//	{
//		tmp = 0;
//	}
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if (*str1 > * str2)
//		{
//			tmp = 1;
//		}
//		else
//		{
//			tmp = -1;
//		}
//	}
//	return tmp;
//}
//
//int main()
//{
//	const char* str1 = "abcdefg";
//	const char* str2 = "abcdfaf";
//	int ret = Mystrcmp(str1, str2);
//	printf("%d", ret);
//	return 0;
//}

int Mystrncmp(const char* str1, const char* str2, int n)
{

	assert(str1 && str2);
	int tmp = 0;
	if (*str1 == '\0')
	{
		tmp = 0;
	}
	while (n != 0)
	{
		if (*str1 > * str2)
		{
			tmp = 1;
		}
		else if(*str1 == *str2)
		{
			tmp = 0;
		}
		else
		{
			tmp = -1;
		}
		str1++;
		str2++;
		n--;
	}
	return tmp;
}

int main()
{
	const char* str1 = "abcdefg";
	const char* str2 = "abcdfaf";
	int n = 0;
	scanf("%d", &n);
	int ret = Mystrncmp(str1, str2, n);
	printf("%d", ret);
	return 0;
}