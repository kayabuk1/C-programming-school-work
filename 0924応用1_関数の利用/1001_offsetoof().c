#include<stdio.h>
#include<stddef.h>
#define pad -16

struct Strdata {
	char data1;
	int data2;
};
int main(void) {
	printf("%pads=%2zu\n","char", sizeof(char));
	printf("%pads=%2zu\n", "int", sizeof(int));
	printf("%pads=%2zu\n", "struct Strdata", sizeof(struct Strdata));
	printf("%pads=%2zu\n",
		"struct Stardata data1", offsetof(struct Strdata,data1));
	printf("%pads=%2zu\n", 
		"struct Strdata data2",offsetof(struct Strdata,data2));
	return 0;
}
/*
00007FF6F845AC24ads= 1
00007FF6F845AC40ads= 4
00007FF6F845AC48ads= 8
00007FF6F845AC60ads= 0
00007FF6F845AC80ads= 4
機種依存のデータ型とは？
構造体の隙間を無くす方法とは？
*/