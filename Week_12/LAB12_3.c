/*
7 �ϰ��� ������ �о�鿩�� ���� ū ������ ����ϴ� ���α׷��� �ۼ��϶�.
���ǻ���: �Ʒ� ������ ���α׷� Ʋó�� for ���� 3 �� ����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int incomes[7];
	int i;
	int max = -1;

	for (i = 0; i < 7; i++) {
		printf("Enter thr income: ");
		scanf("%d", &incomes[i]);
	}
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++) 
		if (max < incomes[i])
			max = incomes[i];
	printf("The best income is %d\n", max);

	printf("Incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
	printf("\n");

	return 0;
}