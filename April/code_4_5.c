#include <stdio.h>

//int main()
//{
//	/*This is a interesting program*/
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int *p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	int n;
	scanf("%d", &n);
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}