/*
�Է¹��� ������ 3 �� ����� 5 �� ����� ����ϴ� ���α׷��� �ۼ��϶�.
�䱸����: �������ڸ� ����Ѵ�. while ��, if �� ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int i;

	scanf("%d", &n);

	i = 1;
	while (i <= n) {
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return 0;
}