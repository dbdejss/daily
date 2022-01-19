//#include <stdio.h>
//#include <string.h>
//int main()
//{
////数组的初始化
//	char arr1[]="abcdes";
//	printf("%d\n",sizeof(arr1));			//sizeof()是求arr1所占空间的大小
//	printf("%d\n",strlen(arr1));			//strlen()是求arr1中字符的长度，其中\0不计算在内
//	return 0;
//	//1.strlen 和 sizeof没有什么关联
//	//2.strlen 是求字符串长度的——只能针对字符串求长度——是库函数——使用得引头文件
//	//3.sizeof 计算变量、数组、类型得大小——单位是字节——是操作符
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));		//4
//	printf("%d\n",sizeof(arr2));		//3
//	printf("%d\n",strlen(arr1));		//3
//	printf("%d\n",strlen(arr2));		//随机值
//	return 0;
//}

//int main()
//{
//一维数组的使用——操作符[]
	//int i;
	//int arr[] = {1,2,3,4,5,6,7,8,9,0};
	//int ze = sizeof(arr)/sizeof(arr[0]);
	//for(i=0;i<10;i++)
	//{
	//	printf("%d  ",arr[i]);
	//}
	//return 0;

//	int i;
//	char arr[]="abcdef";
//	for(i=0;i<(int)strlen(arr);i++)
//	{
//		printf("%c  ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//数组在内存中的存储形式
	//int i;
	//int arr[] = {1,2,3,4,5,6,7,8,9,0};
	//int ze = sizeof(arr)/sizeof(arr[0]);
	//for(i=0;i<ze;i++)
	//{
	//	printf("%d = %p\n",i,&arr[i]);			//内存的打印是%p
	//}
//结果:
//0 = 0036F854
//1 = 0036F858
//2 = 0036F85C
//3 = 0036F860
//4 = 0036F864									//说明数组在内存中的存储形式是：连续存放的，由低地址到高地址
//5 = 0036F868
//6 = 0036F86C
//7 = 0036F870
//8 = 0036F874
//9 = 0036F878
//	return 0;
//}


//int main()
//{
//二维数组的创建
/*	int arr[3][4];	*/				//二维数组中第一个方括号标识行，第二个方括号标识列
	//char ch[5][6];
	//return 0;


//二维数组的初始化
/*	int arr[][]={1,2,3,4,5,6,7,8};	*/			//这里会报错——“arr”: 缺少下标
/*	int arr[2][]={1,2,3,4,5,6,7,8};	*/			//这里会报错——“arr”: 缺少下标
/*	int arr[][2]={1,2,3,4,5,6,7,8};	*/			//这里不报错——说明二维数组初始化必须定义下标（可以只定义列，不定义行；可以两个都定义；不能只定义行，不定义列）
	//return 0;


//二维数组的使用
	//int i,j;
	//int arr[3][4]={{1,2},{3,4,5},{5,6,7}};
	//for(i=0;i<3;i++)
	//{
	//	for(j=0;j<4;j++)						
	//	{
	//		printf("%d  ",arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//return 0;
//结果
//1  2  0  0
//3  4  5  0
//5  6  7  0
//
//}


//int main()
//{
////二维数组在内存中的存储形式
//	int i,j;
//	int arr[3][4]={{1,2},{3,4,5},{5,6,7}};
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)						
//		{
//			printf("arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//结果
//arr[0][0] = 00F3FB38
//arr[0][1] = 00F3FB3C
//arr[0][2] = 00F3FB40
//arr[0][3] = 00F3FB44
//arr[1][0] = 00F3FB48
//arr[1][1] = 00F3FB4C	//二维数组在内存中也是连续存放的，其实一维数组是二维数组中的一种特列，我们在查找二维数组中的某个元素时也可以将二维数组看成一维数组
//arr[1][2] = 00F3FB50
//arr[1][3] = 00F3FB54
//arr[2][0] = 00F3FB58
//arr[2][1] = 00F3FB5C
//arr[2][2] = 00F3FB60
//arr[2][3] = 00F3FB64
}