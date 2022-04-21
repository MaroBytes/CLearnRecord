#include <stdio.h>
#include <stdlib.h>
//动态内存分配
/*
int main()
{
	//局部变量分配栈区
	//int arr[10];
	//使用动态内存分配堆区
	int *p = (int *)malloc(10 * sizeof(int));
	//使用这些空间的时候
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", p[i]);//p[i]->*(p+i)
	}
	//回收空间
	free(p);
	//避免p非法访问内存，置为空指针
	p = NULL;
	return 0;
}
*/

//柔性数组
struct S
{
	int n;
	int arr[];//指定元素个数未知，称为柔性数组成员 或者arr[0]
};

int main()
{
	struct S *ps = (struct S *)malloc(sizeof(struct S) + 10 * sizeof(int));//给柔性数组分配10个int大小空间
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	struct S *ptr = (struct S *)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	free(ps);
	ps = NULL;
	//struct S s = { 0 };
	//printf("%d\n", sizeof(s));//计算大小时不包含柔性数组成员所占空间大小
	return 0;
}