/*
���� �����ϰ� �ִ� �ݾ����� �޴��� �ֹ��Ϸ� �Ѵ�. 
3 ���� �޴� �� �ֹ��� �����̸� ���� 500 ��, ��Ű�� 700 ��, �ݶ�� 400 ���̴�. �ܵ��� �ϳ��� ������ ������ �޴��� ��� �ϳ��� �����ؾ� �Ѵ�. ������ ��츦 ��� ���̶�. 
(�ݺ��� �ּ�ȭ�ϴ� ����� �����϶�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int money;
	int bread, cookie, coke;

	printf("Enter �ݾ�: ");
	scanf("%d", &money);
	//money = money - (bread + cookie + coke);

	for (bread = 1; bread <= money / 500; bread++)
		for (cookie = 1; cookie <= money / 700; cookie++)
			for (coke = 1; coke <= money / 400; coke++)
				if (500 * bread + 700 * cookie + 400 * coke == money)
					printf("��: %d ���: %d �ݶ�: %d\n", bread, cookie, coke);

	return 0;	
}