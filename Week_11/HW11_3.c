/*
�ΰ��� ������ �Է¹޾Ƽ� ����� ����ؼ� ������ �����ؼ� ����ϴ� ���α׷��� �ۼ��϶�. 
80 �� �̻��̸� A, 50 �� �̻��̸� B, �� �ܿ��� F 

���࿹:
Enter a score: 50
Enter a score: 60
Grade is B!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int scoreReading(void);
char gradeDecision(int s1, int s2);
int main(void)
{
	int score1, score2;
	//scoreReading()�� �̿��ؼ� score1 �� score2 �� �Է¹޴´�. 
	score1 = scoreReading();
	score2 = scoreReading();

	printf("Grade is %c!\n", gradeDecision(score1, score2));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
}

char gradeDecision(int s1, int s2)
{
	int average;
	char grade;// �ݵ�� ���

	average = (s1 + s2) / 2;

	if (average >= 80)
		grade = 'A';
	else if (average >= 50)
		grade = 'B';
	else
		grade = 'F';

	return grade;
}