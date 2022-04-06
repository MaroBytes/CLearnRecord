#include <stdio.h>
#include <string.h>
#include <assert.h>
/*
void string_left_rotate(char *str, int k)
{
	int i = 0;
	int n = strlen(str);
	for (i = 0; i < k; i++)
	{
		char tmp = *str;
		for (int j = 0; j < n-1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + n - 1) = tmp;
	}
}
*/

/*
* 三步反转法
void reverse(char *left, char *right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void string_left_rotate(char *str, int k)
{
	assert(str);
	int n = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + n - 1);
	reverse(str, str + n - 1);
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 2;
	string_left_rotate(arr, k);
	printf("%s\n", arr);
	return 0;
}*/

