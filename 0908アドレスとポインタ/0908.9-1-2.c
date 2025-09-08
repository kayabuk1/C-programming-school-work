#include<stdio.h>

int main(void) {

	int num = 100;
	int* p;
	p = &num;

	printf("変数numの値は%dです\n", num);
	printf("変数numのアドレスは%dです\n", &num);
	printf("ポインタ変数pの値は%dです\n", p);
	printf("ポインタ変数の指し示す先の値は%dです\n", *p);
	return 0;

}
/*【実行結果】
変数numの値は100です
変数numのアドレスは1794897396です
ポインタ変数pの値は1794897396です
ポインタ変数の指し示す先の値は100です
*/