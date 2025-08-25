#include<stdio.h>

int main(void) {
	int i, j,z;

	for (i = 0;i < 5;i++) {
		for (j = 0;j < 5;j++) {
			for (z = 0;z < 3;z++) {
				printf("%d", z);
			}
			printf("\n%d",j);
		}
		putchar('\n');
	}

	return 0;
}