#include<stdio.h>

int main(void) {

	int id[] = { 21,22,23,24,25 };
	int* ip;
	int i;

	ip = id;
	for (i = 0;i < 5;i++) {
		printf("%d: ip+%d=%p  *(ip+%d)=%d\n", i, i, &ip[i], i, ip[i]);
	}
	return 0;
	/*
	*ip[i]�ł͐������l���Q�Ƃł��Ȃ��̂͂Ȃ����H�ԐڎQ�ƂƂ��������ɂ͂Ȃ�Ȃ��̂��H
	�|�C���^�z���錾���Ă��Ȃ��̂ɔz��Ƃ��Ă������̂͂Ȃ����H*/
}