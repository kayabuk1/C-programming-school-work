#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void) {

	FILE* fp;

	fp = fopen("0919_8_1_fileopen&close.c", "r");
	if (fp == NULL) {
		printf("̧�ق�����ݏo���܂���\n");
		return 1;
	}
	printf("0919_8_1_fileopen&close.c����݂��܂���\n");

	fclose(fp);
	printf("0919_8_1_fileopen&close.c��۰�ނ��܂���\n");

	return 0;
}