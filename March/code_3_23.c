//����ָ������Ӧ��ʵ��

#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************************\n");
	printf("**********  1.Add  2.Sub  ************\n");
	printf("**********  3.Mul  4.div  ************\n");
	printf("**************  0.Exit  **************\n");
}
int main()
{
	int a = 0 ,b = 0, input = 0;
	//ת�Ʊ� - ��C��ָ�롷
	int (*parr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//int (*)(int, int)���͵ĺ���ָ������
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input >= 1 && input <=4)
		{
			printf("������2��������:>");
			scanf("%d %d", &a, &b);
			int ret = (parr[input])(a, b);
			printf("ret = %d\n", ret);
		}
		else if(input==0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}