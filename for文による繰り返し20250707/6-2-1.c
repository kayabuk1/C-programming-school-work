#include<stdio.h>

int main(void) {
	int yes, no = 0;
	printf("���Ȃ��p�C�͍ō��ɂ����������َq���Ǝv���i1:�͂��A0:�������j\n:");
	scanf("%d", &yes);
	while (yes == 0){
		printf("�f���ɂȂ낤�I���Ȃ��p�C�͍ō��ɂ����������َq���Ǝv���i1:�͂��A0:�������j\n:");
		scanf("%d", &yes);
	}
	printf("�ł���ˁI���Ȃ��p�C�͓��{��I\n");
	return 0;

}