/*
����ڷκ��� ���� n �� �Է¹޴´�. 
�׸��� ���� ���� ������ �����ϴ� �ִ� k ���� ����ؼ� ����϶�
2k(2�� k��) <= n*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	int product = 1;
	int cnt = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (product <= num) {
		product *= 2;
		cnt++;
	}

	printf("%d\n", cnt-1);
	return 0;
}