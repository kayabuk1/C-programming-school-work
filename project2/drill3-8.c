#include<stdio.h>

int main(void) {
	int a, b, temp;
	a = 0;
	b = 0;
	temp = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("a�̒l��%d,b�̒l��%d\n", a, b);
	printf("a��b�̒l���������܂��B\n");

	temp = a;
	a = b;
	b = temp;

	printf("a�̒l��%d,b�̒l��%d\n", a, b);
	return 0;

}