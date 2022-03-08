#include <stdio.h>
/*
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%u ", num % 10);
}
int main()
{
	unsigned int num = 0;
	if (scanf("%u", &num) == EOF)
		return 0;
	print(num);
	return 0;
}
*/
/*
int my_strlen(char* str)
{
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
	char arr[] = "Hello, TGU!";
	printf("%d", my_strlen(arr));
	return 0;
}
*/
/*
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//用++str会改变str
	else
		return 0;
}
int main()
{
	char arr[] = "Hello, TGU!";
	printf("%d", my_strlen(arr));
	return 0;
}*/
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
void fun(char* s)
{
	int left = 0;
	int right = my_strlen(s) - 1;
	while (left <= right)
	{
		char temp = *(s + left);//s[left]
		*(s + left) = *(s + right);
		*(s + right) = temp;
		left++;
		right--;
	}
}
int main()
{
	char s[] = "Hello, World!";
	fun(s);
	printf("%s\n", s);
	return 0;
}*/

int my_strlen(char* str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	//判断条件
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}