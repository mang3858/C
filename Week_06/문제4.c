/*
m(>=2)�� n(>=m)�� �Է����� �޾Ƽ�
m���� n������ ����
�Ҽ����� ���� ����ϴ� ���α׷��� �ۼ��϶�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, n;
	int i, j;
	int sum = 0;

	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++) {
		for (j = 2; j <= i; j++)
			if (i % j == 0)
				break;
		if (i == j)
			sum += i;
	}
	
	printf("%d\n", sum);
	return 0;
}