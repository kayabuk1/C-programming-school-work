#include<stdio.h>
#include<string.h>

int main(void) {

	char str[]="It is very important to get into the habio "
		"of studying during the first gurade.";
	printf("����ق̕������%s\n��������%3d�����ł�\n", str,
		strlen(str));
	printf("sizeof(str)���g�����ꍇ�́A�u\\0�v�܂Ŋ܂߂Čv�Z"
		"���Ă����̂ŁA%3zu�����ł�\n",
		sizeof(str) / sizeof(str[0]));
	return 0;
}
/*
����ق̕������It is very important to get into the habio of 
studying during the first gurade.
�������� 79�����ł�
sizeof(str)���g�����ꍇ�́A�u\0�v�܂Ŋ܂߂Čv�Z���Ă����̂ŁA 
80�����ł�
*/