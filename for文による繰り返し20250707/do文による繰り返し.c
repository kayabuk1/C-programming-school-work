#include<stdio.h>

int main(void) {

	int data;
	char check;

	do {
		printf("��������͂��Ă��������B");
		scanf("%d", &data);
		scanf("%*[^\n]");
		scanf("%*c");

		printf("10�i�� %d-->16�i�� %x\n", data, data);
		printf("�ʂ̒l����͂��܂����H�iy/n�j");
		check = getchar();
	} while (check == 'Y' || check == 'y');
	return 0;


}