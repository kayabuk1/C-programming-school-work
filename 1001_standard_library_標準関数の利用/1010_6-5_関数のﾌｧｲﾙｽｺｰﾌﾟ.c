#include<stdio.h>

void func1(void);
extern void func2(void);

int main(void) {
	func1();
	func2();
	return 0;
}
void func1(void) {
	printf("func1\n");
}
/*#include<stdio.h>

static void func3(void);

void func2(void) {
	printf("func2\n");
	func3();
}
static void func3(void) {
	printf("func3\n");
}
*/