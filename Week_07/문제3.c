/*
��(1 �̻��� ����)�� �Է¹޾� ���� �ڸ����� ����ϴ� ���α׷��� �ۼ��϶�.
��, �Է¹��� ���� 256 �̶�� 3 �� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int cnt = 0;

	scanf("%d", &n);

	while (n > 0) {
		n /= 10;
		cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}