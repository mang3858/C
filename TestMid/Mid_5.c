/*
���� num�� �а� �װ��� 3�� �Ͽ� <���ο� ����>�� �����.
0���� 9������ ���� digit�� �о
<���ο� ����>�ȿ� �� digit�� ������ ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num, digit, newNum;
	int i;
	int cnt = 0;

	scanf("%d", &num);
	scanf("%d", &digit);

	newNum = num * 3;

	while (newNum > 0) {
		newNum /= 10;
		if (newNum % 10 == digit)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}