#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };//存放输入信息
	//shutdown -s -t 60 设置60s后关机
	//shutdown -a 取消关机
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}