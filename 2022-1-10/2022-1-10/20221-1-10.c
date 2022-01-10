#include <stdio.h>

int main()
{
/***********练习:计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，结果打印出来****/
	//int i = 0;
	//double sum = 0;
	//int flag = 1;
	//for(i=1;i<=100;i++)
	//{
	//		sum = sum+flag*(1.0/i);			//整数除以整数，要求得到小数，则必须使其中一个整数为小数形式
	//		flag = -flag;
	//}
	//printf("%5f\n",sum);
	//return 0;

/*******练习:求10个数中的最大值********/
	int i,max,arr[10];
	printf("请输入10个数:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[10];
	for(i=1;i<10;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
}