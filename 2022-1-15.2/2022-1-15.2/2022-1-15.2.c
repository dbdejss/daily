#include <stdio.h>

//void swap_num(int x,int y)		//ע������д���ǲ����𵽽������õģ���Ϊx��y�ֱ���a��b�ĵ�ַ����ͬ
//{
//	int tepm;
//	tepm = x;
//	x = y;
//	y = tepm;
//}

void swap_num(int* pa,int* pb)		//����д���ſ����𵽽������õģ���Ϊx��y�ֱ��a��b����ͬ�ĵ�ַ
{
	int tepm;
	tepm = * pa;
	* pa = * pb;
	*pb = tepm;
}
int main()
{
/**************дһ�������Ƚ��������Ĵ�С************/
	//int a = 20;
	//int b = 25;
	//int swap;
	//printf("a = %d  b = %d\n",a,b);
	//swap_num(a,b);
	//printf("a = %d  b = %d\n",a,b);

	int a = 20;
	int b = 25;
	printf("a = %d  b = %d\n",a,b);
	swap_num(&a,&b);
	printf("a = %d  b = %d\n",a,b);
	return 0;
}