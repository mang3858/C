/*
print5Chars �Լ��� ����Ͽ� �Ʒ�ó�� ����ǵ��� ���α׷��϶� .
 *****
 +++++
 11111
*/
// �Ű������� ������ void �Լ��� ����� ���α׷� ����
#include <stdio.h> 
void print5Chars(char ch); // �Լ��� ����
int main(void)
{
	print5Chars('*'); // �Լ��� ȣ��
	print5Chars('+');
	print5Chars('1');

	return 0;
}
void print5Chars(char ch) // �Լ��� ����: �־��� ���ڸ� 5 ������ �Լ��� ����
{
	int i;

	for (i = 0; i < 5; i++)
		printf("%c", ch);
	printf("\n");

	return;
}