#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
����1�� + 2�� + ���� + 100��
int JieCheng(int i){
	int result = 1;
	int n = 1;
	for (n = 1; n <= i; ++n){
		result *= n;
	}
	return result;
}
int main(){
	int i = 1;
	int sum = 0;
	for (i = 1; i <= 100; ++i){
		sum += JieCheng(i);
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
////����n�Ľ׳�
//int JieCheng(int n){
//	int result = 1;
//	int i = 1;
//	for (i = 1; i <= n; ++i){
//		result = result*i;
//	}
//	return result;
//}
//int main(){
//	int n = 0;
//	printf("������n:");
//	scanf("%d", &n);
//	printf("%d\n",JieCheng(n));
//	system("pause");
//	return 0;
//}
//ģ���û���¼���������ֻ�ܵ�½���Σ�������ζ�����������Ƴ���¼
//int main(){
//	int i = 0;
//	for (i = 0; i < 3; ++i){
//	char password[1024] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("����������ȷ\n");
//			break;
//		}
//	}
//	if (i == 3){
//		printf("����������󣬽�ֹ��¼\n");
//	}
//	else{
//		printf("��¼�ɹ�\n");
//	}
//	system("pause");
//	return 0;
//}
//��ʾ����ַ��������ƶ������м��ۡ�
//int main(){
//	char str1[] = "welcome to bite!";
//	char str2[] = "################";
//	int left = 0;
//	int right = strlen(str1) - 1;
//	int i = 0;
//	printf("%s\n", str2);
//	for (left = 0; left <= right; left++, right--){
//		Sleep(50);
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//	}
//	system("pause");
//	return 0;
//}