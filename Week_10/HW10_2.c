/*
�� ���� ���� �Է¹޾Ƽ� ū ���� ����ϴ� ���α׷��� �ۼ��϶�. ū���� ã�� ����ϴ� �κ��� �Լ�ȭ�϶�.

Enter three numbers: 5 10 7
The Biggest number is 10.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBiggest(int a, int b, int c); // �Լ��� ���� 
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);

	return 0;
}

void findNPrintBiggest(int a, int b, int c) // �Լ��� ���� 
{
	int big;

	if (a > b && a > c)
		big = a;
	else if (b > a && b > c)
		big = b;
	else
		big = c;

	printf("The Biggest number is %d\n", big);

	return;
}