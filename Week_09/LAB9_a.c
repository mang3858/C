/*
 0 ���� 99 ������ ���ڸ� ���Ƿ� �߻����Ѽ� ���������� ���弼��
 �� ���������� ���ؼ� ����ڰ� ���� �Է��ϸ�, ���� �¾Ҵ��� Ʋ�ȴ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��ϼ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main(void) {
	int n1, n2;
	int answer;

	srand(time(NULL));
	n1 = rand() % 100;
	n2 = rand() % 100;

	printf("%d + %d = ", n1, n2);
	scanf("%d", &answer);

	if (answer == n1 + n2)
		printf("Your answer is right.\n");
	else {
		printf("Your answer is wrong.\n");
		printf("%d is the right answer.\n", n1 + n2);
	}

	return 0;
}