#include <stdio.h>


#include <math.h>

int main()
{
/********��ϰ:��ӡ100~200֮�������*******/
	//int i,j;
	//int sum = 0;
	//for(i=100;i<=200;i++)			//�Գ���
	//{
	//	for(j=2;j<i;j++)			
	//	{
	//		if(i%j==0)
	//		{
	//		break;
	//		}
	//	}
	//	if(j==i)					//���i/2--��i-1����������0����˵��i������
	//	{							
	//		printf("%d ",i);
	//		sum++;
	//	}
	//}
	//printf("\nsum=%d\n",sum);
	//return 0;

//���߿���д������������ʽ������ʽ���Ӹ�Ч��
//	int i,j;
//	int sum = 0;
//	for(i=100;i<=200;i++)			//�Գ���
//	{
///*		int c;
//		c = sqrt((double)i);*/		//���Ҫʹ��sqrt���������������д����Ϊsqrt�������󸡵���
//		for(j=2;j<=pow(i,0.5);j++)			//pow�������������ݵĺ���
//		{
//			if(i%j==0)
//			{
//			break;
//			}
//		}
//		if(j > pow(i,0.5))					//���i/2--��i-1����������0����˵��i������
//		{							
//			printf("%d ",i);
//			sum++;
//		}
//	}
//	printf("\nsum = %d\n",sum);
//	return 0;

/**********��ϰ:ͳ��0-100֮����9�ж���********/
	int i = 0;
	int count = 0;
	for(i=0;i<100;i++)
	{
		if(i%10==9)
			count++;
		if(i/10==9)			/*ע�����������else if��ĵô�Ϊ19����Ϊ99��ǰ���if�����Ժ�
		                    else if��û�л���ʹ�õģ�������õ�ֵҪ����ʵֵС1*/
			count++;
	}
	printf("count = %d\n",count);
	return 0;
}