#include<stdio.h>

int main(void) {

	int i,j, height, width,Xhen= 0;

	printf("���ӂ̎O�p�`��\�����܂����H\n:");
	scanf("%d", &Xhen);

	for (i = 1;i<=Xhen;i++) {
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		putchar('\n');
	}

}