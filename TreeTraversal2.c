#include <stdio.h>
int n;
void preOrder(char a[], int nodeNum) {
	if (nodeNum < n&&a[nodeNum] != NULL) {
		printf("%c  ", a[nodeNum]);
		preOrder(a, nodeNum * 2);
		preOrder(a, nodeNum * 2 + 1);
	}
}
void inOrder(char a[], int nodeNum) {
	if (nodeNum < n&&a[nodeNum] != NULL) {
		inOrder(a, nodeNum * 2);
		printf("%c  ", a[nodeNum]);
		inOrder(a, nodeNum * 2 + 1);
	}
}
void postOrder(char a[], int nodeNum) {
	if (nodeNum < n&&a[nodeNum] != NULL) {
		postOrder(a, nodeNum * 2);
		postOrder(a, nodeNum * 2 + 1);
		printf("%c  ", a[nodeNum]);
	}
}
int main(void) {
	char a[] = { NULL,'A','B','C','D','E',NULL,'F',NULL,NULL,'G',NULL,NULL,NULL,'H','I',NULL,NULL,NULL,NULL,NULL,'j' };
	n = sizeof(a) / sizeof(char);
	preOrder(a, 1);
	printf("\n");
	inOrder(a, 1);
	printf("\n");
	postOrder(a, 1);
	printf("\n");
	return 0;
}