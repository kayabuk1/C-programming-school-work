#include<stdio.h>

void print_sum(int a, int b);

int main(void) {
	int a, b;
	printf("整数aの値：");
	scanf("%d", &a);
	printf("整数bの値：");
	scanf("%d", &b);

	print_sum(a, b);
	return 0;
}

void print_sum(int a, int b) {
	printf("足し算の結果は「%d」です！\n", a + b);
}