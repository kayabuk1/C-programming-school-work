#include<stdio.h>

int main(void) {
	int a[] = { 10,20 };
	int* p;

	p = a;
	printf("%p\n", p);//�z��̐擪�A�h���X
	printf("%p\n", p + 1);//�z���2�Ԗڂ̃A�h���X	
	printf("%d\n", *p);//�z��̐擪�̒l
	printf("%d\n", *(p + 1));//�z���2�Ԗڂ̒l
	printf("%d\n", *(p++));//�z��̐擪�̒l��\��������A�|�C���^�����ɐi�߂�
	printf("%d\n", *p);//�z���2�Ԗڂ̒l
	printf("%d\n", *(++p));//�|�C���^�����ɐi�߂���A�z���2�Ԗڂ̒l��\��
	printf("%d\n", *p++);//�z���2�Ԗڂ̒l��\��������A�|�C���^�����ɐi�߂�
	printf("%d\n", *p);//�|�C���^�͔z��͈̔͊O���w���Ă���̂ŕs��
	return 0;
}
/*
000000551E9FFBC8
000000551E9FFBCC
10
20
10
20
-858993460
-858993460
-858993460
*/