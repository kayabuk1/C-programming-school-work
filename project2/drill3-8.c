#include<stdio.h>

int main(void) {
	int a, b, temp;
	a = 0;
	b = 0;
	temp = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("aの値は%d,bの値は%d\n", a, b);
	printf("aとbの値を交換します。\n");

	temp = a;
	a = b;
	b = temp;

	printf("aの値は%d,bの値は%d\n", a, b);
	return 0;

}