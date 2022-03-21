/*
#include <stdio.h>
int main()
{
	const char *ps = "hello bit";
	printf("%s\n", ps);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char *str3 = "hello bit.";
	const char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int *arr[3] = { a,b,c };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
			//printf("%d", *(arr[i]+j));
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int a = 10;
	int *pa = &a;
	char ch = 'w';
	char *pc = &ch;

	int arr[10] = { 1,2,3,4,5 };
	int(*parr)[10] = &arr;//取出的是数组的地址
	//parr 就是一个数组指针 - 其中存放的是数组的地址
	//*parr就是arr表示整个数组或者数组首元素地址
	printf("%d", *parr));
	return 0;
}
*/
/*
#include <stdio.h>

void print2(int(*a)[5], int row, int col)
{
	
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print2()
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *pend = arr + sz - 1;	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	while (p<=pend)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}
*/

//#include <stdio.h>
//#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


