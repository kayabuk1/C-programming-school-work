#include<stdio.h>

int main(int argc, char* argv[]) {

	int i;
	printf("argc�̒l��%d\n", argc);
	for (i = 0;i < argc;i++)
		printf("argv[%d]�̕������,%s\n", i, argv[i]);

	return 0;
}
/*
�uargc�v�́uargument count�v�̗��B
�uargument�v�́u�����v�A�ucount�v�͐��B
*�v���O�����ɓn���ꂽ�R�}���h���C���������A
* �u�S���ŉ����邩�v�����������B
* �v���O������
*1970�N���C�����UNIX�̏����A�v���O���}�[��
*�^�C�v�������炷�ׁB�Z���ϐ������D�񂾁B
*
*/