
/*
(�Ű������� ������ void �Լ��� ����) 
�ΰ��� ���� �Է¹޾Ƽ� ū ���� ����ϴ� ���α׷��� �ۼ��϶�. ū���� ã�� ����ϴ� �κ��� �Լ�ȭ�϶�.

����:
�Ʒ��� �־��� ���α׷��� ���� main �Լ������� num1, num2 ��
findNPrintBig �Լ������� n1, n2 �� ����Ͽ���. �̶� ���� �̸��� ����Ͽ���(��,
main, findNPrintBig ��ο��� n1, n2 �� ���) �����ϳ� �ǽ� �� �ƴ϶� ����������
�ٸ� �̸��� ����ϴ� ���� �����Ѵ�.

���࿹:
Enter two numbers: 5 10
Big number is 10.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBig(int n1, int n2); // �Լ��� ����
int main(void)
{
	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	//num1, num2 �� �д´�;
	
	findNPrintBig(num1, num2);
	//findNPrintBig ȣ��;

	return 0;
}

void findNPrintBig(int n1, int n2) // �� ���� ū ���� ã�� ����Ѵ�.
{
	int big;

	if (n1 > n2)
		big = n1;
	else
		big = n2;
	printf("Big number is %d.\n", big);

	return;
}