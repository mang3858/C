/*
�л����� �Է� ���� ��, �� ����ŭ ������ �Է� �޾� ������ �����
����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�. �л����� �ִ� 40 ���̶�� ��������. �л����� 0 �ʰ� 40 ���϶�� ��������.
(�̷� ���� �ִ��� ������ �迭�� ũ�⸦ ��´�. 40 �� �̸��� �л��� ó���� ���� �迭�� �޺κ���
������ �ʴ´�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scores[40];
	int i, n;
	int total = 0;
	int ave;
	
	printf("Enter the number of scores(0 < number <= 40):");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}

	printf("------------------------\n");

	for (i = 0; i < n; i++)
		total += scores[i];
	ave = total / n;
		
	printf("Total: %d\n", total);
	printf("Average: %d\n", ave);

	for (i = 0; i < n; i++)
		printf("%d ", scores[i]);
	printf("\n");
	
	return 0;
}