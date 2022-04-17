#include <stdio.h>

//X-型图案
/*
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i == j) printf("*");
				else if (i + j == n - 1) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
*/

//公务员面试
/*
int main()
{
	int score = 0;
	int sum = 0;
	int i = 0;
	int max = 0;
	int min = 100;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &score);
		sum += score;
		if (score > max)
			max = score;
		if (score < min)
			min = score;
	}
	printf("%.2f\n", (sum - max - min) / 5.0);
	return 0;
}
*/

//有序序列插入一个数
/*
int main()
{
	int arr[51] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = 0;
	scanf("%d", &m);
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	if (i < 0)
		arr[0] = m;
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/ 

struct S
{
	char arr[10];
	int age;
	float f;
};

int main()
{
	struct S s = { "hello",20,5.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	// sprintf 把一个格式化的数据转换成字符串
	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
	printf("%s\n", buf);
	// 把buf字符串中还原出一个结构体数据
	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
	return 0;
}