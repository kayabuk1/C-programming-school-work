#include<stdio.h>

int main(void) {

	int num;
	char menu;

	while (1) {
		printf("0�`127�܂ł̐��̐�������͂��Ă�������\n");
		if (scanf("%d", &num) != 1) {
			printf("���������͂����Ă�������\n");
		}

		scanf("%*[^\n]");
		scanf("%*c");


		printf("1:16�i���ɕϊ�\n");
		printf("2:8�i���ɕϊ�\n");
		printf("3:ASCII�R�[�h�ɕϊ�\n");
		printf("4:�I��\n");
		printf("�ǂ�ɂ��܂����H\n:");
		menu = getchar();

		switch (menu)
		{
		case'1':
			printf("10�i�� %d-->16�i�� %x\n", num, num);
			break;
		case'2':
			printf("10�i�� %d--> 8�i�� %o\n", num, num);
			break;
		case'3':
			printf("10�i�� %d-->ASCII�R�[�h %c\n", num, num);
			break;
		case'4':
			printf("�I�����܂�\n");
			return 0;
		default:
			printf("1�`4�̃��j���[��I��ł��������B\n");
		}
	}
	return 0;


}