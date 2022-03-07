/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "Hello, World";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "Hello, World";
	memset(arr, 'x', 5);//字符型就是整型的ASCII码值
	printf("%s", arr);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d", a);
	return 0;
}*/
/*
#include <stdio.h>
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后：a=%d,b=%d\n", a, b);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
//int binary_search(int* a, int k, int s)
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	//数组作为参数传给函数时，无法在函数体内求数组长度，因为实际传过来的是数组首元素的地址
	//size_t length = strlen(a);
	//printf("%zd", length);
	
 	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到位置的下标
	//找不到就返回-1
	//数组arr传参，实际传递的不是数组本身
	//仅仅传过去了数组首元素的地址
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
	size_t len = strlen("abc");
	printf("%zd\n", len);
	//函数的链式访问
	printf("%zd\n", strlen("abc"));
	return 0;
	
}
