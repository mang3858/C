/*
 �Ǻ���ġ ���� ���� ����ϴ� ���α׷���
�ۼ��϶�. �Ʒ����� main�Լ��� �״�� �ΰ� �Լ� printFibo�� �����ϸ� �ȴ�. printFibo(n)�� (n + 1)��° ���� ����ϴ� �Լ��� �ǹ��Ѵ�.

���࿹:
��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����): 7
1 1 2 3 5 8 13
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);
	printf("\n");

	return 0;
}
void printFibo(int n) // (n + 1)��° ���� ���
{
	int j, a = 1, b = 1, c = 0;

	if (n == 0 || n == 1)
		printf("1 ");
	else
	{
		for (j = 1; j < n; j++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d ", c);
	}

	return;
}