#include<stdio.h>

#define NINZUU 5
#define GOUKAKU 80

int main(void) {
	int i, goukakusha = 0, tokuten[NINZUU];
	double goukei = 0;

	for (i = 0;i<NINZUU;i++) {
		printf("%d人目の点数を入力してください:", i + 1);
		scanf("%d" < &tokuten[i]);
		scanf("%*[^\n]");
		scanf("%*c");

	}
	for (i = 0;i < NINZUU;i++) {
		goukei += tokuten[i];
		if (tokuten[i] >= GOUKAKU)
			goukakusha++;
	}
	printf("平均点は%.1f点です\n", goukei / NINZUU);
	printf("合格者は%d人です\n", goukakusha);

	return 0;
}