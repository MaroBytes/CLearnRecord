﻿/*简单冒泡排序
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p", &arr);
	return 0;
}*/
