#include<stdio.h>

struct Strdata {
	int data1;
	char data2;
};
struct Bitdata {
	unsigned char data1:1;
	unsigned char data2 : 2;
};
union Unidata {
	char data1[4];
	int data2;
};
int main(void) {
	int int_array[2];
	struct Strdata struct_array[2];
	printf("%-16s=%2zu\n","char", sizeof(char));
	printf("%-16s=%2zu\n","int", sizeof(int));
	printf("%-16s=%2zu\n", "int_array[2]",sizeof(int_array));
	printf("%-16s=%2zu\n", "struct Str_data",sizeof(struct Strdata));
	printf("%-16s=%2zu\n","struct_array", sizeof(struct_array));
	printf("%-16s=%2zu\n", "struct Bitdata",sizeof(struct Bitdata));
	printf("%-16s=%2zu\n", "struct Unidata",sizeof(union Unidata));
	return 0;
}
/*
char            = 1
int             = 4
int_array[2]    = 8
struct Str_data = 8
struct_array    =16
struct Bitdata  = 1
struct Unidata  = 4
アラインメントの言葉の意味は？
printfで宣言していない文字列が使えるのはなぜ？
毎回%-16sと書くのが面倒な場合は？
*/