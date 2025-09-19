#include<stdio.h>

int main(void) {

	FILE* fp;
	int data;

	fp = fopen("0919_8_2_fprintf_function.csv", "r");
	if (fp == NULL) {
		printf("̧�ق�opne�o���܂���\n");
		return 1;
	}
	while (fscanf(fp, "%d", &data) != EOF)
		printf("%d\n", data);

	fclose(fp);
	return 0;
}
/*
���uFILE�^�v̧�ق���۸��ѓ��ň����ׂ̈�A�̏���
�܂Ƃ߂��\���́BC����̕W���K�i�ł��̒�`��stdio.h��
������Ă���B
���Ȃ�,FILE,EOF,NULL�̗l�ɑ啶���ŏ����̂�
����炪�ʏ�̕ϐ���֐��ł͂Ȃ��Aϸۂ�^��`��
�Ă΂����ʂȎd�g�݂Œ�`����Ă���Ƃ̂��ƁB
�ENULL��stdio.h�̒���#define NULL 0��
#define NULL ((void*)0)�̗l�ɒ�`����Ă���B

�EEOF��#define EOF (-1)�̗l�ɒ�`����Ă���B
(-1)�Ȃ̂͒ʏ�̕����R�[�h�Ƃ͏d�����Ȃ��l�ɂ���ׁB
������Ƃ͈Ⴂ�A̧�ق��Ǘ�����OS��̧�ق����޲Ă��邩��
���ɒm���Ă���ׁA\0���ÖٓI�ɒǉ�����邱�Ƃ͖����B
�uEOF�v��fgetc()�̗l��̧�ٓǍ��֐����A�uOS����w�����ް���
����܂���x�Ɠ`����ꂽ���ɁA�������۸��тɒm�点��ׂ�
���ʂȐM���i�l�j�v�Ȃ̂Ŗ߂�l�Ƃ���EOF (-1)��Ԃ��B

�EFILE��ϸۂł͖����utypedef�v�ƌ����d�g�݂Œ�`���ꂽ�^���B
typedef�͊������ް��^�ɕʖ�(��ر�)��t����@�\�B
typedef struct _iobuf FILE�̗l��̧�ُ����Ǘ����镡�G��
�\���̂ɑ΂���FILE�ƌ���������₷���ʖ����t�����Ă���B
_iobuf�̍ŏ���_�ͼ��ѓ����Ŏg���閼�O�ł��邱�Ƃ�
�����Ă��銵�K�I�Ȗڈ�B
*/