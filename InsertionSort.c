#include <stdio.h>

int main() {
	int a[] = { 7,12,6,11,3,8,5,2 };
	int i,j,key, n = sizeof(a) / sizeof(int);
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key < a[j]) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = key;
	}
	printf("삽입 정렬 결과 : ");
	for (i = 0; i < n; i++) printf("%5d", a[i]);
	printf("\n");

	return 0;
}