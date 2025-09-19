//文字列の長さを計算として表示
#include<stdio.h>

int length1(char str[]);//char str[]は宣言の時の使う書き方
int length2(char str[]);//[]を書くことで「これは配列です」と型を定義している。
int length3(char *str);//しかし関数の仮引数としてchar str[]と記述する時は、
					   //内部的にはchar *strと同じ意味に変換されている

int main(void) {

	char a_str[] = "abcdefg";
	printf("文字数は、%d\n",length1(a_str));//渡しているのは「&a_str[0]」
	printf("文字数は、%d\n", length2(a_str));//配列名＝配列先頭要素アドレス情報
	printf("文字数は、%d\n", length3(a_str));//C言語では配列を直接引数で渡せない
	return 0;
}

int length1(char str[]) {//ｺﾝﾊﾟｲﾗがchar str[]→char *strに変換して解釈する。
	int i = 0;
	while (str[i])//文字も内部では数値として扱われる。
		i++;	  //C言語では条件式を判定する時に、0をfalse、0以外の全ての数値を真
	return i;	  //として扱う。そして\0の実際の値は「0」なので終了する。
}
int length2(char *str) {//なのでlength1と同じ動作をする。
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char *str) {
	char* begin = str;
	while (*str)
		str++;
	return str - begin;
}

/*
つまり、
配列名str=char str[]=char *str＝char &str[0]という理解で良い？間接参照演算子の
動作も、同じ？strとstr[]の違いは何？
以下の2つは、全く同じ意味になります。

str[0]  // 配列の0番目の要素

*str    // strが指すアドレスにある値

さらに、C言語の面白い仕組みとして、配列の [] という記法は、実はポインタ演算の**「糖衣構文（とういこうぶん）」**、つまり分かりやすく書くための別の表現方法にすぎません。

str[i] は、内部的には *(str + i) として解釈されます。

これは、「strが指すアドレスから i 個分だけ進んだアドレスの値を取り出す」という意味で、結果的に配列のi番目の要素にアクセスするのと同じことになります。
*/
