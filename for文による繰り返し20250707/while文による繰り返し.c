#include<stdio.h>

int main(void) {
	int ch;

	ch = getchar();
	while (ch != EOF) {
		putchar(ch);
		ch = getchar();
	}
	
	printf("EOF�̒l��%d�ł��B\n", EOF);
	return 0;
}