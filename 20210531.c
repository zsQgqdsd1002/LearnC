#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h> 
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int left = 0;//����������±�
//	int right = 4;//�������ұ��±�
//	int key = 5;//ҪѰ�ҵ�����
//	while (left <= right) {
//		int mid = (left + right) / 2;//���ֲ���
//		if (arr[mid] < key) {
//			left = mid + 1;//ҪѰ�ҵ����ִ����м�ֵ,left����
//		}
//		else if (arr[mid] > key) {//ҪѰ�ҵ�����С���м�ֵ,right����
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("�ҵ���!�±�Ϊ:%d", mid);
//			break;
//		}
//		if (left > right) {//�����±������Ҳ�����������û��
//			printf("δ�ҵ�,����������!");
//		}
//	}
//}         


//void menu() {
//	printf("***********************\n");
//	printf("********1.play*********\n");
//	printf("********0.exit*********\n");
//	printf("***********************\n");
//}
//void game() {
//	printf("��ʼ��Ϸ!\n");
//	int input;
//	int randNum = rand() % 100;
//	while (1) {
//		printf("��������µ�����:\n");
//		scanf("%d", &input);
//		if (input > randNum) {
//			printf("�´���!\n");
//		}
//		if (input < randNum) {
//			printf("��С��!\n");
//		}
//		if (input == randNum) {
//			printf("�¶���\n!");
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("���������ѡ��:\n");
//		scanf("%d", &input); 
//		switch (input)
//		{
//			case 0:
//				printf("�˳���Ϸ!\n");
//				break;
//			case 1:
//				game();
//				break;
//				default:
//					break;
//
//		}
//	} while (input == 100);
//}

//int main() {
//	char* strcpy(char* destination, const char* source);
//	char* p1 = "abcdef";
//	char p2[20];
//	char* p = strcpy(p2, p1);
//	printf("%s\n", p2);
//}

//int main() {
//	while (1) {
//		int n;
//		int j = 1;
//		int sum = 0;
//		printf("������һ������:\n");
//		scanf("%d", &n);
//		for (n; n > 0; n--) {
//			int ret = 1;
//			for (j = 1; j <= n; j++) {
//				ret = j * ret;
//			}
//			sum = sum + ret;
//		}
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}

//int Fun(i) //�׳˺���
//{
//	int j = 1;
//	printf("������һ����:\n");
//	scanf("%d",&i);
//		while (i != 0) 
//		{
//			j = i * j;
//			i--;
//		}
//		printf("%d\n", j);
//	return 0;
//}	
//int main() {
//	Fun();
//	return 0;
//}


//int main() {
//	int i;
//	double j = 1.0;
//	for (i = 2; i <= 100; i++) {
//		double ret = 1.0 / i;
//		j = j - ret;
//	}
//	printf("%lf\n", j);
//	return 0;
//}


//int main() {
//	int i;
//	double j = 0;
//	for (i = 1; i <= 100; i++) {
//		double ret = 1.0 / i;
//		if (i % 2 == 0) {
//			j = j - ret;
//		}
//		if (i % 2 != 0) {
//			j = j + ret;
//		}
//	}
//	printf("%lf\n", j);
//	return 0;
//}

//int main() {
//	char input[10] = { 0 };
//	system("shut down -s -t 60");
//again:
//	printf("���Խ���һ�����ڹػ�!�������:������,��ȡ���ػ�!\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������")) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = {1,7,9,2,0,9,5,3,7,8};
//	int i = 0;
//	int left = 1;
//	int right = 0;
//	for (i = 0; i < 9; i++) {
//		for (right = 0; right < 9; right++) {
//			if (arr[left] > arr[right]) {
//				left;
//			}
//			else {
//				left = right;
//			}
//		}
//	}
//	printf("%d\n", arr[left]);
//	return 0;
//}

//int main() {
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%02d  ", i, j, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	int j = 1;
//	int num = 0;
//	for (i = 1; i < 101; i++) {
//		for (j = 1; j < 10; j++) {
//			if (10*j - i == 1) {
//				num = num + 1;
//			}
//		}
//		if (100 - i <= 10) {
//			num = num + 1;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}


int main() {
	do {
		int input;
		printf("�������ڷ�ƨ��?��������1,����������0:\n");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("û��!���������˽���!\n\n");
			break; 
		case 1:
			printf("��һ˵һ,�����û���ڷ�ƨ����˵�Ķ���ʵ��!�ҿ�����֤!\n\n");
			break;
		default:
			printf("��Ҫ�ñ�����ֿ���Ц!\n\n");
			break;
		}
	} while (1);
}


//#include<stdio.h>
//int main() {
//    float a;
//    scanf("%f", &a);
//    int b = (int)a;
//    b = b - (b / 10) * 10
//        printf("%d", b);
//    return 0;
//}

//int main() {
//    int a = 31560000;
//    int b;
//    scanf("%d", &b);
//    printf("%d", a * b);
//    return 0;
//}