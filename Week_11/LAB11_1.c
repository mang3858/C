/*
�� �������� �� ���ϱ�(�Ű������� ������ value returning �Լ��� ����)
�Ʒ��� �������� ���� ���α׷��� sum1ToN �Լ��� ����Ͽ� ���.

1 ���� 5 ������ ���� 15
1 ���� 7 ������ ���� 28
1 ���� 10 ������ ���� 55
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int sum1ToN(int n); // �Լ��� ����
int main(void)
{
	printf("1���� %d ������ ���� %d\n", 5, sum1ToN(5));
	printf("1���� %d ������ ���� %d\n", 7, sum1ToN(7));
	printf("1���� %d ������ ���� %d\n", 10, sum1ToN(10));
}
int sum1ToN(int n) // �Լ��� ����
{
	// 1 ���� n ������ ���� ����ؼ� �� ���� return �Ѵ�.
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;

	return sum;
}