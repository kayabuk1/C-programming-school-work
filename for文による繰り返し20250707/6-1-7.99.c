#include<stdio.h>

int main(void) {

	int columnNum, gyouNum = 0;

	for (gyouNum = 1;gyouNum <= 9;gyouNum++) {
		for (columnNum = 1;columnNum <= 9;columnNum++) {
			printf("%3d,", gyouNum * columnNum);
		}
		putchar('\n');
	}
	return 0;
}