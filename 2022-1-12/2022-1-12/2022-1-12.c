#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*************************************\n");
	printf("********      1.��ʼ��Ϸ     ************\n");
	printf("********      0.�˳���Ϸ     ************\n");
	printf("*************************************\n");
}

void game()
{
	int random_num = rand()%100+1;			//����1-100֮��������
	int input = 0;
	while(1)
	{
		printf("������µ�����>:");
		scanf("%d",&input);
		if(input>random_num)
			printf("�´���\n");
		else if(input<random_num)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
/***********************************��ϰ:������Ϸ***********************************/
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();					//���ɲ˵�
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:game();
			   break;
		case 0:
			   break;
		default:
			   printf("ѡ��������������룡\n");
			   break;
		}
	}while(input);
	return 0;
}