#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void) {

	FILE* fp;

	fp = fopen("0919_8_1_fileopen&close.c", "r");
	if (fp == NULL) {
		printf("Ì§²Ù‚ªµ°Ìßİo—ˆ‚Ü‚¹‚ñ\n");
		return 1;
	}
	printf("0919_8_1_fileopen&close.c‚ğµ°Ìßİ‚µ‚Ü‚µ‚½\n");

	fclose(fp);
	printf("0919_8_1_fileopen&close.c‚ğ¸Û°½Ş‚µ‚Ü‚µ‚½\n");

	return 0;
}