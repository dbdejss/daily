#include <stdio.h>
#include <math.h>

int ss(int n)
{
	int j = 0;
//������ֻ��1���������������ص���
//������sqrt�ᱨ��
	for(j=2;j<=pow(n,0.5);j++)							
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
int main()
{
//дһ������:�ж�100-200֮�������
	int i;
	for(i=100;i<200;i++)
	{
		if(ss(i) == 1)
		printf("%d  ",i);
	}
	return 0;
}