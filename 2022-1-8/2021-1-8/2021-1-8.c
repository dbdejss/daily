#include <stdio.h>

int main()
{
/***********��ϰ:�Ӵ�С���3����*********/
	//int a,b,c;
	//printf("������������:");
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


/**********��ϰ:���������������������������Լ��*********/

	int a,b,r;
	printf("������������:");
	scanf("%d%d",&a,&b);
	while(a%b)				//*շת�����
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("�����������Լ����:%d\n",b);
	return 0;
}

