#include "game.h"
void mean()
{
	printf("******************************************\n");
	printf("*****   1.开始游戏      0.结束游戏   *****\n");
	printf("******************************************\n");
}

void game()
{
//游戏函数的实现
//定义一个二维数组来保存玩家的操作
	char Board[ROW][COL] = {0};
	char ret = 0;
//二维数组的初始化
	IniaBoard(Board,ROW,COL);
//棋盘的创建
	BuildBoard(Board,ROW,COL);
	//printf("三子棋\n");
//玩家和电脑的操作
	while(1)
	{
//玩家操作
	PlayMove(Board,ROW,COL);
	BuildBoard(Board,ROW,COL);
	ret = Win(Board,ROW,COL);
		{
			if(ret!='C')
				break;
		}
//电脑操作
	ComputerMove(Board,ROW,COL);
	BuildBoard(Board,ROW,COL);
	ret = Win(Board,ROW,COL);
			if(ret!='C')
			{
				break;	
			}
	}
		if(ret=='*')
			printf("玩家赢\n");
		else if(ret=='#')
			printf("电脑赢\n");
		else
			printf("平局\n");
}
int main()
{
//执行程序的实现
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
	mean();
	printf("请选择:->");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误，请重新选择\n");
		break;
	}	
	}
	while(input);
	return 0;
}