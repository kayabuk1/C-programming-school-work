#include<stdio.h>
#include<stdlib.h>

struct Listdata {
	int value;
	struct Listdata* next;
};
typedef struct Listdata LIST;

void listprint(LIST* root);
LIST* listadd(LIST* pos, int data);
LIST* listmake(LIST* pos, int* data, int number);

int main(void) {
	int i, number, datasize, data[] = { 31,41,59,26,53,58,97,93,23,84,62,64 };
	LIST* root = NULL;
	root = listmake(root, data, sizeof(data) / sizeof(int));
	printf(\nLIST END : );
	listprint(root);
	putchar('\n');
	return 0;
}
LIST* listmake(LIST* root, int* data, int number) {
	int i, j;
	LIST* pos, * before;
	for (int i = 0; i < number; i++,data++) {
		printf("%4d:data%4d:", i + 1, *data);
		listprint(root);
		putchar('\n');
	}
	for (pos = root, before = NULL;pos != NULL && *data > pos->value;
		before = pos, pos = pos->next);
		if (before == NULL) {
			root = listadd(root, *data);
		}
		else {
			before->next = listadd(pos, *data);
		}
		return root;
}
void listprint(LIST* root) {
	if (root != NULL) {
		printf("%4d", root->value);
		listprint(root->next);
	}
}
LIST* listadd(LIST* pos, int data) {
	LIST* p;
	p = (LIST*)malloc(sizeof(LIST));
	p->value = data;
	p->next = pos;
	return p;
}