#include<stdio.h>

int sum(int a, int b);
void print_result(int sum);

int main(void) {
	int a, b, sum;
	printf("����a�̒l�F");
	scanf("%d", &a);
	printf("����b�̒l�F");
	scanf("%d", &b);

	print_result(sum_result(a,b));
	return 0;
}

int sum_result(int a, int b) {
	return a + b;
}
void print_result(int result_sum) {
	printf("�����Z�̌��ʂ́u%d�v�ł��I\n", result_sum);
}