#include<stdio.h>

int main(void) {

	FILE* fp;

	fp = fopen("ex_file1.c", "r");
	if (fp == NULL) {
		printf("Ì§²Ù‚ªµ°Ìßİo—ˆ‚Ü‚¹‚ñ\n");
		return 1;
	}
	printf("Ì§²Ùex_file.c‚ğµ°Ìßİ‚µ‚Ü‚µ‚½\n");

	fclose(fp);
	printf("Ì§²Ùex_file.c‚ğ¸Û°½Ş‚µ‚Ü‚µ‚½\n");

	return 0;
}