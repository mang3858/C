/*
�Ʒ��� �������� ���� ���α׷��� sumMToN �Լ��� ����Ͽ� ���.

2 ���� 5 ������ ���� 14
3 ���� 7 ������ ���� 25
2 ���� 10 ������ ���� 54
*/
#include <stdio.h> 
int sumMToN(int m, int n); // �Լ��� ����
int main(void)
{
	printf("%d ���� %d ������ ���� %d\n", 2, 5, sumMToN(2, 5)); //�Լ��� ȣ��κ� �߰�
	printf("%d ���� %d ������ ���� %d\n", 3, 7, sumMToN(3, 7));
	printf("%d ���� %d ������ ���� %d\n", 2, 10, sumMToN(2, 10));
}
int sumMToN(int m, int n) // �Լ��� ����
{
	// �̰��� m ���� n ������ ���� ����Ͽ�
	// �� ���� return �ϴ� �Լ� ���Ǻκ��� �ڵ��Ѵ�
	int i;
	int sum = 0;

	for (i = m; i <= n; i++)
		sum += i;

	return sum;
}