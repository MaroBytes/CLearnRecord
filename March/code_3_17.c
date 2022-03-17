#include <stdio.h>
/*
int Numerof1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int main()
{
	int n = 1;
	printf("%d", Numerof1(n));
	return 0;
}*/
/*
int Numberof1(int n)
{
	int count = 0;
	int i = 0;
	for ( i = 0; i < 32; i++)
	{
		if (((n>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 4;
	printf("%d", Numberof1(n));
	return 0;
}*/
/*
int Numberof1(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
		// n=15
		// 1111 - n
		// 1110 - n-1
		// 1110 - n
		// 1101 - n-1
		// 1100 - n
		// 1011 - n-1
		// 1000 - n
		// 0111 - n-1
		// 0000 - n
		count++;
	}
	return count;
}

int main()
{
	int n = -1;
	printf("%d", Numberof1(n));
	return 0;
}*/

//写一个代码判断一个数字是不是2的n次方
//2的n次方的数字，其中只有一个1
/*
int Numberof1(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 2;
	if (Numberof1(n) == 1)
	{
		printf("%d 是2的n次方", n);
	}
	else
	{
		printf("%d 不是2的n次方", n);
	}
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}
