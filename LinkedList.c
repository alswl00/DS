#include <stdio.h>
#include <stdlib.h>
int main(void) {
	typedef struct node {
		char data;
		struct node* link;
	}n;

	n *p;
	n *del;

	p = (n*)malloc(sizeof(n));
	p->data = 'A';
	p->link = (n*)malloc(sizeof(n));
	p->link->data = 'B';
	p->link->link = (n*)malloc(sizeof(n));
	p->link->link->data = 'C';
	p->link->link->link = NULL;
	
	del = p;
	while (p != NULL) {
		p = p->link;
		free(del);
		del = p;
	}
	return 0;
}