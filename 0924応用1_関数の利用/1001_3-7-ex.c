#include<stdio.h>
#include<stdlib.h>
#define DATASIZE 5

int main(void) {
	int i, j, k = 1;
	int* array[DATASIZE];

	for (i = 0;i < DATASIZE;i++) {
		array[i] = (int*)calloc(i + 1, sizeof(int));
		printf("array[%2d]=%p\n", i, array[i]);
	}
	for (i = 0;i < DATASIZE;i++) {
		for (j = 0;j < i + 1;j++) {
			*(array[i] + j) = k;
			k++;
		}
	}
	putchar('\n');

	for (i = 0;i < DATASIZE;i++) {
		printf("array[%2d]=", i);
		for (j = 0;j < i + 1;j++) {
			printf("%3d", *(array[i] + j));
		}
		putchar('\n');
	}
	return 0;
}