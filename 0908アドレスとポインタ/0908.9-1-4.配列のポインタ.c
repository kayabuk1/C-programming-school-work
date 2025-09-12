#include<stdio.h>

int main(void) {

	int id[] = { 21,22,23,24,25 };

	int* ip0 = &id[0];
	int* ip1 = &id[1];
	int* ip2 = &id[2];
	int* ip3 = &id[3];
	int* ip4 = &id[4];

	printf("0:ip0=%p,*ip0=%d\n", ip0, *ip0);
	printf("1:ip1=%p,*ip1=%d\n", ip1, *ip1);
	printf("2:ip2=%p,*ip2=%d\n", ip2, *ip2);
	printf("3:ip3=%p,*ip3=%d\n", ip3, *ip3);
	printf("4:ip4=%p,*ip4=%d\n", ip4, *ip4);

	return 0;

}
/*
0:ip0=-1810892600,*ip0=21
1:ip1=-1810892596,*ip1=22
2:ip2=-1810892592,*ip2=23
3:ip3=-1810892588,*ip3=24
4:ip4=-1810892588,*ip4=24
*/