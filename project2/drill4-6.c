#include<stdio.h>

int main(void) {
	int value;
	printf("�l�i����͂��Ă�������\n");
	scanf("%d", &value);
	float tax;
	tax = value*0.08;
	printf("%d�~�̏���ł�%f�~�ł��B\n", value, tax);
	return 0;
}