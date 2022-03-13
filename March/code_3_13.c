#include <stdio.h>
/*
int main()
{
	// 这里的p就是一个野指针
	// p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
	// int *p;
	// *p = 20; 非法访问内存
	return 0;
}*/
/*
#include <string.h>
int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}
*/
/*
#include <string.h>
int my_strlen(char *str)
{
	char *start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}*/

/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;//数组名
	// [] 是一个操作符  2和arr是两个操作数 支持交换律
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);
	//arr[2]编译器会转换为*(arr+2)进行运算
	//arr[2] <=> *(arr+2) <=> *(p+2) <=> *(2+p) <=> *(2+arr) <=> 2[arr]
	//2[arr] <=> *(2+arr)
	return 0;
}*/
/*
int main() 
{
	int a = 10;
	int *pa = &a;//pa是指针变量，一级指针
	//ppa就是一个二级指针变量
	int* *ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
	return 0;
}*/
/*
int main()
{
	int arr[10];//整型数组 - 存放整型的数组
	char ch[5];//字符数组 - 存放字符的数组
	//数组指针 - 存放指针的数组
	int *parr[5];//整型指针的数组
	char *pch[5];//字符型指针数组
	return 0;
}*/

