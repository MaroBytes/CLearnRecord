#include <stdio.h>
/*
struct Book
{
	char name[20];
	char id[20];
	int price;
};

int main()
{
	int num = 10;
	struct Book	b = { "C语言","c20220312",55 };
	struct Book *pb = &b;
	printf("书名：%s\n", (*pb).name);
	printf("书号：%s\n", pb->id);
	printf("定价：%d\n", b.price);
	return 0;
}*/

int main()
{
	char a = 3;
	//000000000000000000000000000000011
	//00000011 - a
	char b = 127;
	/*000000000000000000000000001111111*/
	//01111111 - b

	char c = a + b;
	//a和b都是char类型，都没有达到一个int的大小
	//这里就会发生整型提升，按照符号位提升，如下
	000000000000000000000000000000011 - a
	//000000000000000000000000001111111 - b
	//000000000000000000000000010000010
	//截断后 10000010 - c

	printf("%d\n", c);//输出-126
	//c要以%d形式输出，c要进行整型提升
	//111111111111111111111111110000010 - 补码
	//111111111111111111111111110000001 - 反码
	//100000000000000000000000001111110 - 原码
	return 0;
}

