#include <stdio.h>

/*
int main()
{
	// 预定义符号
	// 文件路径
	printf("%s\n", __FILE__);
	// 日期
	printf("%s\n", __DATE__);
	// 时间
	printf("%s\n", __TIME__);
	// 所在函数名
	printf("%s\n", __FUNCTION__);
	// 所在行号
	printf("%d\n", __LINE__);
	return 0;
}
*/
/*
int main()
{
	int i = 0;
	FILE *pf = fopen("log.txt", "a+");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fprintf(pf, "%s %s %s %s %d", __FILE__, __DATE__, __TIME__, __FUNCTION__, __LINE__);
	fclose(pf);
	pf = NULL;
	return 0;
}
*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
	INVALID, // 0
	VALID	 // 1
};

// State 记录的是my_atoi返回的值是合法转化的值，还是非法的状态
enum State state = INVALID;

int my_atoi(const char *s)
{
	int flag = 0;
	long long n = 0;
	// to judge null point
	// assert(s != NULL);
	if (s == NULL)
	{
		return 0;
	}
	if (*s == '\0')
	{
		return 0;
	}
	// 跳过空白字符
	while (isspace(*s))
	{
		s++;
	}
	if (*s == '+')
	{
		flag = 1;
		s++;
	}
	else if (*s == '-')
	{
		flag = -1;
		s++;
	}
	//处理数字字符的转换
	while (isdigit(*s))
	{
		n = n * 10 + (*s - '0') * flag;
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		state = VALID;
		return (int)n;
	}
	else
	{
		// 非数字字符
		return (int)n;
	}
}

int main()
{
	// 1.空指针
	// 2.空字符串
	// 3.遇到非数字字符
	// 4.超出范围
	const char *p = "-1234";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("正常转换：%d\n", ret);
	}
	else
	{
		printf("非法转换：%d\n", ret);
	}
	return 0;
}