#include <stdio.h>
//
//void bubbli(int arr[],int sz)
//{
//	int i,j;
//	for(i=0;i<sz-1;i++)								//�����Ĵ���ִ��Ч�ʱȽϵͣ���������Ϊarr[]={1,2,3,4,5,6,7,8,9,10},�����Ϳ��Բ�ʹ�øú���
//	{
//		int flag = 1;								//Ϊ�˱�������ظ�ִ�в���Ҫ�Ĵ��룬����������һ���ж������������򷵻�ֵΪ1ʱ��˵���������Ѿ����źõ�˳��
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
////ʹ��ð�ݷ����������Ĵ���
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
//ͨ��һ��������˵��������������Ԫ�صĵ�ַ
	//int arr[]={0,1,2,3};
	//printf("%p\n",arr);
	//printf("%p\n",&arr[0]);
	//return 0;
//�����
//00BCFB28				
//00BCFB28

//ע�⣺��������������
//1.sizeof(������)������ʾ��������ĵ�ַ
//2.&������������ʾ��������ĵ�ַ
	int arr[]={0,1,2,3};
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	return 0;
//�����
//00EFFE78
//00EFFE7C
//00EFFE78
//00EFFE7C
//00EFFE78
//00EFFE88
}