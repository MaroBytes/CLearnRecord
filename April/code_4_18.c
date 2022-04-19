#include <stdio.h>

/*
int main()
{
	// Ԥ�������
	// �ļ�·��
	printf("%s\n", __FILE__);
	// ����
	printf("%s\n", __DATE__);
	// ʱ��
	printf("%s\n", __TIME__);
	// ���ں�����
	printf("%s\n", __FUNCTION__);
	// �����к�
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

// State ��¼����my_atoi���ص�ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
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
	// �����հ��ַ�
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
	//���������ַ���ת��
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
		// �������ַ�
		return (int)n;
	}
}

int main()
{
	// 1.��ָ��
	// 2.���ַ���
	// 3.�����������ַ�
	// 4.������Χ
	const char *p = "-1234";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("����ת����%d\n", ret);
	}
	else
	{
		printf("�Ƿ�ת����%d\n", ret);
	}
	return 0;
}