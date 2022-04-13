#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>

/*
int main()
{
	//打开文件失败，返回NULL
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//errno是C语言定义的一个全局的错误码变量
		//printf("%s\n", strerror(errno));
		//perror更简单，还可以在错误信息前加自定义内容，不需要主动传errno，且直接打印
		perror("fopen");
		return 1;
	}
	//读文件后要关闭文件，令文件指针指向空
	fclose(pf);
	pf = NULL;
	return 0;
}
*/

/*
int main()
{
	char ch = '2';
	char ch1 = 'A';
	//如果为非数字字符，返回0；如果是数字字符返回非0
	//int ret = isdigit(ch);
	int ret = islower(ch1);
	printf("%d\n", ret);
	return 0;
}
*/

/*
void *my_memcpy(void *dest, const void *src, size_t num)
{
	void *ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char *)dest = *(char *)src;
		dest = (char *)dest + 1;
		src = (char *)src + 1;
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	return 0;

}
*/

//memcpy函数应该拷贝不重叠的内存，而VS中的实现既可以拷贝不重叠，也可以拷贝重叠内存
//memmove函数可以处理内存重叠的情况
/*
void *my_memmove(void *dest, const void *src, size_t num)
{
	void *ret = dest;
	if (dest < src)
	{
		//从前向后拷贝
		while (num--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		//从后向前拷贝
		while (num--)
		{
			*((char *)dest + num) = *((char *)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//my_memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1+2, 20);
	return 0;
}
*/

//memcmp - 内存比较函数

/*
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//以字节为单位设置内存
	return 0;
}
*/

/*
struct Book
{
	char name[20];
	int price;
	char id[12];
} b4, b5, b6;//全局变量

int main()
{
	//b1 b2 b4 是局部变量
	struct Book b1;
	struct Book b2;
	struct Book b3;
	return 0;
}

//不完全声明 - 匿名结构体变量 以下两个匿名结构体虽然成员相同，但在编译器看来，他们是不同的结构体类型
struct
{
	char c;
	int i;
	char ch;
	double d;
} s;

//匿名结构体指针
struct
{
	char c;
	int i;
	char ch;
	double d;
} *ps;
*/

//结构体实现自引用
/*
typedef struct Node
{
	int date;
	struct Node *ptr;
} Node;
*/

/*
struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}
*/

/*
*百度笔试题：写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明 
*考察： offsetof宏的实现
#include <stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};

int main() 
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}
*/

//结构体传参
/*
struct S
{
	int data[1000];
	int num;
};

struct S s = { {1,2,3,4},1000 };

void print1(struct S s)
{
	printf("%d\n", s.num);
}

void print2(struct S *ps)
{
	printf("%d\n", ps->num);
}

int main()
{
	print1(s);
	print2(&s); //传地址不会再拷贝一个同类型的结构体，占用大量的空间。以后结构体传参用结构体指针
	return 0;
}
*/

union Un
{
	char c;
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}