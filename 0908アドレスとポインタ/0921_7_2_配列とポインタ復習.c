#include<stdio.h>
#define ARRAY_SIZE 5

int main(void) {
	
	int i, a[ARRAY_SIZE], b[ARRAY_SIZE];
	int* p;

	for (i = 0; i < ARRAY_SIZE; i++) {
		p = &a[i];//�߲��p�ɔz��a��a[0]�̃A�h���X��������
		*p = i;//�߲���̎w���Ă���a[0]��i�����B������J��Ԃ��B
	}
	for (i = 0, p = &b[0]; i < ARRAY_SIZE; i++, p++)
		*p = i;//������ԁ��Ŕz��̍ŏ��̱��ڽ�����n�����߲�������炷

	for (i = 0; i < ARRAY_SIZE; i++)
		printf("a[%d]=%d, b[%d]=%d\n", i, a[i], i, b[i]);

	return 0;
}
/*
a[0]=0, b[0]=0
a[1]=1, b[1]=1
a[2]=2, b[2]=2
a[3]=3, b[3]=3
a[4]=4, b[4]=4
*/