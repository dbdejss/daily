#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void mean()
{
	printf("*****************************************\n");
	printf("*******  1.��ʼ��Ϸ   0.�˳���Ϸ  *******\n");
	printf("*****************************************\n");
}

void game()
{
	int random_num = rand()%100+1;		
	//��ʹ��rand()����֮ǰ��Ҫ��дһ�����������,����rand()�����ܹ������������	
	//rand()������0-23400֮�����
	//printf("%d\n",random_num);
	while(1)
	{
		int input;
		printf("�������:");
		scanf("%d",&input);
		if(input>random_num)
			printf("�´���\n");
		else if(input<random_num)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
	mean();
	printf("��ѡ��->:");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
			game();
			break;
	case 0:
			break;
	default:
			printf("�������\n");
			break;	
	}
	}while(input);
	return 0;
}