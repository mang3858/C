/*
�� ���� �迭, arrayA, arrayB, arrayC �Ʒ��� �ڵ忡��ó�� ����, �ʱ�ȭ�� ��
1) arrayA�� ���� arrayB�� �����϶�. �� arrayA�� arrayB�� ���� ���� ���� �ȴ�.
2) arrayA�� ���� �������� arrayC�� �����϶�. �� arrayC�� 1, 4, 3, 2, 1�� ���� �ȴ�.
3) arrayA, arrayB, arrayC�� ����Ѵ�.
4) arrayA�� arrayB�� ���� ���� �Ǻ��϶�.
5) arrayA�� arrayC�� ���� ���� �Ǻ��϶�.
*/
#define SIZE 5 
#include <stdio.h> 
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;
	//1)2) 
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - i - 1] = arrayA[i];
	}
	//3) 
	printf("ArrayA:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayA[i]);
	printf("\n");
	printf("ArrayB:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayB[i]);
	printf("\n");
	printf("ArrayC:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayC[i]);
	printf("\n");
	//4) 
	same = 1; // �ϴ� �� �迭�� ���ٰ� ���� ������ ��
	 // �ΰ��� �迭�� ������ �ٸ����� üũ�Ѵ�. �ٸ��� same�� 0���� �����Ѵ�. 
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayB[i]) {
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");
	//5) 4)�� �����ϰ� �ۼ��Ѵ�. 
	same = 1;
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayC[i]) {
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA�� arrayC�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");
}