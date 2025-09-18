#include<stdio.h>

int main(void) {
	
	int id[] = { 21,22,23,24,25 };
	int* ip[5];
	int i;

	for (i = 0;i < 5;i++) {
		ip[i] = &id[i];
	}
	for (i = 0;i < 5;i++) {
		printf("%d: ip[%d]=%pA*ip[%d]=*ip[%d]\n", i, i, ip[i], i, *ip[i]);
	}
	return 0;
}