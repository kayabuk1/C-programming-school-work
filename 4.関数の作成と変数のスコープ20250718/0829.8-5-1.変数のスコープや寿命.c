#include<stdio.h>

int call_count(void);

int count;

int main(void) {
	call_count();
	call_count();
	call_count();
	call_count();
	call_count();
	call_count();
	return 0;

}

int call_count(void) {
	count++;
	printf("�֐�call_count��%d��Ăяo����܂���\n", count);
	return count;
}