/*
* ����6: ���ڳ� ����(���̵� �߻�) (25��)
���� a, b�� �о a�ȿ� b�� �����ϴ� ��� 
b�� b�� ���ڸ�����(b�տ� �ִ� ��� ����)�� ���� ����ϵ��� ���α׷��� �ۼ��϶�. 
b�� �ش��ϴ� ���� �������� �ʴ� ���� 0�� ����Ѵ�. 

���� �� a�� 12345�̰� b�� 234�̸� 
1234�� ����Ѵ�. ��, 234�� �� ���ڸ������� �Բ� ����Ѵ�. 
b�� a�ȿ� ���� �� ������ ���� ���� �޺κп� ������ b�� ã�� �� ���ڸ������ �Բ� ����Ѵ�. 

���࿹1 
12345678 <- �Է�: a 
45  �Է�: <- b 
12345 <- ���: 45�� �� ���ڸ������� �Բ� ���

�����ϰ� �Լ�ȭ�Ͽ� �ٽ� ���α׷��϶�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//num�� �ڸ����� ��ȯ
int calDigits(int num)
{
	int subNumTemp;
	int posNum = 0;

	subNumTemp = num;
	while (subNumTemp != 0) {
		posNum++;
		subNumTemp /= 10;
	}
	return posNum;
}

//10^(num�� �ڸ���)�� ��ȯ
int calTenToDigits(int num)//num =45
{
	int dividend = 1;

	for (int i = 0; i < calDigits(num); i++)
		dividend *= 10;
	return dividend;
}

int extractNum(int num, int subNum, int dividend)
{
	while (num != 0) {
		if (num % dividend == subNum)
			break;
		num /= 10;
	}
	return num;
}

int main(void)
{
	int num, subNum;
	int dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);

	dividend = calTenToDigits(subNum);////10^(subNum�� �ڸ���)�� ���Ѵ�,

	printf("%d\n", extractNum(num, subNum, dividend));
}
