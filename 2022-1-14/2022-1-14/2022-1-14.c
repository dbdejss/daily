#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void mean()
{
	printf("*****************************************\n");
	printf("*******  1.开始游戏   0.退出游戏  *******\n");
	printf("*****************************************\n");
}

void game()
{
	int random_num = rand()%100+1;		
	//在使用rand()函数之前需要编写一个随机生成器,便于rand()函数能够随机生成数字	
	//rand()是生成0-23400之间的数
	//printf("%d\n",random_num);
	while(1)
	{
		int input;
		printf("请猜数字:");
		scanf("%d",&input);
		if(input>random_num)
			printf("猜大了\n");
		else if(input<random_num)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
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
	printf("请选择->:");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
			game();
			break;
	case 0:
			break;
	default:
			printf("输入错误\n");
			break;	
	}
	}while(input);
	return 0;
}