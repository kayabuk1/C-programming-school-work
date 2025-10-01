#include<stdio.h>
#include<stdlib.h>
#define DATASIZE 5

void output(char* str, int* p);

int main(void) {
	int i, * p1, * pmove;
	p1 = (int*)malloc(sizeof(int) * DATASIZE);
	output("malloc��o��", p1);
	pmove = p1;
	for (i = 0; i < DATASIZE; i++) {
		*pmove = i;
		pmove++;
	}
	output("�����o��", p1);
	free(p1);
	output("free��o��", p1);
	return 0;
}
void output(char* str, int* p) {
	int i, *pmove;
	pmove = p;
	printf("%-20s", str);
	for (i = 0; i < DATASIZE; i++) {
		printf("%8d", *pmove);
		pmove++;
	}
	putchar('\n');
}