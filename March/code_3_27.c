#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//√∞≈›≈≈–Ú
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
// }
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//int cmp_int(const void *p1, const void *p2)
//{
//	return *(int *)p1 - *(int *)p2;
//}
//
//void test_int()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	print_arr(arr, sz);
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_struct_by_age(const void *p1, const void *p2)
//{
//	return ((struct Stu *)p1)->age - ((struct Stu *)p2)->age;
//}
//
//int cmp_struct_by_name(const void *p1, const void *p2)
//{
//	return strcmp(((struct Stu *)p1)->name, ((struct Stu *)p2)->name);
//}
//
//void test_struct()
//{
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_by_name);
//}
//
//int main()
//{
//	test_struct();
//	return 0;
//
//}

int int_cmp(const void *p1, const void *p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void _swap(void *p1, void *p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
		for (i = 0; i < count - 1; i++)
		{
			for (j = 0; j < count - i - 1; j++)
			{
				if (cmp((char *)base + j * size, (char *)base + (j + 1) * size) > 0)
				{
					_swap((char *)base + j * size, (char *)base + (j + 1) * size, size);
				}
			}
		}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}