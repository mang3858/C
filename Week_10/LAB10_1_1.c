/*
***
****
*****
���� �������� ���� ���α׷��� printManyStars(...) �Լ��� ����Ͽ� ����.
*/
#include <stdio.h> 
void printManyStars(int num); // �Լ��� ����
int main(void)
{
	printManyStars(3);
	printManyStars(4);
	printManyStars(5);
	// �Լ��� ȣ��κ� �߰�

	return 0;
}
void printManyStars(int num) // �Լ��� ����, num ��ŭ *�� ����Ѵ�
{
	int i;

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");

	return;
}