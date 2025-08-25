#include<stdio.h>

int main(void) {

	int num;
	char menu;

	while (1) {
		printf("0～127までの正の整数を入力してください\n");
		if (scanf("%d", &num) != 1) {
			printf("正しい入力をしてください\n");
		}

		scanf("%*[^\n]");
		scanf("%*c");


		printf("1:16進数に変換\n");
		printf("2:8進数に変換\n");
		printf("3:ASCIIコードに変換\n");
		printf("4:終了\n");
		printf("どれにしますか？\n:");
		menu = getchar();

		switch (menu)
		{
		case'1':
			printf("10進数 %d-->16進数 %x\n", num, num);
			break;
		case'2':
			printf("10進数 %d--> 8進数 %o\n", num, num);
			break;
		case'3':
			printf("10進数 %d-->ASCIIコード %c\n", num, num);
			break;
		case'4':
			printf("終了します\n");
			return 0;
		default:
			printf("1～4のメニューを選んでください。\n");
		}
	}
	return 0;


}