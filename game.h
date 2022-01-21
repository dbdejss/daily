#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void IniaBoard(char Board[ROW][COL],int row,int col);
void BuildBoard(char Board[ROW][COL],int row,int col);
void PlayMove(char Board[ROW][COL],int row,int col);
void ComputerMove(char Board[ROW][COL],int row,int col);
//输出四种结果
//1.玩家赢		——'*'
//2.电脑赢      ——'#'
//3.平局		——'Q'
//4.继续		——'C'
char Win(char Board[ROW][COL],int row,int col);