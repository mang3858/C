#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int n;
	int sum;

	i = 0;
	sum = 0;
	while (i < 5) {
		do
		{
			printf("0���� ū ���� �Է�<%d��°>: ", i + 1);
			scanf("%d", &n);
		} while (n < 1);
		
		sum += n;
		i++;
	}
	printf("�Էµ� ���� �� ��:%d\n", sum);

	return 0;
}