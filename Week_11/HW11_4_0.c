/*
�Է¹��� ����(2�̻�)�� �Ҽ�(prime number)������ �˻��Ͽ� "�Ҽ��̴�" Ȥ�� "�Ҽ��� �ƴ�
��"�� ����ϵ��� ���α׷��� �ۼ��϶�. 
�̶��� main �Լ��� ����Ѵ�. 
���࿹�� �Ʒ��� ����.

���࿹ 1
Enter a number: 8
�Ҽ��� �ƴմϴ�.

���࿹ 2
Enter a number: 13
�Ҽ��Դϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, j;
	int num;
	int prime;

	printf("Enter a number: ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}

	if (prime == 1)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");
}