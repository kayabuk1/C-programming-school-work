#include<stdio.h>

int length1(char str[8]);
int length2(char str[]);
int length3(char* str);
//int length4(char[]);
//int length5(char*);
/*���ׂ߲�char str[]�Ƃ����\�L�����āAchar�^�ւ��߲���܂���ڽ���
����񂾂ȂƂ������߂��Ȃ��B[8]�ɐ��������Ă����������B*/

int main(void) {
	char a[] = "abcdefg";//����\0�������I�ɒǉ�
	printf("�������́A%d\n", length1(a));
	printf("�������́A%d\n", length2(a));
	printf("�������́A%d\n", length3(a));
	//�z��a��n����&a[0]��n���̂Ɠ����B

	return 0;
}
int length1(char str[]) {
	int i = 0;
	while (str[i])//\0�ɓ�����܂�i++���čŌ��i��Ԃ��B
		i++;
	return i;
}
int length2(char* str) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char* str) {
	char* begin = str;//���������ڽ��ʂ�begin�Ƃ����߲���ϐ��ɕۑ�
	while (*str)//۰���߲���ϐ�*str���w�����ڽ�̒��g�����o���B
		str++;	//�܂�A&a[0]='l'������U\0�ɂȂ�܂ő�����B
	return str - begin;
	//�����z����w���߲�����m�����Z����ƁA���̊Ԃ̗v�f�����v�Z�o����B
	//int�^�ł����Ă��A�߲��2�]�߲��1�A�ƌ����߲�����m�̈����Z�L�q������ƁA
	//�����I�ɁA(�߲��1�]�߲��2)/sizeof(�߲�����ް��^)�Ƃ��Ă����B
}