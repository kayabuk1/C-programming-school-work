//�u������́A�I�[��\0�����ƒ�߂�ꂽchar�^�z��ł���v

#include<stdio.h>

int main(void) {

	int i;
	char j;

	char a[5];
	char b[] = { 'A','B','C','D','E' };
	char c[] = "ABCDE";

	for (i = 0;i < 5;i++)
		a[i] = 'A' + i;

	for (i = 0;i < 5;i++)
		printf("i�̒l��%d,a[i]��%c,b[i]��%c,c[i]��%c\n", i, a[i], b[i], c[i]);
	printf("i�̒l��%d,a��%s,b��%s,c��%s\n", i, a, b, c);

	printf("%d\n", sizeof(j));//char�^����̃o�C�g����\��
	printf("%d\n", sizeof(a));//char�^�T���̃f�[�^�T�C�Y��5�o�C�g
	printf("%d\n", sizeof(b));//������char�^5����40�r�b�g
	printf("%d\n", sizeof(c));//char�^6���B�Ō�Ɏ����I�Ɂu\0�v���ǉ�����Ă���

	return 0;
}/*���s����
 i�̒l��0,a[i]��A,b[i]��A,c[i]��A
i�̒l��1,a[i]��B,b[i]��B,c[i]��B
i�̒l��2,a[i]��C,b[i]��C,c[i]��C
i�̒l��3,a[i]��D,b[i]��D,c[i]��D
i�̒l��4,a[i]��E,b[i]��E,c[i]��E
i�̒l��5,a��ABCDE���������������������������ABCDE���������������������������ABCDE,b��ABCDE���������������������������ABCDE,c��ABCDE
1
5
5
6*/