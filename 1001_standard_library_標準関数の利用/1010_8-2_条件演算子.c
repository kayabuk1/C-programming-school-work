#include<stdio.h>

int max(int a, int b);

int main(void) {
	printf("%d\n", max(10, 20));
	printf("%d\n", max(30, 20));
	return 0;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
/*
条件演算子(?:)※2つで特別な意味になる。また3つの要素を持つC言語で唯一の演算子なので、
「三項演算子(Ternary Operator」という別名も有名。if-else文と違いあくまで式として使う。
*/