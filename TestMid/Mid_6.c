/*
���� a, b�� �о a�ȿ� b�� �����ϴ� ���
b�� b�� ���ڸ�����(b�տ� �ִ� ��� ����)�� ���� ����ϵ��� ���α׷��� �ۼ��϶�.
b�� �ش��ϴ� ���� �������� �ʴ� ���� 0�� ����Ѵ�.
���� �� a�� 12345�̰� b�� 234�̸�
1234�� ����Ѵ�. ��, 234�� �� ���ڸ������� �Բ� ����Ѵ�.
b�� a�ȿ� ���� �� ������ ���� ���� �޺κп� ������ b�� ã�� �� ���ڸ������ �Բ� ����Ѵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b;
	int i;
	int dividend, posNum;
	int tempB;

	scanf("%d", &a);
	scanf("%d", &b);

	//subNum�� �ڸ� �� posNum�� ���Ѵ�
	//10^posNum�� dividend�� �ִ´�

	i = 0;
	posNum = 0;
	dividend = 1;
	tempB = b;
	while (tempB > 0) {
		tempB /= 10;
		posNum++;

		if (i < posNum)
			dividend *= 10;
		i++;
	}

	while (a > 0) {
		if (a % dividend == b)
			break;
		a /= 10;
	}
	printf("%d\n", a);

	return 0;
}