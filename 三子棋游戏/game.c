#include "game.h"
void IniaBoard(char Board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			Board[i][j]=' ';
		}
	}
}

void BuildBoard(char Board[ROW][COL],int row,int col)
{
		int i = 0;
		int j = 0;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
			printf(" %c ",Board[i][j]);
			if(j<col-1)
				printf("|");			
			}
			printf("\n");
			if(i<row-1)
			{
				for(j=0;j<col;j++)
				{
					printf("---");
					if(j<col-1)
						printf("|");
				}
			printf("\n");
			}
		}
}

void PlayMove(char Board[ROW][COL],int row,int col)
{
	int i,j;
	while(1)
	{
	printf("请输入坐标->:");
	scanf("%d%d",&i,&j);
		if(i>=1 && i<=row &&j>=1 && j<=col)
		{
			if(Board[i-1][j-1]==' ')
			{
				Board[i-1][j-1]='*';
				break;
			}			
			else
				printf("该坐标已经被占用，请重新输入\n");
		}
		else
			printf("无效坐标，请重新输入\n");		
	}

}

void ComputerMove(char Board[ROW][COL],int row,int col)
{
	int i,j;
	printf("电脑走->:\n");
	while(1)
	{
		i = rand()%row;
		j = rand()%col;
		if(Board[i][j]==' ')
			 {
				Board[i][j]='#';
				break;		
			 }	
	}
}
//返回1表示满了
//返回0表示没满
int IsFull(char Board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(Board[i][j]==' ')
				return 0;
		}
	}
	return 1;
}
char Win(char Board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		if(Board[i][0]==Board[i][1] && Board[i][1]==Board[i][2] && Board[i][1]!=' ')
			return Board[i][0];
	}
	for(j=0;j<col;j++)
	{
		if(Board[0][j]==Board[1][j] && Board[1][j]==Board[2][j] && Board[0][j]!=' ')
			return Board[0][j];
	}
	if(Board[0][0]==Board[1][1] && Board[1][1]==Board[2][2] && Board[0][0]!=' ')
		return Board[0][0];	
	if(Board[0][2]==Board[1][1] && Board[1][1]==Board[2][0] && Board[0][2]!=' ')
		return Board[0][2];	
	//判断是否平局
	if(1==IsFull(Board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}