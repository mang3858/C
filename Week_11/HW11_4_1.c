/*
num�� �Ҽ��̸� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� isPrime()�� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int isPrime(int num);
int main(void)
{
	int i, j;
	int n;

	printf("Enter a numbe<-1 for exit> ");
	scanf("%d", &n);

	while (n != -1) {
		if (isPrime(n))
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");

		printf("Enter a numbe<-1 for exit> ");
		scanf("%d", &n);
	}
}

int isPrime(int num)//num�� �Ҽ����θ� ��ȯ
{
	int i;

	for (i = 2; i < num; i++) 
		if (num % i == 0)
			return 0;
	return 1;
}