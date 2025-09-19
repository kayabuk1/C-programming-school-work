#include<stdio.h>

int main(void) {
	int ch;

	ch = getchar();
	while (ch != EOF) {
		putchar(ch);
		ch = getchar();
	}
	
	printf("EOF‚Ì’l‚Í%d‚Å‚·B\n", EOF);
	return 0;
}