#include<stdio.h>
#include<ctype.h>//character type�̗��B�P�����̎�ޕϊ��A����֘A�̊֐���ͯ��̧��

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c) != 0)
			putchar(toupper(c));
		else if (isupper(c) != 0)
			putchar(tolower(c));
		else
			putchar(c);
	}
	return 0;
}
/*
�uupper�v�ulower�v�̗R��
�̂̈�����ł́A�����̃n���R��؂̃P�[�X�ɐ������ĕۊǂ��Ă����B
���̍۱�̧�ޯĂ̑啶���́A��Ƒ�̏�i�iupper�j�̃P�[�X�ɁA
�������́A���i�̃P�[�X�ɒu���̂���ʓI�������B
��������upper-case-letters �� uppercase(�啶��),lowercase(������)�Ƃ������t�����ꂽ�B
�Ȃ̂Łuislower�v�uisupper�v�͂��̂P�����́A�������H�啶���H�ƕ����Ă��邾���B
*/