#include<iostream>
#include<stdio.h>

int main(void) {
	using namespace std;
	int value;
	printf("10進数の値を入力してください。");
	scanf("%d", &value);
	cout << "16進数に変換した値は、" << hex<<value<< "です" << endl;
	return 0;
}