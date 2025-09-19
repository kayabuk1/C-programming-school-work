#include<stdio.h>

#define IN_FILENAME "0919_8_4_fgetc&fputc_function.c"
#define OUT_FILENAME "0919_8_4_fgetc&fputc_function.dat"

int main(void) {
	FILE* infp, * outfp;
	int data;

	infp = fopen(IN_FILENAME, "r");
	outfp = fopen(OUT_FILENAME, "w");
	if (infp == NULL || outfp == NULL) {
		printf("Ãß≤ŸÇ™µ∞Ãﬂ›èoóàÇ‹ÇπÇÒ\n");
		return 1;
	}
	while ((data = fgetc(infp)) != EOF) {
		fputc(data, outfp);
	}
	printf("Ãß≤Ÿ%s\nÇ%sÇ…\n∫Àﬂ∞ºœº¿\n", IN_FILENAME, OUT_FILENAME);
	fclose(infp);
	fclose(outfp);
	return 0;
}