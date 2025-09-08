#include<stdio.h>

int main(void) {

	int id[] = { 21,22,23,24,25 };

	int* ip0 = &id[0];
	int* ip1 = &id[1];
	int* ip2 = &id[2];
	int* ip3 = &id[3];
	int* ip4 = &id[4];

	printf("0:ip0=%d,*ip0=%d\n", ip0, *ip0);
	printf("1:ip1=%d,*ip1=%d\n", ip1, *ip1);
	printf("2:ip2=%d,*ip2=%d\n", ip2, *ip2);
	printf("3:ip3=%d,*ip3=%d\n", ip3, *ip3);
	printf("4:ip4=%d,*ip4=%d\n", ip3, *ip3);

	return 0;
}