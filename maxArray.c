#include <stdio.h>
#define SIZE 100000000
int main(void) {
	/*
	int a[SIZE] = { 10, };
	//스택 예약 크기를 4MB로 바꾸면 실행가능(배열은 1MB=> int형이라 4MB필요)
	*/
	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[0] = 10;
	a[99999999] = 9;

	printf("%d\n", a[0]);
	printf("%d\n", a[99999999]);
	return 0;
}