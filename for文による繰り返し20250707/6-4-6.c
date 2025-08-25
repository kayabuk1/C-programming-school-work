#include<stdio.h>

int main(void) {

	int decimal = 0;

	printf("10進数の0もしくは正数を16進数に変換して表示します\n");
	printf("負の数が入力されると終了します。\n数値を入力してください。");
	if (scanf("%d", &decimal) == 1) {
		while (1) {
			printf("%dは、2進数:%b、8進数:%x、16進数:%X\n10進数を入力してください:", decimal, decimal, decimal);
			scanf("%d", &decimal);
			if (decimal < 0) { break; }
		}
	}
	printf("プログラムを終了します。\n");
	return 0;
}