/*
N(<= 20)���� �л� ������ �о ������ ������׷����� ��Ÿ���� ���α׷��� �ۼ��϶�.

��Ʈ
- ��ø�� �ݺ����� ����Ͽ����Ѵ�.(���� ����� ��)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int score[20];
	int num;
	int i, j;

	printf("Enter the number of scores<<= 20>: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		printf("Eneter a score: ");
		scanf("%d", &score[i]);
	}

	for (i = 1; i <= num; i++) {
		printf("Student\t%d: ", i);
		for (j = 0; j < score[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}