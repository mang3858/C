/*
����� �Է� �޾Ƽ� �׳� ����ϴ� ���α׷��� �ۼ��Ϸ� �Ѵ�. ����� ����� �Էµ� ������ �Է� �ް�
����� �ԷµǸ� �׶� ����Ѵ�. do while ���� ����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;

	do
	{
		printf("Enter a number<���>: ");
		scanf("%d", &num);

	} while (num < 0);
	printf("�Էµ� ����� %d\n", num);

	return 0;
}