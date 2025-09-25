#include<stdio.h>
/*「ﾋﾞｯﾄﾌｨｰﾙﾄﾞ」
構造体を定義する時に各メンバが使用するﾒﾓﾘ量をビット単位で指定出来る機能*/

void print_binary(unsigned int num, int num_bits);

struct bitset {
	unsigned int day	: 5;
	unsigned int month	: 4;
	unsigned int year	: 12;
	unsigned int any	: 11;
};
int main(void) {
	struct bitset data;

	data.year = 2014;
	data.month = 4;
	data.day = 33;
	data.any = 0;
	printf("%d/%d/%d\n", data.year, data.month, data.day);
	printf("%x\n%x\n", data,*(unsigned int*)&data);
	print_binary((unsigned int*)&data, 32);
	return 0;
}

void print_binary(unsigned int num, int num_bits) {
	int i;
	for (i = num_bits - 1;i >= 0;i--) {
		if ((num >> i) & 1) {
			putchar('1');
		}
		else {
			putchar('0');
		}
	}
}
/*
2014/4/5
fbc85
*/