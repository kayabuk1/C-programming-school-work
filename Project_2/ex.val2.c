#include <stdio.h>

int main(void)
{
	int a, b;
	double x = 1234.56789;

	printf("a�̒l��%d,b�̒l��%d\n", a, b);

	a = 10;
	b = a;
	printf("a�̒l��%d,b�̒l��%8d\n",a, b);
	printf("x�̒l��%8f\n", x);
	printf("x�̒l��%8.2f\n", x);

	a=~b * 10;
	b = b + 1;
	printf("a�̒l��%8d,b�̒l��%8\n", a, b);
	return 0;
}