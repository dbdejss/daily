#include "game.h"
void mean()
{
	printf("******************************************\n");
	printf("*****   1.��ʼ��Ϸ      0.������Ϸ   *****\n");
	printf("******************************************\n");
}

void game()
{
//��Ϸ������ʵ��
//����һ����ά������������ҵĲ���
	char Board[ROW][COL] = {0};
	char ret = 0;
//��ά����ĳ�ʼ��
	IniaBoard(Board,ROW,COL);
//���̵Ĵ���
	BuildBoard(Board,ROW,COL);
	//printf("������\n");
//��Һ͵��ԵĲ���
	while(1)
	{
//��Ҳ���
	PlayMove(Board,ROW,COL);
	BuildBoard(Board,ROW,COL);
	ret = Win(Board,ROW,COL);
		{
			if(ret!='C')
				break;
		}
//���Բ���
	ComputerMove(Board,ROW,COL);
	BuildBoard(Board,ROW,COL);
	ret = Win(Board,ROW,COL);
			if(ret!='C')
			{
				break;	
			}
	}
		if(ret=='*')
			printf("���Ӯ\n");
		else if(ret=='#')
			printf("����Ӯ\n");
		else
			printf("ƽ��\n");
}
int main()
{
//ִ�г����ʵ��
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
	mean();
	printf("��ѡ��:->");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ�����������ѡ��\n");
		break;
	}	
	}
	while(input);
	return 0;
}