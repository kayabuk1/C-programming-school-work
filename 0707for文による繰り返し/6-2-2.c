#include<stdio.h>

int main(void) {

	int yes, no = 0;
	printf("���Ȃ��p�C�͍ō��ɂ����������َq���Ǝv��(1:�͂��A0:������)\n:");
	scanf("%d", &yes);
	
	if (yes != 1) {
		do {
			printf("�f���ɂȂ낤�I���Ȃ��p�C�͍ō��ɂ����������َq���Ǝv��(1:�͂��A0:������)\n:");
			scanf("%d", &yes);
		} while (yes != 1);
	}
	printf("�ł���ˁI���Ȃ��p�C�͓��{��I\n");
	return 0;
}