#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	struct student {
		char hakbun[5];
		char name[11];
		int age;
	};
	struct student a[10];
	int i;
	for (i = 0; i < 3; i++) {
		printf("�й� : ");
		scanf("%s",a[i].hakbun);
		printf("���� : ");
		scanf("%s",a[i].name);
		printf("���� : ");
		scanf_s("%d", &a[i].age);
	}
	for (int i = 0; i < 3; i++)
		printf("�й� : %s, ���� : %s, ���� : %d\n", a[i].hakbun, a[i].name, a[i].age);
	return 0;
}