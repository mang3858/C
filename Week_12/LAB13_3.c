/*
�� 10 ���� ������ �Է� �޾Ƽ�, Ȧ���� ¦���� ���� ��� ����ϴ� ���α׷��� �ۼ��غ���. �ϴ� Ȧ������ ����ϰ� ����, ¦���� ����ϵ��� ����.

��Ʈ: ���ڸ� �о ¦���ΰ� Ȧ���ΰ��� ���� ���� ¦���迭, Ȧ���迭�� �ִ´�. ¦���迭�� ���� �ε���(��:
evenIndex), Ȧ���迭�� ���� �ε���(��: oddIndex)�� �ʿ��ϴ�. �̵� �ε����� 0 ���� �ʱ�ȭ��Ű�� ���� ��������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 10 
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		// num�� ¦���̸� even�� Ȧ���̸� odd�� �ִ´�.���� �ε����� ����Ѵ�.
		if (num % 2 != 0) 
			odd[oddIndex++] = num;
		else 
			even[evenIndex++] = num;
	}
	//A) 
	printf("\n Ȧ�� ���:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	//B) 
	printf("\n ¦�� ���:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}