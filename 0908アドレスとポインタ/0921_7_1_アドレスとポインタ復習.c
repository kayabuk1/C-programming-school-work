#include<stdio.h>

int main(void) {

	int a;
	int* p;

	a = 10;
	printf("a�̒l��%d�A\t\ta�̃A�h���X&a��%p\n", a, &a);
	
	p = &a;
	printf("p�̒l��%p�Ap�̃A�h���X&p��%p�A*p�̒l��%d\n", p, &p, *p);

	*p = 5;
	printf("a�̒l��%d�A\t\ta�̃A�h���X&a��%p\n", a, &a);

	return 0;
}