/*
������ ���� �Է����� �޾Ƽ� 1���� �� �������� ���� ����ϴ� ���α׷��� �ۼ��϶�.
main�Լ��� �״�� �ΰ� ���ο� �Լ� printSum1toN�� ���Ǻκи� �߰��϶�.

Enter a number: 3
1~ 3�� ��: 6
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printSum1ToN(int a);
int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printSum1ToN(n);

	return 0;
}
void printSum1ToN(int a)
{
	int sum = 0;
	int i;

	for (i = 1; i <= a; i++)
		sum += i;
	printf("%d~%d�� ��: %d\n", 1, a, sum);

	return;
}