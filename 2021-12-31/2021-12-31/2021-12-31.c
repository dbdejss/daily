#include <stdio.h>

int main()
{
/*******练习在一个有序数组中查找某个数*******/
	//int ree[10]={1,2,3,4,5,6,7,8,9,10};
	//int i,k = 7;
	//int ze = sizeof(ree)/sizeof(ree[0]);
	//for(i=0;i<ze;i++)
	//{
	//	if(ree[i]==k)
	//	{
	//		printf("找到了，下标是:%d\n",i);
	//		break;
	//	}
	//}

/*********练习使用二分法查找某一个数*********/
	int arr[] = {1,2,3,4,5,6,7,8,9,10};		//定义一组有序数组
	int se = sizeof(arr)/sizeof(arr[0]);		//计算数组的长度
	int k = 11;					//要查的的数
	int left = 0;				//数组左边的第一个元素的下标
	int right = se-1;			//数组右边的第一个元素的下标


	while(left<=right)			//只有当所找范围之间有元素时，循环才执行
	{
		int mid = (left+right)/2;	//求数组中间元素的下标，为后面比较元素做准备
		if(k < arr[mid])
		{
			right = mid-1;			//如果所找元素比中间元素小，那么就将范围缩小在中间元素的左边
		}
		else if(k > arr[mid])
		{
			left = mid+1;			//如果所找元素比中间元素大，那么就将范围缩小在中间元素的右边
		}
		else
		{
			printf("找到了，下标是%d:",mid);
			break;
		}
	}
	printf("找不到\n");
	return 0;
}