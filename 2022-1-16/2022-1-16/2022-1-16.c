#include <stdio.h>
#include <math.h>

int ss(int n)
{
	int j = 0;
//素数是只有1和它本身两个因素的数
//这里用sqrt会报错
	for(j=2;j<=pow(n,0.5);j++)							
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
int main()
{
//写一个函数:判断100-200之间的素数
	int i;
	for(i=100;i<200;i++)
	{
		if(ss(i) == 1)
		printf("%d  ",i);
	}
	return 0;
}