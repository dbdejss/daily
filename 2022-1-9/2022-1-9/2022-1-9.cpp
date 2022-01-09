#include <stdio.h>


#include <math.h>

int main()
{
/********练习:打印100~200之间的素数*******/
	//int i,j;
	//int sum = 0;
	//for(i=100;i<=200;i++)			//试除法
	//{
	//	for(j=2;j<i;j++)			
	//	{
	//		if(i%j==0)
	//		{
	//		break;
	//		}
	//	}
	//	if(j==i)					//如果i/2--（i-1）都不等于0，则说明i是素数
	//	{							
	//		printf("%d ",i);
	//		sum++;
	//	}
	//}
	//printf("\nsum=%d\n",sum);
	//return 0;

//或者可以写成下面这种形式（该形式更加高效）
//	int i,j;
//	int sum = 0;
//	for(i=100;i<=200;i++)			//试除法
//	{
///*		int c;
//		c = sqrt((double)i);*/		//如果要使用sqrt函数，则必须这样写，因为sqrt适用于求浮点数
//		for(j=2;j<=pow(i,0.5);j++)			//pow函数是用来求幂的函数
//		{
//			if(i%j==0)
//			{
//			break;
//			}
//		}
//		if(j > pow(i,0.5))					//如果i/2--（i-1）都不等于0，则说明i是素数
//		{							
//			printf("%d ",i);
//			sum++;
//		}
//	}
//	printf("\nsum = %d\n",sum);
//	return 0;

/**********练习:统计0-100之间有9有多少********/
	int i = 0;
	int count = 0;
	for(i=0;i<100;i++)
	{
		if(i%10==9)
			count++;
		if(i/10==9)			/*注意这里如果用else if算的得答案为19，因为99被前面的if用了以后
		                    else if是没有机会使用的，所以算得的值要比真实值小1*/
			count++;
	}
	printf("count = %d\n",count);
	return 0;
}