/*
� ���� n�� ¦���� 2�� ������ Ȧ���� 3�� ���� ���� 1�� ���Ѵ�. �̷��� �ؼ� ���� ������� ����
�� n���� ���� n��1�� �� ������ ���� �۾��� �ݺ��Ѵ�. ���� ��� n = 22�̸� ������ ���� ������ ���������.
 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

 �� �� 1�� ���� ������ ������� ���� ������ (n�� 1����) ����Ŭ ���̶� �Ѵ�. ���� ���
n=22�� ��쿡�� ����Ŭ ���̰� 16�̴� (15�ƴ�). Ư���� ���� �Ķ���ͷ� �޾� ���� ����
������ ����ϰ� ����Ŭ ���̸� ������ִ� �Լ��� �ۼ��Ͻÿ�. �Լ��� ������ ������ ����.
void get_cycle_number(int n);
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void cycleNb(int num);
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);
	cycleNb(n);

	return 0;
}

void cycleNb(int num)
{
	int cnt = 1;

	printf("%d ", num);
	do {
		if (num % 2 == 0) {
			num = num / 2;
			printf("%d ", num);
		}
		else {
			num = num * 3 + 1;
			printf("%d ", num);
		}
		cnt++;
	} while (num != 1);

	printf("\n���̴� %d\n", cnt);

	return;
}