#include <stdio.h>

extern int Add(int, int);
int main()
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}