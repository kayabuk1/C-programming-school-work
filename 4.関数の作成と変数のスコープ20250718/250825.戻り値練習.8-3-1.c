#include<stdio.h>

void print_sum(int a, int b);

int main(void) {
	int a, b;
	printf("����a�̒l�F");
	scanf("%d", &a);
	printf("����b�̒l�F");
	scanf("%d", &b);

	print_sum(a, b);
	return 0;
}

void print_sum(int a, int b) {
	printf("�����Z�̌��ʂ́u%d�v�ł��I\n", a + b);
}