/*
5 ���� ������ �Է¹޾Ƽ� ���� ���� ū ���� ã�� ����ϴ� ���α׷��� �ۼ��϶�.
for�� �̿�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, value;
	int i;
	int max = -1;
	int min = 999;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &value);

		if (max < value)
			max = value;
		if (min > value)
			min = value;
	}
	if (n == 0)
		printf("no data\n");
	else
		printf("%d\n%d\n", max, min);

	return 0;
}