#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Differ(int *left, int *right, int *p, int n, int d, int sum)//����һ��������С��ֵ�ĺ���
{//*left���巵�ص����������±꣬*right���巵�ص����������±꣬*p�����������Ԫ�ص�ַ����Ҫ������b����ָ�룩��n���������С��d����������Ĵ�С��sum���崫���a�����Ԫ��֮��
    int and= 0;//������d��Ԫ�صĺ�
    int difference = 0xffff;//����ֵ����С��ֵ
    for (int i = 0; i < n - d + 1; i++)//�����������飬������������±�Ϊ��ʼ�㣬iΪ���±�
    {
        and = 0;
        for (int j = 0; j < d; j++)//����i��i+j����Χ�ڵ���������
        {
            and+= p[i + j];
        }
        if (difference > abs(and -sum))//������λ�ò�ֵС����һ�Σ����difference��left��right���ݸ���
            difference = abs(and -sum), *left = i, *right = i + d - 1;
    }
    return  difference;//���ر��ε��û�õ���С��ֵ
}
int main()
{
    int n = 0, m = 0, sum = 0;
    scanf("%d %d", &n, &m);//���a��b��������Ĵ�С
    int *a = (int *)malloc(n * sizeof(int));//����a��b��������
    int *b = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++)//��ȡa����Ԫ�أ�����������Ԫ��֮��sum
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    getchar();//���ջ��в����Ļس�
    for (int i = 0; i < m; i++)//��ȡb�����Ԫ��
        scanf("%d", &b[i]);
    int left = 0, right = 0;//������ӽ���������������±�
    int sum_left = 0, sum_right = 0;//����Differ�������÷��ص���ӽ���������������±�
    int difference = 0xffff, sum_difference = 0xffff;//����ֵ����С��ֵ��differenceΪ������С��sum_difference����Differ�����ķ���ֵ
    for (int i = 0; i < m; i++)//ѭ������Differ�����������������С��1~m�������������ò�ֵ��Сʱ�������±꣬��ֵ��ͬʱ��ѡ�������ʼ������
    {
        sum_difference = Differ(&sum_left, &sum_right, b, m, i + 1, sum);
        if ((sum_difference < difference) || ((sum_difference == difference) && (sum_left < left)))
            left = sum_left, right = sum_right, difference = sum_difference;
    }
    for (int i = left; i < (right + 1); i++)//�����±��ӡ����Ӧ��������
        printf("%d ", b[i]);
    free(a), free(b);//�ͷ�a��b������ڴ�
    a = NULL, b = NULL;
    return 0;
}