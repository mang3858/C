/*
� ���� �о �� ���� ��� 20 ��(�� ������ �����Ͽ�)�� ������ �迭 data �� �־ �̸�
����ϴ� ���α׷��� �ۼ��϶�.
- data �� ���� �ִ� �κа� ����ϴ� �κ��� ���� �ٸ� for ������ ó���϶�.
- ���� ��½� �Ʒ��� ������ó�� 5 ���� �����͸� ���ٿ�, �׸��� �� ���ڴ� 5 ���� ���ڿ�����
�����ϰ�(%5d ���) ������ �ٸ��� �ǵ��� �϶�.

��Ʈ: 5 ���� �����͸� ����� �� ���� �ٲٴ� ���� ���ؼ� i �� ���� 4, 9, 14, 19 �� �� �ٹٲ��� ���� �����϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int data[20];
	int i;
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 0; i < 20; i++)
		data[i] = (i * num) + num;

	for (i = 0; i < 20; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4) 
			printf("\n");
	}

	return 0;
}