#include<stdio.h>

int main(void) {

	FILE* fp;

	fp = fopen("ex_file1.c", "r");
	if (fp == NULL) {
		printf("̧�ق�����ݏo���܂���\n");
		return 1;
	}
	printf("̧��ex_file.c����݂��܂���\n");

	fclose(fp);
	printf("̧��ex_file.c��۰�ނ��܂���\n");

	return 0;
}