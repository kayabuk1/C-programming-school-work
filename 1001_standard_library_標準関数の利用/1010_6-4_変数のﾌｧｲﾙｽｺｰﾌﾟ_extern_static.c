#include<stdio.h>
int sum(int x, int y);//�����ł��������ߐ錾��ͯ��̧�ق�include����̂Ɠ��������ʂ���
                      //�������ߐ錾�̓R���p�C���ɓn���֐��̖��h�̗l�Ȃ���
					  // ͯ��̧�ق�include�͂��̖��h���܂Ƃ܂������ḩ�ق�Ǎ��ލs��
//�Ȃ��������̧�ٖ���������Ȃ��̂ɂ����ƎQ�Əo����̂��H
//���ݶ��۸��т��A��ɑS�Ă̕��i(��޼ު��̧��)���W�߂āA���܍��킹�����Ă���邩��
//�R���p�C���̎��Ɂuint sum()�v�������āA�������āB�A��sum()�{�̂��ǂ��ɂ��邩��
//������Ȃ��̂ŁA�u��ŒN�������āv�ƌ�����|�̎w�����c���Ă������ƍl���Amain.obj��
//�������i�����B�R���p�C���̊O���ɂ���visualstudio(�r���h�V�X�e��)�͏��O����Ă��Ȃ�
//���̧�ق͑S�Ď��s������̂Ƃ��Ĕc�����Ă���̂ŁAsum()�̖{�̂������ꂽ�ʂ̿��̧�ق�
//�����ɃR���p�C���ɃR���p�C�������āAsum.obj�ƌ������i����点��B
// �ʃR���p�C�� (Separate Compilation) �Ƃ����d�v�Ȍ���������B
// �������ݶ�v���O�����Ɍ���������B
// �ē��r���h�V�X�e���A�R���p�C�����|��ƁA�����J���g�ݗ��čH�̃C���[�W�B
int ans;
static int ans2;
int main(void) {
	int a, b;
	a = 10;
	b = 20;
	ans = sum(a, b);	
	printf("%2d + %2d = %2d\n", a, b, ans);
	printf("ans2=%d\n", ans2);
	return 0;
}
/*
�uextern�L���w��q�vexternal�̗��Bexternal�ɂ́u�O���́v�Ƃ����Ӗ�������B
C����ɂ�����L���w��qextern�́u���̕ϐ��̖{�̂́A������̧�قł͂Ȃ��A�ʂ̂ǂ���
�O����̧�قŒ�`����Ă��܂���v�ƃR���p�C���ɋ����铭��������B
�u��`�v�Ɓu�錾�v�̈Ⴂ�𗝉����Ă������Ƃ��厖�B
Definition(��`):ex:int g_count = 0;
�ϐ��̎��Ԃ������ō쐬���āA���������m�ۂ���B
���̃v���O�����S�̂œ������O�̕ϐ��̒�`�����邱�Ƃ́u�P��v�����ł��Ȃ��B
Declaration(�錾):ex:extern int g_count;
�ug_count�ƌ���int�^�̕ϐ����ǂ����ɑ��݂��܂���[�v�ƃR���p�C���ɖ��O�����Љ��B
���̃v���O�������ŕϐ��̍쐬�͍s��Ȃ��B���������m�ۂ��Ȃ��B����ł��錾(�Љ�)�o����

����̓I��extern���ǂ�ȏ�ʂŎg���̂��H
��۸��т��傫���Ȃ��āA������.ç�قɋ@�\�𕪊��������A������̧�يԂŁA
�u���L�������ݒ�l��f�[�^������ꍇ�v��extern���g���B
��F�v���O�����S�̂Łu���O���x���v�Ƃ����ݒ�l�����L�������ꍇ�B
�P�Dͯ��̧��(config.h)
#ifndef CONFIG_H
#define CONFIG_H
extern int g_log_level; //g_log_level�ƌ����ϐ����O���ɂ����Ɓu�錾�v
#endif

2.���̧��(config.c)//g_log_level�ϐ��{�̂������Łu��`�v
int g_log_level = 1; //1=�ʏ�Ӱ�ށF2=�ڍ�Ӱ�ށF3=���ޯ��Ӱ��

�R�Dmain.c//main�֐���config.h��include���邱�Ƃ�g_log_level�̑��݂�m���āA
���p���鎖���o����
#include<stdio.h>
#include"config.h"
void sub_function()
int main(void){
	printf("main:���݂̃��O���x����%2d�ł�\n",g_log_level);
	g_log_level=2;
	sub_function();
	retrun 0;
	}
	void sub_function(){
		printf("sub_function:���݂̃��O���x����%2d�ł�\n",g_log_level);
	}
*/