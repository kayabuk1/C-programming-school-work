#include<stdio.h>

int main(void) {

	int i, j, Xhen = 0;

	printf("���ӂ̋t�O�p�`��\�����܂����H\n;");
	scanf("%d", &Xhen);

	for (i = Xhen;i >= 1;i--) {
		for (j = i;j >= 1; j--) {
			printf(" * ");
		}
		putchar('\n');
	}


}