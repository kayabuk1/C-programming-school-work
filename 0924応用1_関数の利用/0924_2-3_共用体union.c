#include<stdio.h>

union data32 {
	unsigned char	 a[4];
	unsigned short	 b[2];
	unsigned int	 c;
};
int main(void) {
	int i;
	union data32 data;

	data.c = 4294967295;
	data.a[0] = 100;
	data.a[1] = 10;

	for (i = 0;i < 4;i++)
		printf("data.a[%2d] = %d\n", i, data.a[i]);
	for (i = 0;i < 2;i++)
		printf("data.b[%2d] = %d\n", i, data.b[i]);
	printf("data.c = %d\n", data.c);
	return 0;
}
/*
data.a[ 0] = 100
data.a[ 1] = 10
data.a[ 2] = 0
data.a[ 3] = 0
data.b[ 0] = 2660
data.b[ 1] = 0
data.c = 2660
*/