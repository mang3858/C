/*
key���� �Ϸ��� ���� ���ԵǾ��ִ°�(���°)�� �Ǻ��ϴ� �����̴�.
���� ���� n�� key���� �Է¹��� ��
n���� ���� �Է¹޾Ƽ�
n���� ���� key���� ���(���°)�� ���ԵǾ��ִ°��� ����ϴ� ���α׷��� �ۼ��϶�.
key�� ���� �� ���ԵǾ� ���� ��� �տ� ��Ÿ�� ���� ��ġ�� ����Ѵ�.
key�� �Ϸ��� �� �ȿ� ���� ��� not found�� ����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, key, num;
	int i;
	int found;

	scanf("%d", &n);
	scanf("%d", &key);

	found = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &num);

		if (num == key) {
			found = 1;
			break;
		}
	}

	if (found)//found == 1
		printf("%d\n", i+1);//cnt�� i�� �Ȱ��� ���� �����ϱ� ���ʿ� 
	else
		printf("not found\n");

	return 0;
}