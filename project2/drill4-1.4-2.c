#include<stdio.h>

int main(void) {
	int a, b,ab;
	a = 0, b =0;

	scanf("%d",&a);
	scanf("%d",&b);
	ab = a * b;
	printf("a*b=%d\n", ab);//a+b�����̂܂܂Ԃ�����łn�j
	return 0;
}

printf("����a�̒l����͂��Ă�������\n");
scanf("%d", &a);
printf("����b�̒l����͂��Ă�������\n");
scanf("%d", &b);
printf("a��b�̘a��%d")