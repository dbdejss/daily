#include <stdio.h>
//#include <string.h>
//int my_strlth(char* arr)
//{
//	if(* arr != '\0')
//		return 1+my_strlth(arr+1);
//	else
//		return 0;
//}
//int main()
//{
////编写函数不允许创建临时变量，求字符串长度
//	char arr[] = "bit";
//	int	len = my_strlth(arr);
//	printf("len = %d\n",len);
//	return 0;
//}

//int Fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac(n-1);
//}
//int main()
//{
////练习:用递归求n的阶乘（不考虑溢出）
//	int n = 0;
//	printf("请输入一个数:");
//	scanf("%d",&n);
//	printf("%d\n",Fac(n));
//}

//int Fib(int n)							//在这里用斐波拉契求n个斐波拉契数效率极慢，不提倡
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}


//int main()
//{
////用递归写一个求n个斐波拉契数（不考虑溢出）
//	int num = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	printf("*******求n个斐波拉契数*******\n");
//	printf("请输入要求的数:");
//	scanf("%d",&num);
//	while(num>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		num--;
//	}
//	printf("%d\n",c);
//	return 0;
//}


void move(char c1,char c2)
{
	printf("%c->%c\n",c1,c2);
}
void Hanoi(int n,char x,char y,char z)
{
	if(n==1)
		move(x,z);
	else
	{
		Hanoi(n-1,x,y,z);
		move(x,z);
		Hanoi(n-1,y,x,z);	
	}

}
int main()
{
//用递归写汉诺塔问题
	int n = 0;
	printf("请输入层数:");
	scanf("%d",&n);
	Hanoi(n,'a','b','c');
	return 0;
}

