#include <stdio.h>
#include <string.h>

int get_max(int x,int y)			//自定义函数
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	//char arr1[]="你好赵文康，你是傻逼";
	//char arr2[]="#####################";
	//char arr3[]="#####################";
	//strcpy(arr2,arr1);					//strcpy——字符复制函数
	//strcpy(arr3,"世界你好!");
	//printf("%s\n%s\n",arr2,arr3);


	//char arr[] = "hello word";
	//memset(arr,'#',5);						//memset——内存操作函数
	//printf("%s\n",arr);


	int a = 10;
	int b = 20;
	int max = get_max(a,b);
	printf("max = %d\n",max);
	max = get_max(2000,1999);
	printf("max = %d\n",max);
	return 0;
}