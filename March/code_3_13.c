#include <stdio.h>
/*
int main()
{
	// �����p����һ��Ұָ��
	// p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
	// int *p;
	// *p = 20; �Ƿ������ڴ�
	return 0;
}*/
/*
#include <string.h>
int my_strlen(char *str)
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
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}
*/
/*
#include <string.h>
int my_strlen(char *str)
{
	char *start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}*/

/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;//������
	// [] ��һ��������  2��arr������������ ֧�ֽ�����
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);
	//arr[2]��������ת��Ϊ*(arr+2)��������
	//arr[2] <=> *(arr+2) <=> *(p+2) <=> *(2+p) <=> *(2+arr) <=> 2[arr]
	//2[arr] <=> *(2+arr)
	return 0;
}*/
/*
int main() 
{
	int a = 10;
	int *pa = &a;//pa��ָ�������һ��ָ��
	//ppa����һ������ָ�����
	int* *ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
	return 0;
}*/
/*
int main()
{
	int arr[10];//�������� - ������͵�����
	char ch[5];//�ַ����� - ����ַ�������
	//����ָ�� - ���ָ�������
	int *parr[5];//����ָ�������
	char *pch[5];//�ַ���ָ������
	return 0;
}*/

