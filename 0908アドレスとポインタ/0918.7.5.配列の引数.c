//������̒������v�Z�Ƃ��ĕ\��
#include<stdio.h>

int length1(char str[]);//char str[]�͐錾�̎��̎g��������
int length2(char str[]);//[]���������ƂŁu����͔z��ł��v�ƌ^���`���Ă���B
int length3(char *str);//�������֐��̉������Ƃ���char str[]�ƋL�q���鎞�́A
					   //�����I�ɂ�char *str�Ɠ����Ӗ��ɕϊ�����Ă���

int main(void) {

	char a_str[] = "abcdefg";
	printf("�������́A%d\n",length1(a_str));//�n���Ă���̂́u&a_str[0]�v
	printf("�������́A%d\n", length2(a_str));//�z�񖼁��z��擪�v�f�A�h���X���
	printf("�������́A%d\n", length3(a_str));//C����ł͔z��𒼐ڈ����œn���Ȃ�
	return 0;
}

int length1(char str[]) {//���ׂ߲�char str[]��char *str�ɕϊ����ĉ��߂���B
	int i = 0;
	while (str[i])//�����������ł͐��l�Ƃ��Ĉ�����B
		i++;	  //C����ł͏������𔻒肷�鎞�ɁA0��false�A0�ȊO�̑S�Ă̐��l��^
	return i;	  //�Ƃ��Ĉ����B������\0�̎��ۂ̒l�́u0�v�Ȃ̂ŏI������B
}
int length2(char *str) {//�Ȃ̂�length1�Ɠ������������B
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char *str) {
	char* begin = str;
	while (*str)
		str++;
	return str - begin;
}

/*
�܂�A
�z��str=char str[]=char *str��char &str[0]�Ƃ��������ŗǂ��H�ԐڎQ�Ɖ��Z�q��
������A�����Hstr��str[]�̈Ⴂ�͉��H
�ȉ���2�́A�S�������Ӗ��ɂȂ�܂��B

str[0]  // �z���0�Ԗڂ̗v�f

*str    // str���w���A�h���X�ɂ���l

����ɁAC����̖ʔ����d�g�݂Ƃ��āA�z��� [] �Ƃ����L�@�́A���̓|�C���^���Z��**�u���ߍ\���i�Ƃ��������Ԃ�j�v**�A�܂蕪����₷���������߂̕ʂ̕\�����@�ɂ����܂���B

str[i] �́A�����I�ɂ� *(str + i) �Ƃ��ĉ��߂���܂��B

����́A�ustr���w���A�h���X���� i �������i�񂾃A�h���X�̒l�����o���v�Ƃ����Ӗ��ŁA���ʓI�ɔz���i�Ԗڂ̗v�f�ɃA�N�Z�X����̂Ɠ������ƂɂȂ�܂��B
*/
