/*
�Էµ� ������ ����� ��� ã�Ƴ��� ����ϴ� ���α׷��� �ۼ��Ϸ��Ѵ�.
(main�Լ��� ���)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int num;
	int i;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		if (num % i == 0)
			printf("%d\n", i);

	return 0;
}