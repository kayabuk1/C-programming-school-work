#include<stdio.h>

int main(void) {

	int month = 0;

	printf("������͂��Ă�������");
	if (scanf("%d", &month) != 1) {}


	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		printf("%d����31���܂ł���܂�\n", month);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%d����30���܂ł���܂�\n", month);
	}
	else if (month == 2) {
		printf("%d����28����29���܂ł���܂�\n", month);
	}
	else{
		printf("���̓��͂��ԈႦ�Ă��܂�\n");
	}
	
	return 0;
	
}