#include <stdio.h>
#include <math.h>
void main()
{

	int n=1,a=1,x;
	while (n<=10)
	{
		a=2*a;
		x=3*a-2;
		++n;
	}
	printf("���ӵ�һ��ժ����%d������\n",x);
}