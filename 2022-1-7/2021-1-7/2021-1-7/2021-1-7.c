//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "���̵���ѧ�ǵ���ѧ��һ����֧����ר���о��빤�̽��跽���йص�ѧ��";
//	char arr2[] = "################################################################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(500);		//ͣ��һ��
//		system("cls");		//ִ��ϵͳ��һ��������cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}
/**********��ϰ��ģ���û���¼���û�ֻ�������������룬���������ȷ������ʾ'��½�ɹ�'������������붼����ȷ�����˳�����*******/
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char rest[20] = {0};
	while(i<3)
	{
	printf("����������:");
	scanf("%s",&rest);
		if(strcmp(rest,"12345678")==0)		//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯����strcmp����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��½ʧ��\n");
		}
		i++;
	}
	if(i>=3)
	printf("��ȷ�Ϻ�����������\n");
	return 0;
}