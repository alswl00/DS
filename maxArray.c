#include <stdio.h>
#define SIZE 100000000
int main(void) {
	/*
	int a[SIZE] = { 10, };
	//���� ���� ũ�⸦ 4MB�� �ٲٸ� ���డ��(�迭�� 1MB=> int���̶� 4MB�ʿ�)
	*/
	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[0] = 10;
	a[99999999] = 9;

	printf("%d\n", a[0]);
	printf("%d\n", a[99999999]);
	return 0;
}