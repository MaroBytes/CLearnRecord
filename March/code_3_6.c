/*
*进制转换十进制程序
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i = 0, sum = 0;
	size_t length = 0;
	char bin[21] = { '\0' };
	if (scanf("%s", bin) == 0)
		return 0;
	length = strlen(bin);
	char* p = &bin[(int)length - 1];
	for (i = 0; i < length; ++i, --p)
	{
		sum += ((*p) - '0') * (int)pow(2, i);
	}
	printf("%d", sum);
	return 0;

}
*/