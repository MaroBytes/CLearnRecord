#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
* 模拟实现strlen字符串函数
int my_strlen(const char *str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
*/

/*
* 模拟实现strcat字符串函数
void my_strcat(char *dest, const char *src)
{
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++);
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
*/

int my_strcmp(const char *s1, const char *s2)
{
	
	while (*s1++ == *s2++);
	if (*s1 > *s2)
	{
		return 1;
	}
	else if (*s1 < *s2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char *p1 = "abcd";
	char *p2 = "abcd";
	int ret = my_strcmp(p1, p2);
	printf("%d", ret);
	return 0;
}