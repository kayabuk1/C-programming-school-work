#include<stdio.h>

int main(void) {

	char ch = 'g';
	char* p;	//�Z�^�̕ϐ��̃A�h���X�́A�Z*�^�̃|�C���^�Ɋi�[����B

	/*
	�R���p�C���́A�|�C���^�u�^�v��񂩂�m�肽��2�̏��
	�@*p�Œ��g���Q�Ƃ��鎞�A���������牽�o�C�g�̃f�[�^��Ǎ������f����B
	�A���̃f�[�^�ւ̋���(p++)�Ȃǂ̎��A�h���X�����o�C�g���炷�����f����B
	*/

	p = &ch;

	printf("ch=%c,\nchadd=%p,\np=%p,\n*p=%c", ch, &ch, p, *p);
}