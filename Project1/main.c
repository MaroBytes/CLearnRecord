#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };//���������Ϣ
	//shutdown -s -t 60 ����60s��ػ�
	//shutdown -a ȡ���ػ�
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}