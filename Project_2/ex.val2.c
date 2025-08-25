#include <stdio.h>

int main(void)
{
	int a, b;
	double x = 1234.56789;

	printf("aの値は%d,bの値は%d\n", a, b);

	a = 10;
	b = a;
	printf("aの値は%d,bの値は%8d\n",a, b);
	printf("xの値は%8f\n", x);
	printf("xの値は%8.2f\n", x);

	a=~b * 10;
	b = b + 1;
	printf("aの値は%8d,bの値は%8\n", a, b);
	return 0;
}