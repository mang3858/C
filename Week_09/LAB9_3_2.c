/*
 (while �� : ���ð� ���� �ݺ���)
 ���� ���� ������ �о �� ������ ����ϴ� ���α׷��� �ۼ��϶�. -1 �� ������ ���� ��Ÿ����

  version 2
  while (1)
  {
		input �� �д´�;
		if (input �� ���ð��̸�)
			break;
		�ݺ� �κ�;
  }
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	int total = 0;

	while (1) {
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);

		if (score == -1)
			break;
		total += score;
	}
	printf("The total is %d.\n", total);

	return 0;
}
