/*
�Էµ� ������ ����� ��� ã�Ƴ��� ����ϴ� ���α׷��� �ۼ��Ϸ��Ѵ�.
(void �Լ� �߰�) �Ű������� �־��� ������ ����� ��� ã�Ƴ��� ����ϴ� void�Լ� print_divisor()�� �ۼ��Ͽ�����. �� �Լ��� �׽�Ʈ�ϱ� ���� main()�Լ��� �ۼ��Ͽ� ��ó�� ����ǰ� �϶�. 
print_divisor�� �Ű������� �����̰� � Ÿ���̾�� �ϴ°�?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void print_divisor(int n);
int main(void)
{
	int num;
	int i;

	printf("Enter a number: ");
	scanf("%d", &num);

	print_divisor(num);

	return 0;
}

void print_divisor(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d\n", i);

	return;
}