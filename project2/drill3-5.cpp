#include<iostream>
#include<stdio.h>

int main(void) {
	using namespace std;
	int value;
	printf("10�i���̒l����͂��Ă��������B");
	scanf("%d", &value);
	cout << "16�i���ɕϊ������l�́A" << hex<<value<< "�ł�" << endl;
	return 0;
}