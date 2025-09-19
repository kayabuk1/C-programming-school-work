#include<stdio.h>

#define LOOP_MAX 5

int main(void) {
	int i;

	for (i = 0;i < LOOP_MAX;i++)
		printf("i‚Ì’l‚Í%d\n", i);

	printf("LOOP_MAX\n");

	return 0;
}