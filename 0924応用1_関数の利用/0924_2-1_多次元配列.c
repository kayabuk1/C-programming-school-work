#include<stdio.h>
#define ARRAY_X 2
#define ARRAY_Y 4

int main(void) {
	int i, j;
	int data[ARRAY_X][ARRAY_Y] = { {31,41,59,26},{53,58,97,93} };

	for (i = 0;i < ARRAY_X;i++) {//�O����ٰ�߂ŗv�f�s���w��
		for (j = 0;j < ARRAY_Y;j++)//������ٰ�߂Ŋe��̗v�f���w�肵�ĕ\��
			printf("data[%d][%d] = %d\n", i, j, data[i][j]);
		putchar('\n');
	}
	return 0;
}
/*
data[0][0] = 31
data[0][1] = 41
data[0][2] = 59
data[0][3] = 26

data[1][0] = 53
data[1][1] = 58
data[1][2] = 97
data[1][3] = 93
*/