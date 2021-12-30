#include <stdio.h>

int main()
{
	//char ret = 0;
	//char ch = 0;
	//char password[20]={0};				//定义一个数组来接收输入的字符
	//printf("请输入密码:\n");
	//scanf("%s",&password);				//用scanf来接收输入的密码
	//while(ch = getchar()!='\n')			//用while循环使getchar将'\n'和前面的字符全部读走，防止后面程序出错
	//{
	//	;
	//}
	//printf("请确认Y/N:\n");				//让用户确认密码
	//ret = getchar();					//接收用户的输入字符
	//if (ret == 'Y')
	//	printf("确认成功\n");
	//else
	//	printf("确认失败\n");

	//return 0;

/********只输出数字0-9，不输入其他字符*******/
	//char ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if(ch<'0' || ch>'9')
	//	{
	//		continue;
	//	}	
	//	putchar(ch);
	//}
	//return 0;

/*******fro循环里面的break和continue*******/
	//int i;
	//for (i=1;i<=10;i++)
	//{
	//	if(i==5)
	//	continue;
	//	printf("%d ",i);
	//}
	//return 0;

/*******区别while中的continue*******/
	//int i=1;
	//while (i<=10)
	//{
	//	if(i==5)
	//	continue;
	//	printf("%d ",i);			//这里的continue会使while一直死循环
	//	i++;
	//}
	//return 0;

/********for循环*******/
	//int i = 0;
	//int j = 0;
	//for (;i<10;i++)
	//{
	//	for (;j<10;j++)
	//		{
	//			printf("hehe\n");
	//		}
	//}
	//return 0;

	//int i = 0;
	//int k = 0;
	//for (i=0,k=0;k=0;i++,k++)
	//{
	//	k++;
	//}
	//return 0;

/********do while语句*******/
/********输出数字1-10*******/
	//int i = 1;
	//do
	//{
	//	if(i==5)
	//	{
	//		continue;
	//	}
	//	printf("%d ",i);
	//	i++;
	//}
	//while(i<10);
	//return 0;

/*******练习：计算n的阶乘*******/
	//int n;
	//int rest = 1,num = 1;
	//printf("请输入一个数:");
	//scanf("%d",&n);
	//do
	//{
	//	rest = num * rest;
	//	num++;
	//}
	//while(num <= n);
	//printf("%d!=%d\n",n,rest);
	//return 0;
	//int n,i,rest = 1;
	//printf("请输入一个数:");
	//scanf("%d",&n);
	//for(i=1;i<=n;i++)
	//{
	//	rest = rest * i;
	//}
	//printf("%d! = %d\n",n,rest);
	//return 0;

/*******计算1！+2！+...+10！*******/
	int i;
	int rest = 1;
	int final = 0;
	for(i=1;i<=10;i++)
	{
		rest = rest * i;
		final = final + rest; 

	}
	printf("%d\n",final);
	return 0;
}
