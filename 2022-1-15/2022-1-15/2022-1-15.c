#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在1分钟内关机，如果输入:我是猪,就取消关机!\n");
	scanf("%s",&input);
	if(0==strcmp(input,"我不是猪"))
	{
		system("shutdown -a");
		//break;
	}
	else
		goto again;
	return 0;
}