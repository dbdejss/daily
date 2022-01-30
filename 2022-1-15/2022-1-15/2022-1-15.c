//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将在1分钟内关机，如果输入:我是猪,就取消关机!\n");
//	scanf("%s",&input);                 //%c格式对应的是单个字符，%s格式对应的是字符串
//	if(0==strcmp(input,"我不是猪"))
//	{
//		system("shutdown -a");
//		//break;
//	}
//	else
//		goto again;
//	return 0;
//}

char is_swap(char a[], int sz,int i)
{
	for (i = 0; i < sz; i++)
	{
		printf("%c",a[sz-1-i]);
	}
	return 0;
}
int main()
{
//写一个函数，让用户输入的字符串逆序
	int i = 0;
	char a[200] = { 0 };
	printf("请输入一串字符:");
	scanf("%[^\n]", &a);
	int sz = strlen(a);
	char b = '0';
	b = is_swap(a, sz, i);
	return 0;
}
