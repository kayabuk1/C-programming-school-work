#include<stdio.h>
#include<ctype.h>

int main(void) {

	int i, j;
	int ch;//「ch」はcharacterの頭文字を取った変数。１文字を格納する時良く使う。

	printf("  | 0| 1| 2| 3| 4| 5| 6| 7|\n");
	printf("--+--+--+--+--+--+--+--+--+\n");
	for (i = 0;i < 16;i++) {
		printf("%2x|", i);
		for (j = 0;j < 8;j++) {
			ch = j * 16 + i;
			if (isalpha(ch) != 0)
				printf(" %2x ",ch);
			else
				printf("  ");
		}
		putchar('\n');
	}
	return 0;
}