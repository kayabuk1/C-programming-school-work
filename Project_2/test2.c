#include<stdio.h>

int main(void) {
	int a = 0;
	a = 100;

	printf("a2\n");
	a = 200;

	printf("%d\n", a);

	printf("%d\n", a + sum());

	return(0);
}

int sum(void) {
	int i;
	i = 100 + 1000;
	return i;
}