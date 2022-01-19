#include <stdio.h>
//
//void bubbli(int arr[],int sz)
//{
//	int i,j;
//	for(i=0;i<sz-1;i++)								//这样的代码执行效率比较低，列入数组为arr[]={1,2,3,4,5,6,7,8,9,10},这样就可以不使用该函数
//	{
//		int flag = 1;								//为了避免程序重复执行不必要的代码，在这里设置一个判断条件，当程序返回值为1时，说明该数组已经是排好的顺序
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int temp;
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//			break;
//	}
//}
//int main()
//{
////使用冒泡法来理解数组的传参
//	int i;
//	int arr[]={10,11,12,13,14,15,16,17,18,19};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubbli(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}

int main()
{
//通过一个列子来说明数组名就是首元素的地址
	//int arr[]={0,1,2,3};
	//printf("%p\n",arr);
	//printf("%p\n",&arr[0]);
	//return 0;
//结果：
//00BCFB28				
//00BCFB28

//注意：这里有两个特列
//1.sizeof(数组名)——表示整个数组的地址
//2.&数组名——表示整个数组的地址
	int arr[]={0,1,2,3};
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	return 0;
//结果：
//00EFFE78
//00EFFE7C
//00EFFE78
//00EFFE7C
//00EFFE78
//00EFFE88
}