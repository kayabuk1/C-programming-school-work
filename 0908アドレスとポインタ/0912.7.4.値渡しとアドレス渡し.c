#include<stdio.h>

void func1(int a, int* b);

int main(void) {
	int data1 = 10, data2 = 10;

	printf("data1�̏����l��%d,data2�̒l��%d,data2�Z��%p\n", data1, data2,&data2);
	func1(data1, &data2);//�����Ƃ��Ēl�n���ƃA�h���X�n���̔�r
	printf("data1�̍ŏI�l��%d,data2�̒l��%d\n", data1, data2);

	return 0;
}
void func1(int a,int* b) {
	printf("func1()�֐��ɓn���ꂽa�̒l��%d,b�̒l��%p\n", a, b);
	a = 100;
	*b = 100;
	printf("func1()�֐�����a�̒l�� % d, *b�̒l�� % d\n", a, *b);
}
/*
data1�̏����l��10,data2�̒l��10
func1()�֐��ɓn���ꂽa�̒l��10,b�̒l��000000B2E66FFC54
func1()�֐�����a�̒l��  100, *b�̒l��  100
data1�̍ŏI�l��10,data2�̒l��100
*/