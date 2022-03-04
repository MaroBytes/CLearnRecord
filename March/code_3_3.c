/*
int main()
{
	int ch = 0;
	while ((ch=getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;

}
*/

/*二分查找简单示例
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//在arr这个有序数组中查找k的值
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了！>:%d", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到了！");
	}
	return 0;
}
*/

/*
#include <Windows.h>
int main()
{
	char arr1[] = "Welcome to TGU!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(char) - 2;//此处求出包括'\0'在内的元素个数，-2算最后一个字符下标

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休眠1000ms
		system("cls");//清屏
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}
*/

/*猜数字游戏
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*********************\n");
	printf("*******1.Play********\n");
	printf("*******0.Exit********\n");
	printf("*********************\n");
}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数生成

	int ret = rand()%100 + 1;//0-100的随机数
	int guess = 0;
	//2.猜数字
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你！猜对了！\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//用时间戳作随机数种子
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
*/