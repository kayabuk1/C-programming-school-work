#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	char str[] = "100.0 256.0", * ptr;

	printf("%d\n", atoi(str));
	printf("%.1f\n", atof(str));
	printf("%d\n", atol(str));

	printf("�ŏ��Ɏ擾���������F%lf\n", strtod(str, &ptr));
	printf("�c����������F%s\n", ptr);
	printf("���Ɏ擾��������:%lf\n", strtod(ptr, &ptr));

	printf("100��2�i���Ƃ��Ď擾�F%d\n", strtol(str, &ptr, 2));
	printf("100��8�i���Ƃ��Ď擾�F%d\n", strtol(str, &ptr, 8));
	printf("100��10�i���Ƃ��Ď擾�F%d\n", strtol(str, &ptr, 10));
	printf("100��16�i���Ƃ��Ď擾�F%d\n", strtol(str, &ptr, 16));

	sprintf(str, "%d", 50);
	printf("���l�𕶎���ɕϊ��������ʁF%s\n", str);
	return 0;
}
/*
100
100.0
100
�ŏ��Ɏ擾���������F100.000000
�c����������F 256.0
���Ɏ擾��������:256.000000
100��2�i���Ƃ��Ď擾�F4
100��8�i���Ƃ��Ď擾�F64
100��10�i���Ƃ��Ď擾�F100
100��16�i���Ƃ��Ď擾�F256
���l�𕶎���ɕϊ��������ʁF50
*/ 