#include<stdio.h>

#define NINZUU 5
#define GOUKAKU 80

int main(void) {
	int i, goukakusha = 0, tokuten[NINZUU];
	double goukei = 0;

	for (i = 0;i<NINZUU;i++) {
		printf("%d�l�ڂ̓_������͂��Ă�������:", i + 1);
		scanf("%d" < &tokuten[i]);
		scanf("%*[^\n]");
		scanf("%*c");

	}
	for (i = 0;i < NINZUU;i++) {
		goukei += tokuten[i];
		if (tokuten[i] >= GOUKAKU)
			goukakusha++;
	}
	printf("���ϓ_��%.1f�_�ł�\n", goukei / NINZUU);
	printf("���i�҂�%d�l�ł�\n", goukakusha);

	return 0;
}