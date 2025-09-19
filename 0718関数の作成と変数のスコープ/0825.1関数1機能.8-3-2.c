#include<stdio.h>

int sum(int a, int b);
void print_result(int sum);

int main(void) {
	int a, b, sum;
	printf("整数aの値：");
	scanf("%d", &a);
	printf("整数bの値：");
	scanf("%d", &b);

	print_result(sum_result(a,b));
	return 0;
}

int sum_result(int a, int b) {
	return a + b;
}
void print_result(int result_sum) {
	printf("足し算の結果は「%d」です！\n", result_sum);
}