#include<stdio.h>

int main(void) {

	int decimal = 0;

	printf("10�i����0�������͐�����16�i���ɕϊ����ĕ\�����܂�\n");
	printf("���̐������͂����ƏI�����܂��B\n���l����͂��Ă��������B");
	if (scanf("%d", &decimal) == 1) {
		while (1) {
			printf("%d�́A2�i��:%b�A8�i��:%x�A16�i��:%X\n10�i������͂��Ă�������:", decimal, decimal, decimal);
			scanf("%d", &decimal);
			if (decimal < 0) { break; }
		}
	}
	printf("�v���O�������I�����܂��B\n");
	return 0;
}