#include <stdio.h>
int main()
{
///*******��ϰ:��ӡ�˷��ھ���*******/
//	int i,j;
//	int result;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d = %-2d  ",i,j,i*j);			//%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
/*******��ϰ:�ö��ַ����������������в���һ�����������±��ӡ����������Ҳ�����������Ҳ���*****/
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int ze = sizeof(a)/sizeof(a[0]);
	int k = 10;
	int left = 0;
	int right = ze-1;
	int mid = 0;
	while(left<=right)
	{
	mid = (left+right)/2;
	if(k<a[mid])
		{
		right = mid-1;
		}
	else if(k>a[mid])
		{
		left = mid+1;
		}
	else
	    break;
	}
	if(left<=right)
	printf("�±���:%d\n",mid);
	if(left>right)
	printf("�Ҳ���\n");
	return 0;
}