#include <stdio.h>
void ShellSort(int a[], int n) {
	int i, j, t, key;
	for (t = n / 2; t >= 1; t /= 2) {
		for (i = t; i < n; i++) {
			key = a[i];
			for (j = i - t; j >= 0; j-=t) {
				if (key >= a[j]) break;
				a[j + t] = a[j];
			}
			a[j + t] = key;
		}
	}
	printf("쉘 정렬 결과 : ");
	for (i = 0; i < n; i++) printf("%5d", a[i]);
	printf("\n");
}
int main(void) {
	int a[] = { 7,8,27,1,7,17,30,11,13,5,9,59,3 };
	int n = sizeof(a) / sizeof(int);
	ShellSort(a, n);
}