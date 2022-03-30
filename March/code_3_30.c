#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));//第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//第二行 *(a+1)->a[1]
//	printf("%d\n", sizeof(a[3]));//16 sizeof会自己推测运算结果，sizeof内部表达式不会去计算，所以其实不存在也能通过类型计算大小 int[4]类型
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 2));//2 
//	printf("%d\n", s);//5
//	printf("%d\n", sizeof(rand()));//4 不调用函数 只根据函数返回类型判断大小
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a+1 - 类型是 int (*)[5] 需要强制类型转换成(int*)
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int *)p + 0x1);
//	return 0;
//}

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}