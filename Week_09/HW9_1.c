/*
(rand(), do while, switch) �Ʒ��� ���� ������(���� ������ �߻���Ű�Ƿ� ������ ����
�ٸ� ���̴�)�� ������ LAB9_2 �� �����Ͽ� ���α׷��϶�. ��, random �ϰ� �����װ� ������(+, -, *,
/)�� �߻����Ѽ� ������ �����Ѵ�. ������ Your answer is right ��� �޽�����, Ʋ���� Your
answer is wrong �̶�� �޽����� �Բ� ������ �ش�. ���� ���� Ǯ�̸� ���Ҷ����� �ݺ��ϰ� �Ѵ�.
(��Ʈ 1: �����ڸ� random �ϰ� �߻���Ű������ ���� op �� �Ʒ��� ���� ���� �����Ѵ�.

op = rand() % 4;

�׸��� op �� 0, 1, 2, 3 �� �� ���� ����, ����, ����, ������(���� ������ �������)�� �Ҵ��Ͽ�
����� �����Ѵ�. switch(op)�� �̿��ϸ� �ȴ�.)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main(void) {
	int n1, n2;
	int answer;
	int result;
	char ch;
	int op;

	srand(time(NULL));

	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
		op = rand() % 4;

		switch (op) {
		case 0:
			op = '*';
			result = n1 * n2;
			break;
		case 1:
			op = '/';
			result = n1 / n2;
			break;
		case 2:
			op = '+';
			result = n1 + n2;
			break;
		case 3:
			op = '-';
			result = n1 - n2;
			break;
		}

		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &answer);

		if (answer == result)
			printf("Your answer is right.\n");
		else {
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		while (getchar() != '\n');

		printf("Do you want to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}