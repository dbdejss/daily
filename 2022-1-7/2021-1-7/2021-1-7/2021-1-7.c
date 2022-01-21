//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "工程地质学是地质学的一个分支，是专门研究与工程建设方面有关的学科";
//	char arr2[] = "################################################################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(500);		//停留一秒
//		system("cls");		//执行系统的一个函数—cls—清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}
/**********练习：模拟用户登录，用户只能输入三次密码，如果密码正确，则显示'登陆成功'，如果三次密码都不正确，则退出程序*******/
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char rest[20] = {0};
	while(i<3)
	{
	printf("请输入密码:");
	scanf("%s",&rest);
		if(strcmp(rest,"12345678")==0)		//==不能用来比较两个字符串是否相等，应该使用一个库函数—strcmp函数
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("登陆失败\n");
		}
		i++;
	}
	if(i>=3)
	printf("请确认好密码在输入\n");
	return 0;
}