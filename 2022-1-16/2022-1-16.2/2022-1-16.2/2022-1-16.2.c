#include <stdio.h>

int is_dichotomy (int arr[],int k,int ze)
{

	int left = 0;
	int right = ze-1;
	//int ze = sizeof(arr)/sizeof(arr[0]);				�����	int ze = sizeof(arr)/sizeof(arr[0])���ܷ��������Ϊ���鴫������ֻ�������еĵ�һ��Ԫ�صĵ�ַ
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
//��ϰ:дһ���������ö��ַ�ʵ��һ��������������Ķ��ֲ���
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int ze = sizeof(arr)/sizeof(arr[0]);
	int ret;
	int k = 7;
	ret = is_dichotomy(arr,k,ze);
		if(ret == -1)
			printf("�Ҳ���\n");
		else
			printf("�ҵ��ˣ��±���:%d\n",ret);

	return 0;
}