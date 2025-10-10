#include<stdio.h>

static void func3(void);

void func2(void) {
	printf("func2\n");
	func3();
}
static void func3(void) {
	printf("func3\n");
}