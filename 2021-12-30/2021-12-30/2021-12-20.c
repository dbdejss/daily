#include <stdio.h>

int main()
{
	//char ret = 0;
	//char ch = 0;
	//char password[20]={0};				//����һ������������������ַ�
	//printf("����������:\n");
	//scanf("%s",&password);				//��scanf���������������
	//while(ch = getchar()!='\n')			//��whileѭ��ʹgetchar��'\n'��ǰ����ַ�ȫ�����ߣ���ֹ����������
	//{
	//	;
	//}
	//printf("��ȷ��Y/N:\n");				//���û�ȷ������
	//ret = getchar();					//�����û��������ַ�
	//if (ret == 'Y')
	//	printf("ȷ�ϳɹ�\n");
	//else
	//	printf("ȷ��ʧ��\n");

	//return 0;

/********ֻ�������0-9�������������ַ�*******/
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

/*******froѭ�������break��continue*******/
	//int i;
	//for (i=1;i<=10;i++)
	//{
	//	if(i==5)
	//	continue;
	//	printf("%d ",i);
	//}
	//return 0;

/*******����while�е�continue*******/
	//int i=1;
	//while (i<=10)
	//{
	//	if(i==5)
	//	continue;
	//	printf("%d ",i);			//�����continue��ʹwhileһֱ��ѭ��
	//	i++;
	//}
	//return 0;

/********forѭ��*******/
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

/********do while���*******/
/********�������1-10*******/
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

/*******��ϰ������n�Ľ׳�*******/
	//int n;
	//int rest = 1,num = 1;
	//printf("������һ����:");
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
	//printf("������һ����:");
	//scanf("%d",&n);
	//for(i=1;i<=n;i++)
	//{
	//	rest = rest * i;
	//}
	//printf("%d! = %d\n",n,rest);
	//return 0;

/*******����1��+2��+...+10��*******/
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
