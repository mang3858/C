/*
LAB10_3�� ���α׷��� �����Ͽ�
��ǥ�� �׷����� ����ִ� �κ��� �Լ��� �����ϰ�, �̸� main�Լ����� ȣ���ϵ���
���α׷����϶�. �־��� ���α׷� Ʋ�� ����϶�. �������� LAB10_3�� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printManyStars(int starNum);
int main(void)
{
	int t, m;
	int i;

	printf("Tom's score? ");
	scanf("%d", &t);
	printf("Mary's score? ");
	scanf("%d", &m);

	printf("----------Score Histogram----------\n");

	printf("Tom\t:");
	printManyStars(t);
	printf("Mary\t:");
	printManyStars(m);

	return 0;
}
void printManyStars(int starNum)
{
	int i;

	//starNum��ŭ �� ���� ���(for��)
		//(starNum)���;
	for (i = 0; i < starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}