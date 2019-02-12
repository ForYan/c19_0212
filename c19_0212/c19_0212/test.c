#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
计算1！ + 2！ + …… + 100！
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
////计算n的阶乘
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
//	printf("请输入n:");
//	scanf("%d", &n);
//	printf("%d\n",JieCheng(n));
//	system("pause");
//	return 0;
//}
//模拟用户登录情况，并且只能登陆三次，如果三次都输入错误，则推出登录
//int main(){
//	int i = 0;
//	for (i = 0; i < 3; ++i){
//	char password[1024] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("密码输入正确\n");
//			break;
//		}
//	}
//	if (i == 3){
//		printf("密码输入错误，禁止登录\n");
//	}
//	else{
//		printf("登录成功\n");
//	}
//	system("pause");
//	return 0;
//}
//演示多个字符从两端移动，向中间汇聚。
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