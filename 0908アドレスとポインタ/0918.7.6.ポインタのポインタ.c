#include<stdio.h>

int main(void) {

	int x, * p1, ** p2;
	x = 100;
	p1 = &x;
	p2 = &p1;

	printf("x�̒l��%d,*p1�̒l��%d,**p2�̒l��%d\n", x, *p1, **p2);
	printf("&x�̒l��%p,p1�̒l��%p,*p2�̒l��%p\n", &x, p1, *p2);
	printf("&p1�̒l�� %p, p2�̒l��%p\n", &p1, p2);
	printf("&p2�̒l��%p\n",&p2);

	return 0;
}