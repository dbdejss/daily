#include <stdio.h>

int main()
{
/***********��ϰ:����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ�������ӡ����****/
	//int i = 0;
	//double sum = 0;
	//int flag = 1;
	//for(i=1;i<=100;i++)
	//{
	//		sum = sum+flag*(1.0/i);			//��������������Ҫ��õ�С���������ʹ����һ������ΪС����ʽ
	//		flag = -flag;
	//}
	//printf("%5f\n",sum);
	//return 0;

/*******��ϰ:��10�����е����ֵ********/
	int i,max,arr[10];
	printf("������10����:");
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