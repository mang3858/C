/*
 10 ���� �Ҽ��� ����϶�. do while ������ Ǯ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	int prime;
	
	i = 1;
	prime = 2;
	do {
		j = 2;
		while (j <= prime) {
			if (prime % j == 0) 
				break;
			j++;
		}
		if (prime == j) {
			printf("%d��° �Ҽ��� %d\n", i, prime);
			i++;
		}
		prime++;

	} while (i <= 10);

	return 0;
}