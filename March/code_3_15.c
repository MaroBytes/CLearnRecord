#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Differ(int *left, int *right, int *p, int n, int d, int sum)//定义一个返回最小差值的函数
{//*left定义返回的子数组左下标，*right定义返回的子数组右下标，*p定义数组的首元素地址（所要操作的b数组指针），n定义数组大小，d定义子数组的大小，sum定义传入的a数组的元素之和
    int and= 0;//计数，d个元素的和
    int difference = 0xffff;//返回值，最小差值
    for (int i = 0; i < n - d + 1; i++)//遍历整个数组，以子数组的左下标为起始点，i为左下标
    {
        and = 0;
        for (int j = 0; j < d; j++)//将（i，i+j）范围内的数相加求和
        {
            and+= p[i + j];
        }
        if (difference > abs(and -sum))//如果本次获得差值小于上一次，则把difference，left，right数据更新
            difference = abs(and -sum), *left = i, *right = i + d - 1;
    }
    return  difference;//返回本次调用获得的最小差值
}
int main()
{
    int n = 0, m = 0, sum = 0;
    scanf("%d %d", &n, &m);//获得a，b两个数组的大小
    int *a = (int *)malloc(n * sizeof(int));//定义a，b两个数组
    int *b = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++)//获取a数组元素，并计算所有元素之和sum
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    getchar();//吸收换行产生的回车
    for (int i = 0; i < m; i++)//获取b数组的元素
        scanf("%d", &b[i]);
    int left = 0, right = 0;//定义最接近的子数组的左右下标
    int sum_left = 0, sum_right = 0;//定义Differ函数调用返回的最接近的子数组的左右下标
    int difference = 0xffff, sum_difference = 0xffff;//返回值，最小差值，difference为所有最小，sum_difference接收Differ函数的返回值
    for (int i = 0; i < m; i++)//循环调用Differ函数，遍历子数组大小从1~m的所有情况，获得差值最小时的左右下标，差值相同时，选择最靠近起始点的情况
    {
        sum_difference = Differ(&sum_left, &sum_right, b, m, i + 1, sum);
        if ((sum_difference < difference) || ((sum_difference == difference) && (sum_left < left)))
            left = sum_left, right = sum_right, difference = sum_difference;
    }
    for (int i = left; i < (right + 1); i++)//根据下标打印出对应的子数组
        printf("%d ", b[i]);
    free(a), free(b);//释放a，b数组的内存
    a = NULL, b = NULL;
    return 0;
}