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
	printf("猴子第一天摘下了%d个桃子\n",x);
}