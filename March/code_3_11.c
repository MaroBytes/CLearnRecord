#include <stdio.h>

/*
int main()
{
	int a = 3;
	int b = 5;
	//交换
	int c = 0;//空瓶
	c = a;
	a = b;
	b = a;
	return 0;
}
*/

/*
int main()
{
	//此类交换方法有缺陷：数值过大会溢出
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}*/
/*
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d, b=%d", a, b);
	return 0;
}*/

/*
int main()
{
	int a = 13;
	a = a ^ (1 << 4);
	printf("%d", a);
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	a = 100;
	a = a + 100;
	a += 100;
	return 0;
}*/
/*
int main()
{
	int flag = 5;
	//flag为真，打印
	if (flag)
	{
		printf("hehe\n");
		flag = 0;
	}
	//flag为假，打印
	if (!flag)
	{
		printf("haha\n");
	}
	return 0;
}*/
/*
int main()
{
	int a = 1;
	short s = 10;
	printf("%zd", sizeof(s = a + 2));//sizeof括号中放的表达式是不参与运算的
	printf("%d", s);
	return 0;
}*/
/*
int main()
{
	int a = 10;
	printf("%p", &a);
	int *pa = &a;//从今天开始指针对齐方式为右对齐即int *pa而不是int* pa，这么做是为了提高代码的易读性，参考高质量编程指南
	*pa = 20;
	printf("%d", a);
	return 0;
}*/

