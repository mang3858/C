/*
�޸��� �Ҽ��� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//2 �� n ���� ��ȯ�ϴ� �Լ�
long long twoToThePower(int n)
{
	int i;
	long long pow = 1;

	for (i = 1; i <= n; i++)
		pow *= 2;
	return pow;
}

// x �� �Ҽ��̸� 1 �� �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int isPrime(long long x)
{
	long long i;

	for (i = 2; i <= x - 1; i++)
		if (x % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	long long i;
	long long num;
	long long value;

	printf("Enter a number:");
	scanf("%lld", &num);

	for (i = 2; i <= num; i++) {
		value = twoToThePower(i) - 1;
		if (isPrime(value) == 1)
			printf("(2 ^ %lld - 1) = %lld�� �޸��� �Ҽ��̴�\n", i, value);
	}
}