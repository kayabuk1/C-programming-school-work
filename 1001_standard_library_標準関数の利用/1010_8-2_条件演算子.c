#include<stdio.h>

int max(int a, int b);

int main(void) {
	printf("%d\n", max(10, 20));
	printf("%d\n", max(30, 20));
	return 0;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
/*
�������Z�q(?:)��2�œ��ʂȈӖ��ɂȂ�B�܂�3�̗v�f������C����ŗB��̉��Z�q�Ȃ̂ŁA
�u�O�����Z�q(Ternary Operator�v�Ƃ����ʖ����L���Bif-else���ƈႢ�����܂Ŏ��Ƃ��Ďg���B
*/