/*
0 ���� 99 ������ ���� 10 ���� ������ �迭 data �� �־ �̸� ����ϴ� ���α׷��� �ۼ��϶�
�߻��� ������ ����� ���Ͽ� ����ϴ� �κ��� �߰��϶�.
��Ʈ �� �䱸����: �� 3 ���� for ���� ���(���� �߻�, ���հ��, �迭������)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main(void){	int i;	int data[10];	int total = 0;	int ave;	srand(time(NULL));	for (i = 0; i < 10; i++)		data[i] = rand() % 100;	for (i = 0; i < 10; i++) 		total += data[i];	ave = total / 10;	printf("����� %d\n", ave);	for (i = 0; i < 10; i++)		printf("%d ", data[i]);	printf("\n");	return 0;}