/*
 (while �� : ���ð� ���� �ݺ���)
 ���� ���� ������ �о �� ������ ����ϴ� ���α׷��� �ۼ��϶�. -1 �� ������ ���� ��Ÿ����
  
  version 1
  input�� �д´�;
  while (input �� ���ð��� �ƴѵ���)
  {
		�ݺ� �κ�;
		input�� �д´�;
  }
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	int total = 0;
	
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	while (score != -1) {
		total += score;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}
	printf("The total is %d.\n", total);

	return 0;
}
