#include <stdio.h>
/*
#include <string.h>
//模拟实现strcpy
int main()
{
	char arr1[20] = "XXXXXXXXXXXXXX";
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}*/

//模拟实现strlen
#include <assert.h>
size_t my_strlen(const char *str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char *arr = "The TGU Coder";
	printf("%d", my_strlen(arr));
	return 0;
}