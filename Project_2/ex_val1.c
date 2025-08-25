/*変数とその表示名*/
/*ファイル名はex_val1.c*/
#include<stdio.h>

int main(void) {
	int sum;/*変数宣言*/

	sum = 100;/*変数の代入*/
	printf("sumの値は%d\n", sum);/*変数の値を出力*/
	sum = 200;
	printf("sumの値は'%x\n", sum);

	return 0;
}