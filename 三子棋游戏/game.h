#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void IniaBoard(char Board[ROW][COL],int row,int col);
void BuildBoard(char Board[ROW][COL],int row,int col);
void PlayMove(char Board[ROW][COL],int row,int col);
void ComputerMove(char Board[ROW][COL],int row,int col);
//������ֽ��
//1.���Ӯ		����'*'
//2.����Ӯ      ����'#'
//3.ƽ��		����'Q'
//4.����		����'C'
char Win(char Board[ROW][COL],int row,int col);