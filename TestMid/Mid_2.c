/*
������ �Է��ϸ� ������ ������ ���� ������ ���� ���ʽ� ������ �ش�.
100�� �̻�: 50% ���ʽ�
50�� �̻�: 25% ���ʽ�
10�� �̻�: 15% ���ʽ�
10�� �̸�: ���ʽ� ����
������ �Է� ���� �� ���ʽ� ������ ���� ������ �Ҽ��� 2�ڸ����� ����ϴ� ���α׷��� �ۼ��϶�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;

	scanf("%d", &score);

	if (score >= 100)
		printf("%.2f\n", (double)score + score * 0.5);
	else if (score >= 50)
		printf("%.2f\n", (double)score + score * 0.25);
	else if (score >= 10)
		printf("%.2f\n", (double)score + score * 0.15);
	else
		printf("%.2f\n", (double)score);

	return 0;
}