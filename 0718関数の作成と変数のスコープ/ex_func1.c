#include<stdio.h>

void func_print(void);

int main(void) {

	printf("1���\n");
	func_print();
	printf("2���\n");
	func_print();

	return 0;
}

void func_print(void) {
	printf("func_printf�֐�����o��\n");
}