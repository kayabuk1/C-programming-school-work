#include<stdio.h>

void func1(int a, int*);
/*�������ߐ錾�Ɗ֐���`�ł̉��������͈قȂ��Ă�OK�B�ǐ��Ƃ��Ắ~
* �������ߐ錾�͂����܂ź��ׂ߲ɑ΂���\���B
*���ׂ߲͌^����������Ηǂ��̂ŉ����������̏ȗ��\�B
*/

int main(void) {
	
	int data1 = 10, data2 = 10;

	printf("data1�̏����l��%d�Adata2�̏����l��%d\n", data1, data2);
	
	func1(data1, &data2);//�l�n���Ʊ��ڽ�n���̔�r

	printf("data1�̍ŏI�l��%d�Adata2�̍ŏI�l��%d\n", data1, data2);

	return 0;
}
void func1(int data1, int* data2) {
	printf("func1()�ɓn���ꂽdata1�̒l��%d�Adata2�̒l��%p\n", 
		data1,data2);
	data1= 100;
	*data2= 100;
	printf("func1()��data1�̒l��%d�Adata2�̒l��%d\n", data1, *data2);
}
/*&���Z�q�̕t�������ڽ���́A���̕ϐ����{�̏Z�����̂��̂Ȃ̂ŁA
* �֐��̏������I����Ă��Ăяo����(main�֐�)�̕ύX�͂��̂܂܂ɂȂ�B
*/