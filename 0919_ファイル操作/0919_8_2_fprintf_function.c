#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void) {

	FILE* fp;
	int i, data;

	fp = fopen("0919_8_2_fprintf_function.csv", "w");
	if (fp == NULL) {
		printf("̧�ق�open�o���܂���\n");
		return 1;
	}
	for (i = 0;i < 5;i++) {
		printf("�ް�����͂��Ă�������\n");
		scanf("%d", &data);
		fprintf(fp, "%d\n", data);
	}
	fclose(fp);
	return 0;
}