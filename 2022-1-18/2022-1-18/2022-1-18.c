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
////��д��������������ʱ���������ַ�������
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
////��ϰ:�õݹ���n�Ľ׳ˣ������������
//	int n = 0;
//	printf("������һ����:");
//	scanf("%d",&n);
//	printf("%d\n",Fac(n));
//}

//int Fib(int n)							//��������쳲�������n��쳲�������Ч�ʼ��������ᳫ
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}


//int main()
//{
////�õݹ�дһ����n��쳲��������������������
//	int num = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	printf("*******��n��쳲�������*******\n");
//	printf("������Ҫ�����:");
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
//�õݹ�д��ŵ������
	int n = 0;
	printf("���������:");
	scanf("%d",&n);
	Hanoi(n,'a','b','c');
	return 0;
}

