#include<stdio.h>

int main(void) {

	int id[] = { 21,22,23,24,25 };
	int* ip;
	int i;

	ip = id;
	for (i = 0;i < 5;i++) {
		printf("%d: ip+%d=%p  *(ip+%d)=%d\n", i, i, &ip[i], i, ip[i]);
	}
	return 0;
	/*
	*ip[i]では正しく値を参照できないのはなぜか？間接参照という動きにはならないのか？
	ポインタ配列を宣言していないのに配列としてつかえたのはなぜか？*/
}