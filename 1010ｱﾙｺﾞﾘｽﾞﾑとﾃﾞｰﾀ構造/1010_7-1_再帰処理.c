#include<stdio.h>

void print_indent(int level) {
	for (int i = 0;i < level;i++) {
		printf(" ");
	}
}
long fact(int x,int level);

int main(void) {
	int data = 3;
	printf("%d! = %ld\n", data, fact(data,0));
	return 0;
}
long fact(int x,int level) {
	long result;
	print_indent(level);
	printf("-> fact(%d)���Ă΂�܂���\n", x);
	if (x <= 1) {
		printf("<- fact(%d)�͂P��Ԃ��܂�\n", x);
		return 1;
	}
	else {
		result=x* fact(x - 1,level+1);
		printf("fact(%d)�́@%d * fact(%d) �̌���%ld��Ԃ��܂�\n",x,x,x-1, result);
		return result;
	}
}
/*
-> fact(3)���Ă΂�܂���
 -> fact(2)���Ă΂�܂���
  -> fact(1)���Ă΂�܂���
<- fact(1)�͂P��Ԃ��܂�
fact(2)�́@2 * fact(1) �̌���2��Ԃ��܂�
fact(3)�́@3 * fact(2) �̌���6��Ԃ��܂�
3! = 6
*/