#include<stdio.h>

void swap1(const int x, int const y);
void swap2(const int* x, int const* y);

int main(void) {
	int a = 10, b = 20;
	printf("Before swap1 a=%d b=%d\n", a, b);
	swap1(a, b);
	printf("After  swap1 a=%d b=%d\n", a, b);
	printf("Before swap2 a=%d b=%d\n", a, b);
	swap2(&a, &b);
	printf("After  swap2 a=%d b=%d\n", a, b);
	return 0;
}
void swap1(const int x, int const y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void swap2(const int* x, int const* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
/*
Before swap1 a=10 b=20
After  swap1 a=10 b=20
Before swap2 a=10 b=20
After  swap2 a=20 b=10
*/