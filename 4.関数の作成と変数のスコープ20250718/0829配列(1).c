#include<stdio.h>
#include<stddef.h>
#define size2 10

int main(void) {

	int i;
	int a[5];
	int b[] = { 100,101,102,103,104,105,106,107,108,109 };

	size_t size;
	size = sizeof(b) / sizeof(b[0]);
	for (i = 0;i < size;i++)
		printf("a[%zu]�Aa[%d]�̒l��%d,b[%d]�̒l��%d\n", size,i, a[i], i, b[i]);

	for (i = 0;i < size2;i++)
		printf("b[%d]�̒l��%d\n", i, b[i]);

	for (i = 0;i < 5;i++)
		a[i] = 0;//�z��̏�����
	for (i = 0;i < 5;i++)
		printf("a[%d}�̒l��%d,b[%d]�̒l��%d\n", i,a[i], i,b[i]);
	return 0;

}