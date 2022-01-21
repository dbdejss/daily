#include <stdio.h>

int main()
{
/***********练习:从大到小输出3个数*********/
	//int a,b,c;
	//printf("请输入三个数:");
	//scanf("%d,%d,%d",&a,&b,&c);
	//if(a<b)
	//{
	//	int tem = a;
	//	a = b;
	//	b = tem;
	//}
	//if(a<c)
	//{
	//	int tem = a;
	//	a = c;
	//	c = tem;
	//}
	//if(b<c)
	//{
	//	int tem = b;
	//	b = c;
	//	c = tem;
	//}
	//printf("%d  %d  %d\n",a,b,c);
	//return 0;


/**********练习:给定两个数，求这两个数的最大公约数*********/

	int a,b,r;
	printf("请输入两个数:");
	scanf("%d%d",&a,&b);
	while(a%b)				//*辗转相除法
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("两个数的最大公约数是:%d\n",b);
	return 0;
}

