#include<stdio.h>
#include<string.h>

int main(void) {

	char name[101];
	int i = 0;
	int ch=0;

	printf("���O���̧�ޯĂŁA1���������͂��Ă��������B\n"
		"���͂��I��������Ō�� 0 ����͂��Ă�������\n");
	for(i=0;i<100;i++)
	{
		printf("%d������:", i + 1);
		ch = getchar();
		if (ch == '0' || ch == '\n' || ch == EOF) {
			break;
		}
		name[i] = ch;
		while ((ch = getchar()) != '\n') {
			name[i+1] = ch;
			i++;
		}
	}
	name[i] = '\0';
	printf("���Ȃ��̖��O��%s����ł��ˁB\n", name);
	return 0;
}