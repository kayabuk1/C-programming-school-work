#include<stdio.h>


int main(void) {
	int a = 100, b = 200;
	const int* p; // p is a pointer to a constant integer
	p = &a;
	int* const q = &b; // q is a constant pointer to an integer
	const int* const r = &a; // r is a constant pointer to a constant integer

	p= &b;
	*p = 300; // Error: cannot modify the value pointed to by p
	q = &a; // Error: cannot change the address stored in q
	*q = 400; // OK: can modify the value pointed to by q
	r = &b; // Error: cannot change the address stored in r
	*r = 500; // Error: cannot modify the value pointed to by r

	return 0;
}
/*
const‚Í‚È‚º’l‚ğ’¼ÚCü‚Å‚«‚È‚¢‚Ì‚©H
*/