#include<stdio.h>
#include"1010_6-2_�����۾��̉��p.h"
#include<string.h>
struct item datainput(int number, char* str, int price);
int main(void) {
	struct item data1;
	data1 = datainput(1, "�t���b�s�[�f�B�X�N", 100);
			/*�ʂ�.ç�قŒ�`���ꂽ�֐����Ăяo���ɂ́A
			 main.c�����̊֐��̎d�l���ł���A
			�������ߐ錾��m���Ă���K�v������B
			ͯ��̧�ٕ��Ƃ����Ăя������ł悢�̂ł��傤���H
			int main()�̏�ɋL�q����Ă���̂ŁA��������۾���
			�ʂ̿��̧�ق�ǂݍ���ŁAmain�̏�ɕʿ��̧�قɏ����ꂽ
			��`��}�����Ă����C���[�W�ŗǂ��ł��傤���H
			�������Ⴄ�B�����۾��͊m����include���ꂽ��̧�ق̒��g
			*/
	printf("%-2d,%-20s,%5d\n", 
		data1.number, data1.name, data1.price);
	return 0;
}
/*
#include<stdio.h>
#include<string.h>
#include"1010_6-2_�����۾��̉��p.h"
struct item datainput(int number,char *str,int price){
	struct item data;
	data.number = number;
	strcpy(data.name, str);
	data.price = price;
	return data;
* 
#pragma once
#ifndef __ITEM
#define __ITEM
struct item {
	int number;
	char name[20];
	int price;
};
#endif // !__ITEM
*/