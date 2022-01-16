#include <stdio.h>
#include "add.h"
int main()
{
//函数的定义、声明
//在工程实际中一般是将函数的定义放在.c文件中，将函数声明放在头文件中
	int a = 20;
	int b = 30;
	printf("sum = %d\n",	Add(a,b));
	return 0;
}