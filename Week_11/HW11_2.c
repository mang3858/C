/*
LAB11_2���� ������ pow(int a,int b) function�� �̿��ؼ� 5�� 0�¿��� 10�±��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��ϼ���.
���ǻ��� : LAB11_2���� ������ pow�Լ��� �״�� ����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int pow(int a, int b);
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("5 ^ %d == %d\n", i, pow(5, i));

	return 0;
}

int pow(int a, int b)
{
	int i;
	int power = 1;

	for (i = 0; i < b; i++)
		power *= a;

	return power;
}