#include<stdio.h>

int main(void) {

	int data;
	char check;

	do {
		printf("整数を入力してください。");
		scanf("%d", &data);
		scanf("%*[^\n]");
		scanf("%*c");

		printf("10進数 %d-->16進数 %x\n", data, data);
		printf("別の値を入力しますか？（y/n）");
		check = getchar();
	} while (check == 'Y' || check == 'y');
	return 0;


}