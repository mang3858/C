/*
���� n�� ���� unit�� �о
1���� n������ �� �� unit������ ���� ����ϴ� ���α׷��� �ۼ��Ϸ��Ѵ�.
�������� ���ڶ� ���� ������� �ʴ´�
n���� unit�� �׻� �۰ų� ���� ���� �Էµȴٰ� ��������.
���� ��� n�� 9�̰� unit�� 3���� ���� �Էµȴٸ�
6 15 24
�� ����Ѵ�. ������ ���� ����� ����̴�.
6 = 1 + 2 + 3
15 = 4 + 5 + 6
24 = 7 + 8 + 9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, unit;
	int i, j;
	int sum = 0;

	scanf("%d %d", &n, &unit);

	for (i = 1; i <= n; i++) {
		sum += i;
		if (i % unit == 0) {
			printf("%d ", sum);
			sum = 0;
		}
	}
	printf("\n");

	return 0;
}