#include<stdio.h>

int main(void) {

	int soba,i = 0;

	printf("���ǂ�ƌ����΁u�Ԃ��������ǂ�v���Ǝv��(1�F�͂��A0�F������)\n:");
	scanf("%d", &soba);
	do{
		printf("%d��ڂ̋��ۂł���(^^)", i=i+1);
		printf("�f���ɂȂ낤�B�{���͂����v���ł���H(1�F�͂��A0�F������)\n:");
		scanf("%d", & soba);
	} while (soba != 1&&i<=4);
	if (soba == 1) {
		printf("�ł����(^^)���ǂ��Ȃꂻ���ł��B");
	}
	else {
		printf("�����ł����B���g���h�ł����c�O�ł��B");
	}
	return 0;


}