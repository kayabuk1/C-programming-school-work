#include<stdio.h>

int main(void) {

	int a;
	int* p;

	a = 10;
	printf("aの値は%d、\t\taのアドレス&aは%p\n", a, &a);
	
	p = &a;
	printf("pの値は%p、pのアドレス&pは%p、*pの値は%d\n", p, &p, *p);

	*p = 5;
	printf("aの値は%d、\t\taのアドレス&aは%p\n", a, &a);

	return 0;
}