/*
7 �ϰ��� ������ �о�鿩�� �Ʒ��� ����ϴ� ���α׷��� �ۼ��϶�.
	1)���� ū ���԰� �ش� ��
	2)����, ��� �׸��� ��պ��� ������ ���Ҵ� ���� �� ����

��Ʈ:
- 1)���� �ش� ���� ���ϱ����ؼ� ������ ����(bestIndex)�� �ʿ��ϴ�.
- 1)�� ���������� �����Ų �� 2)�� �߰��Ͽ� �����Ű��
- 2)���� ������ ����� ����� �� ������ for ���� �Ʒ��� ���� ����Ѵ�.
	for(i = 0; i < 7; i++)
		if (incomes[i] > average)
			printf(...);
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int incomes[7];
	int i;
	int max = -1;
	int bestIndex;
	int sum = 0;
	double ave;

	for (i = 0; i < 7; i++) {
		printf("Enter thr income of day %d: ", i+1);
		scanf("%d", &incomes[i]);
	}
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++) {
		if (max < incomes[i]) {
			max = incomes[i];
			bestIndex = i;
		}
	}
	printf("The best income is %d in day %d\n", max, bestIndex+1);
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++)
		sum += incomes[i];
	ave = (double)sum / 7;
	printf("The total is %d\n", sum);
	printf("The average is %.1f\n", ave);

	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
		if (incomes[i] > ave)
			printf("day %d: %d\n", i+1, incomes[i]);

	return 0;
}