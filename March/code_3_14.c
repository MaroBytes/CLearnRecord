#include <stdio.h>

void my_strcpy(char *dest, char *src)
{
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "Hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}