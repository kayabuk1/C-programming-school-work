#include<stdio.h>

int main(void) {

	int x, * p1, ** p2;
	x = 100;
	p1 = &x;
	p2 = &p1;

	printf("xの値は%d,*p1の値は%d,**p2の値は%d\n", x, *p1, **p2);
	printf("&xの値は%p,p1の値は%p,*p2の値は%p\n", &x, p1, *p2);
	printf("&p1の値は %p, p2の値は%p\n", &p1, p2);
	printf("&p2の値は%p\n",&p2);

	return 0;
}