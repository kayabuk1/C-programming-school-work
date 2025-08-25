#include<stdio.h>

int main(void) {
	
	int CC = 0;

	printf("あなたの車の排気量は？\n:");
	if (scanf("%d", &CC) != 1) {
		printf("きちんと数字で入力してください");
		return 1;
	}

	if (CC < 660) {
		printf("軽自動車\n");
	}
	else if (CC >= 660 && CC <= 2000) {
		printf("小型車\n");
	}
	else if (CC > 2000) {
		printf("普通車\n");
	}
	else {
		printf("判定不可能でした");
	}
	return 0;
}