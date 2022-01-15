#include <stdio.h>

//void swap_num(int x,int y)		//注意这样写，是不会起到交换作用的，因为x，y分别于a，b的地址不相同
//{
//	int tepm;
//	tepm = x;
//	x = y;
//	y = tepm;
//}

void swap_num(int* pa,int* pb)		//这样写，才可以起到交换作用的，因为x，y分别和a，b有相同的地址
{
	int tepm;
	tepm = * pa;
	* pa = * pb;
	*pb = tepm;
}
int main()
{
/**************写一个函数比较两个数的大小************/
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