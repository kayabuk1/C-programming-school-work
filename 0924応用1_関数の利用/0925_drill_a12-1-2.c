#include<stdio.h>
#include<string.h>

struct Book
{
	char			title[64];
	char			author[64];
	unsigned int	price;
	unsigned int	page;
};

int main(void) {

	struct Book a;
	strcpy(a.title , "Computer Organization and Design");
	strcpy(a.author, "patterson");
	a.price = 4620;
	a.page = 404;

	printf("�^�C�g���F%s\t���Җ��F%s\n���i�F%d\n�y�[�W���F%d",
		a.title, a.author, a.price, a.page);
}
/*
�f�[�^�^Book��a�Ƃ����Ƃ����Ă�ꂽ�A
���̉Ƃɂ�Book�Ƃ������z�����ɑ�����
title[]�Ƃ��������Aauthor[]�Ƃ��������A
price�Ƃ��������Apage�Ƃ�������������B
C����ł͔z�񖼂͌����擪�v�f�̃A�h���X��\���B
�����ĕ�������擪�v�f�̃A�h���X������舵���ď�������B
("������"�ƋL�q���Ă���َ߲���"������"�z�u������؂̐擪�������ڽ
�ɒu������Ă��܂��B)
�Ȃ̂Ŕz�񖼁��h������h�̓A�h���X�����A�h���X����
�㏑�����鑀��ƃR���p�C���͑����Ă��܂��G���[���N�����Ă��܂��B
�z��łȂ��ϐ��͂����̔��Ȃ̂ł��̂܂܁��Œl�������B
*/

