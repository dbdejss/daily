#include <stdio.h>


void Add(int* p)
{
	(*p)++;					//这里不能写成*p++，因为++的运算级高于*
}
int main()
{
//写一个函数，每调用一次这个函数，就会将 num 的值增加1
	int num = 0;
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}