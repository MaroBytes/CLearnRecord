/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "Hello, World";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "Hello, World";
	memset(arr, 'x', 5);//�ַ��;������͵�ASCII��ֵ
	printf("%s", arr);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d", a);
	return 0;
}*/
/*
#include <stdio.h>
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
//int binary_search(int* a, int k, int s)
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	//������Ϊ������������ʱ���޷��ں������������鳤�ȣ���Ϊʵ�ʴ���������������Ԫ�صĵ�ַ
	//size_t length = strlen(a);
	//printf("%zd", length);
	
 	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��˾ͷ����ҵ�λ�õ��±�
	//�Ҳ����ͷ���-1
	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
	//��������ȥ��������Ԫ�صĵ�ַ
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
	size_t len = strlen("abc");
	printf("%zd\n", len);
	//��������ʽ����
	printf("%zd\n", strlen("abc"));
	return 0;
	
}
