#include<stdio.h>

int* input(int x);

int main(void) {
	int* data1, *data2;

	data1 = input(100);
	printf("data1=%d\n", *data1);//間接参照でdata1の指す値100を表示

	data2 = input(200);
	printf("data2=%d\n", *data2);
	printf("data1=%d\n", *data1);//関数呼び出し後もdata1の値は保持されている

	return 0;
}
int* input(int x) {
	static int data;
	data = x;
	return &data;
}
/*
* 「static」を付けて宣言すると、通常のﾛｰｶﾙ関数と異なり、
* ﾌﾟﾛｸﾞﾗﾑの開始時に「一度だけ」作られ、ﾌﾟﾛｸﾞﾗﾑが終了するまで
* ずっとメモリにその値は残り続ける。
* 
ほかによく使う修飾子にはどんなものがあるか？
ほかもconstの様に、左側を修飾するものと、右側を修飾するものがあるか？


君にどうやったら自力でﾌﾟﾛｸﾞﾗﾑをかけるようになるか聞いた時、
何も見ずにコードを書いてみることを勧められたが、
なにも問題や、引っ掛かりがないと、全く書き出せなかった。
そこで、君にサンプルコードから、問題を作成して貰えないかと
考えたのだけれど、この考えは勉強法として良いか悪いか？どうだろうか？
*/