/*
���� x, y �׸��� ���� 10���� �о
x���� ũ��, y ���� ���� ������ ������ �� ���� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, y;
	int nums;
	int sum = 0;
	int cnt = 0;
	int i;

	scanf("%d %d", &x, &y);

	for (i = 0; i < 10; i++) {
		scanf("%d", &nums);

		if (x < nums && y > nums) {
			sum += nums;
			cnt++;
		}
	}
	printf("%d\n%d\n", sum, cnt);

	return 0;
}