#include<stdio.h>

int main(void) {

	char* name[3] = { "miyao","suzuki","satou" };
	int i;

	for (i = 0;i < 3;i++)
		printf("%s\n", name[i]);
	for (i = 0;i < 3;i++)
		printf("%p\n", name[i]);
	return 0;
}