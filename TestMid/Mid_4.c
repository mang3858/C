/*
���� n �� m �� �о� n ���� ũ�ų� ���� �Ҽ��� ���� �ͺ��� m �� ���Ͽ� ���� ���� ����ϴ� ���α׷���
�ۼ��϶�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, m;
	int sum = 0;
	int cnt = 0;
	int prime;
	int i;

	scanf("%d", &n);
	scanf("%d", &m);

	while (cnt < m) {
		prime = 1;

		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			sum += n;
			cnt++;
		}
		n++;
	}
	printf("%d\n", sum);
}
	