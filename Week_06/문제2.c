//���� n�� �Է¹ް� �� ���� n�� ����� ���� ����ϴ� ���α׷��� �ۼ��϶�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return 0;
}