#include<stdio.h>

int main(int argc,char *argv[]) 
{	
	int i;

	printf("argc�̒l��%d\n", argc);

	for (i = 0; i < argc; i++)
		printf("argv[%d]�̕�����́A%s\n", i, argv[i]);

	return 0;
}
/*��ۼު�ĉE�د��@���@�v���p�e�B�@���@�\�������è�A���ޯ�ށ@���@
* �R�}���h�����{�b�N�X�ɓn�������l���X�y�[�X��؂�œ��́i�v���O�������͕K�v�Ȃ��j��
* �f�o�b�O���s�ŃR�}���h���C�������̎��s���\�B
* 
* �o�͌���
* argc�̒l��3�@argc�͈����̐��𐔂���B����i�v���O�������j���܂ނ̂�1����J�E���g�B
argv[0]�̕�����́AC:\Users\tates\Source\Repos\C-programming-school-work\x64\Debug\0908�A�h���X�ƃ|�C���^.exe
argv[1]�̕�����́A100
argv[2]�̕�����́A200
* 
* 
* argc,argv�Bargument count,vector�̗��B
* argument�ɂ͌��_�Ƃ����Ӗ��ł͂Ȃ������Ƃ����Ӗ��B
* ���X�ꌹ�ɂȂ������t�ɂ́A����̎咣���邱�Ƃ̐��������u���炩�ɂ���v�Ӗ����������B
* ����������_�Ƃ��Ӗ��ɂȂ��Ă��܂������A�֐��ɓn���āA�֐����铭�����u���炩�ɂ���v
* �Ӗ�����A������argument���g���Ă���B
* vector�ɂ̓x�N�g���ȊO�Ɂu�ꎟ���z��v�ƌ����Ӗ�������B
*/