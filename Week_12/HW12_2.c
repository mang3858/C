/*
- � ��(100 ������ ����� ����)�� �о �� ����ŭ�� ����(0 ���� 99 ������)�� �����Ͽ� ��հ�
  �߻���Ų ������ ����ϴ� ���α׷��� �ۼ��϶�.
- ��½� �Ʒ��� ������ó�� 5 ���� �����͸� ���ٿ�,
  �׸��� �� ���ڴ� 5 ���� ���ڿ����� ����(%5d ���)�ϰ� ������ �ٸ��� �ǵ��� �϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int data[100];
	int num;
	int i;
	int sum = 0;
	srand(time(NULL));

	printf("Enter the number of random numbers<<= 100>: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		data[i] = rand() % 100;
		sum += data[i];
	}
	printf("������ ����� %d\n", sum / num);
	
	printf("�߰ߵ� ������\n");
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");

	return 0;
}