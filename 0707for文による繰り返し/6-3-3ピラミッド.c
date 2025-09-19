#include<stdio.h>

int main(void) {

	int i,j, height, width,Xhen= 0;

	printf("何辺の三角形を表示しますか？\n:");
	scanf("%d", &Xhen);

	for (i = 1;i<=Xhen;i++) {
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		putchar('\n');
	}

}