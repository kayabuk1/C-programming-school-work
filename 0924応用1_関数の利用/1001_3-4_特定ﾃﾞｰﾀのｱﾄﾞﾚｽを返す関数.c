#include<stdio.h>

int* input(int x);

int main(void) {
	int* data1, *data2;

	data1 = input(100);
	printf("data1=%d\n", *data1);//�ԐڎQ�Ƃ�data1�̎w���l100��\��

	data2 = input(200);
	printf("data2=%d\n", *data2);
	printf("data1=%d\n", *data1);//�֐��Ăяo�����data1�̒l�͕ێ�����Ă���

	return 0;
}
int* input(int x) {
	static int data;
	data = x;
	return &data;
}
/*
* �ustatic�v��t���Đ錾����ƁA�ʏ��۰�ي֐��ƈقȂ�A
* ��۸��т̊J�n���Ɂu��x�����v����A��۸��т��I������܂�
* �����ƃ������ɂ��̒l�͎c�葱����B
* 
�ق��ɂ悭�g���C���q�ɂ͂ǂ�Ȃ��̂����邩�H
�ق���const�̗l�ɁA�������C��������̂ƁA�E�����C��������̂����邩�H


�N�ɂǂ�������玩�͂���۸��т�������悤�ɂȂ邩���������A
���������ɃR�[�h�������Ă݂邱�Ƃ����߂�ꂽ���A
�Ȃɂ�����A�����|���肪�Ȃ��ƁA�S�������o���Ȃ������B
�����ŁA�N�ɃT���v���R�[�h����A�����쐬���ĖႦ�Ȃ�����
�l�����̂�����ǁA���̍l���͕׋��@�Ƃ��ėǂ����������H�ǂ����낤���H
*/