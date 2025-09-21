#include<stdio.h>

void func1(int a, int*);
/*ﾌﾟﾛﾄﾀｲﾌﾟ宣言と関数定義での仮引数名は異なってもOK。可読性としては×
* ﾌﾟﾛﾄﾀｲﾌﾟ宣言はあくまでｺﾝﾊﾟｲﾗに対する予告。
*ｺﾝﾊﾟｲﾗは型さえ分かれば良いので仮引数名自体省略可能。
*/

int main(void) {
	
	int data1 = 10, data2 = 10;

	printf("data1の初期値は%d、data2の初期値は%d\n", data1, data2);
	
	func1(data1, &data2);//値渡しとｱﾄﾞﾚｽ渡しの比較

	printf("data1の最終値は%d、data2の最終値は%d\n", data1, data2);

	return 0;
}
void func1(int data1, int* data2) {
	printf("func1()に渡されたdata1の値は%d、data2の値は%p\n", 
		data1,data2);
	data1= 100;
	*data2= 100;
	printf("func1()のdata1の値は%d、data2の値は%d\n", data1, *data2);
}
/*&演算子の付いたｱﾄﾞﾚｽ情報は、その変数原本の住所そのものなので、
* 関数の処理が終わっても呼び出し元(main関数)の変更はそのままになる。
*/