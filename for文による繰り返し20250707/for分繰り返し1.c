#include<stdio.h>

int main(void) {

	int i, j = 0;//������0�����Ă��邯���for���̒���0������̂ŕʂɑ��v�炵��


	for (i = 0;i < 5;i = i + 1) {
		printf("i�̒l��%d,j�l��%d\n", i, j);
		j++;
	}
	putchar('\n');//put character 1���������u���Ӗ�
	
	for (i = 0;j = 0;i < 5) {
		printf("i�̒l��%d�Aj�̒l��%d\n", ++i, j++);
	}
	return 0;
}