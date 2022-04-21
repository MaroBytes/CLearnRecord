#include<stdio.h>
// 山脉数组的峰顶索引
int peakIndexInMountainArray(int *arr, int arrSize) {
    int left = 0;
    int right = arrSize - 1;
    int mid = 0;
    while (left < right) {
        mid = (left + right) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
            left = mid;
        }
        else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            right = mid;
        }
    }
    return mid;
}


int main()
{
    int arr[10] = { 3, 4, 5, 1 };
    int ret = peakIndexInMountainArray(arr, 4);
    printf("%d\n", ret);
    return 0;
}