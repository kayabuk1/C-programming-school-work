#include<stdio.h>

int main(void) {
	
	int CC = 0;

	printf("���Ȃ��̎Ԃ̔r�C�ʂ́H\n:");
	if (scanf("%d", &CC) != 1) {
		printf("������Ɛ����œ��͂��Ă�������");
		return 1;
	}

	if (CC < 660) {
		printf("�y������\n");
	}
	else if (CC >= 660 && CC <= 2000) {
		printf("���^��\n");
	}
	else if (CC > 2000) {
		printf("���ʎ�\n");
	}
	else {
		printf("����s�\�ł���");
	}
	return 0;
}