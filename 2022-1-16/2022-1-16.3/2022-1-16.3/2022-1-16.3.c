#include <stdio.h>


void Add(int* p)
{
	(*p)++;					//���ﲻ��д��*p++����Ϊ++�����㼶����*
}
int main()
{
//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
	int num = 0;
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}