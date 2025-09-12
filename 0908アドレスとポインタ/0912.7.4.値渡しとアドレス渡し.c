#include<stdio.h>

void func1(int a, int* b);

int main(void) {
	int data1 = 10, data2 = 10;

	printf("data1の初期値は%d,data2の値は%d,data2住所%p\n", data1, data2,&data2);
	func1(data1, &data2);//引数として値渡しとアドレス渡しの比較
	printf("data1の最終値は%d,data2の値は%d\n", data1, data2);

	return 0;
}
void func1(int a,int* b) {
	printf("func1()関数に渡されたaの値は%d,bの値は%p\n", a, b);
	a = 100;
	*b = 100;
	printf("func1()関数内のaの値は % d, *bの値は % d\n", a, *b);
}
/*
data1の初期値は10,data2の値は10
func1()関数に渡されたaの値は10,bの値は000000B2E66FFC54
func1()関数内のaの値は  100, *bの値は  100
data1の最終値は10,data2の値は100
*/