/*
������ �� �� m�� n�� �Է����� �޾Ƽ� m���� n������ ���� ����ϴ�
���α׷��� �ۼ��϶�. main�Լ��� �״�� �ΰ� ���ο� �Լ� printSumMToN�� ������
���� �κи� �߰��϶�.(m�� n���� �۰ų� ���ٰ� �����Ѵ�)

Enter two numbers: 3 5
3~ 5�� ��: 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printSumMToN(int a, int b);//printSumMToN�� ���� �߰�
int main()
{
	int m, n;

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);
	printSumMToN(m, n);

	return 0;
}
// printSumMToN�� ���� �߰�
void printSumMToN(int a, int b)
{
	int i;
	int sum = 0;

	for (i = a; i <= b; i++)
		sum += i;
	printf("%d~%d�� ��: %d\n", a, b, sum);

	return;
}