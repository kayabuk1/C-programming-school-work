#include<stdio.h>

int main(void) {
	int a = 5;
	int* b;
	int** c;

	b = &a;
	c = &b;

	printf("%-4s=%8d\n%-4s=%8p\n\n", "  a", a, " &a", &a);
	printf("%-4s=%8d\n%-4s=%8p\n%-4s=%8p\n\n"
			," *b",*b ,"  b", b, " &b", &b);
	printf("%-4s=%8d\n%-4s=%8p\n%-4s=%8p\n%-4s-%8p",
			"**c", **c, " *c", *c,"  c",c," &c", & c);
	return 0;
}
/*
  a =       5
 &a =000000FD2051FA44

 *b =       5
  b =000000FD2051FA44
 &b =000000FD2051FA68

**c =       5
 *c =000000FD2051FA44
  c =000000FD2051FA68
 &c -000000FD2051FA88
*/