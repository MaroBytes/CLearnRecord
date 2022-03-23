//函数指针数组应用实例

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
	//转移表 - 《C和指针》
	int (*parr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//int (*)(int, int)类型的函数指针数组
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input >= 1 && input <=4)
		{
			printf("请输入2个操作数:>");
			scanf("%d %d", &a, &b);
			int ret = (parr[input])(a, b);
			printf("ret = %d\n", ret);
		}
		else if(input==0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误，请重新选择！\n");
		}
	} while (input);
	return 0;
}