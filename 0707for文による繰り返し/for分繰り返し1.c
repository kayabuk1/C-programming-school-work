#include<stdio.h>

int main(void) {

	int i, j = 0;//ここで0を入れているけれどfor文の中で0を入れるので別に大丈夫らしい


	for (i = 0;i < 5;i = i + 1) {
		printf("iの値は%d,j値は%d\n", i, j);
		j++;
	}
	putchar('\n');//put character 1文字だけ置く意味
	
	for (i = 0;j = 0;i < 5) {
		printf("iの値は%d、jの値は%d\n", ++i, j++);
	}
	return 0;
}