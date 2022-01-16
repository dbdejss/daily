#include <stdio.h>

int is_dichotomy (int arr[],int k,int ze)
{

	int left = 0;
	int right = ze-1;
	//int ze = sizeof(arr)/sizeof(arr[0]);				这里的	int ze = sizeof(arr)/sizeof(arr[0])不能放在这里，因为数组传过来的只是数组中的第一个元素的地址
	while(left<=right)
	{
	int mid = (left+right)/2;
	if(k>arr[mid])
		left = mid+1;
	else if(k<arr[mid])
		right = mid-1;
	else
		return mid;
	}
	return -1;
}
int main()
{
//练习:写一个函数：用二分法实现一个整形有序数组的二分查找
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int ze = sizeof(arr)/sizeof(arr[0]);
	int ret;
	int k = 7;
	ret = is_dichotomy(arr,k,ze);
		if(ret == -1)
			printf("找不到\n");
		else
			printf("找到了，下标是:%d\n",ret);

	return 0;
}