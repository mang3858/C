/*
10 ���� �Ҽ��� ����϶�. 
while ������ Ǯ���. 
*/
#include <stdio.h>
int main(void) {
	int i, j;
	int prime;

	i = 1;
	prime = 2;
	while (i <= 10) {
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
		prime++;//�� ���� �Ҽ�
	}

	return 0;
}