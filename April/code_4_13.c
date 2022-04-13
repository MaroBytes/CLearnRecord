#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>

/*
int main()
{
	//���ļ�ʧ�ܣ�����NULL
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//errno��C���Զ����һ��ȫ�ֵĴ��������
		//printf("%s\n", strerror(errno));
		//perror���򵥣��������ڴ�����Ϣǰ���Զ������ݣ�����Ҫ������errno����ֱ�Ӵ�ӡ
		perror("fopen");
		return 1;
	}
	//���ļ���Ҫ�ر��ļ������ļ�ָ��ָ���
	fclose(pf);
	pf = NULL;
	return 0;
}
*/

/*
int main()
{
	char ch = '2';
	char ch1 = 'A';
	//���Ϊ�������ַ�������0������������ַ����ط�0
	//int ret = isdigit(ch);
	int ret = islower(ch1);
	printf("%d\n", ret);
	return 0;
}
*/

/*
void *my_memcpy(void *dest, const void *src, size_t num)
{
	void *ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char *)dest = *(char *)src;
		dest = (char *)dest + 1;
		src = (char *)src + 1;
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	return 0;

}
*/

//memcpy����Ӧ�ÿ������ص����ڴ棬��VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ�
//memmove�������Դ����ڴ��ص������
/*
void *my_memmove(void *dest, const void *src, size_t num)
{
	void *ret = dest;
	if (dest < src)
	{
		//��ǰ��󿽱�
		while (num--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		//�Ӻ���ǰ����
		while (num--)
		{
			*((char *)dest + num) = *((char *)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//my_memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1+2, 20);
	return 0;
}
*/

//memcmp - �ڴ�ȽϺ���

/*
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ�
	return 0;
}
*/

/*
struct Book
{
	char name[20];
	int price;
	char id[12];
} b4, b5, b6;//ȫ�ֱ���

int main()
{
	//b1 b2 b4 �Ǿֲ�����
	struct Book b1;
	struct Book b2;
	struct Book b3;
	return 0;
}

//����ȫ���� - �����ṹ����� �������������ṹ����Ȼ��Ա��ͬ�����ڱ����������������ǲ�ͬ�Ľṹ������
struct
{
	char c;
	int i;
	char ch;
	double d;
} s;

//�����ṹ��ָ��
struct
{
	char c;
	int i;
	char ch;
	double d;
} *ps;
*/

//�ṹ��ʵ��������
/*
typedef struct Node
{
	int date;
	struct Node *ptr;
} Node;
*/

/*
struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}
*/

/*
*�ٶȱ����⣺дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵�� 
*���죺 offsetof���ʵ��
#include <stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};

int main() 
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}
*/

//�ṹ�崫��
/*
struct S
{
	int data[1000];
	int num;
};

struct S s = { {1,2,3,4},1000 };

void print1(struct S s)
{
	printf("%d\n", s.num);
}

void print2(struct S *ps)
{
	printf("%d\n", ps->num);
}

int main()
{
	print1(s);
	print2(&s); //����ַ�����ٿ���һ��ͬ���͵Ľṹ�壬ռ�ô����Ŀռ䡣�Ժ�ṹ�崫���ýṹ��ָ��
	return 0;
}
*/

union Un
{
	char c;
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}