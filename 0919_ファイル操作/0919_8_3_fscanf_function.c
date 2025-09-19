#include<stdio.h>

int main(void) {

	FILE* fp;
	int data;

	fp = fopen("0919_8_2_fprintf_function.csv", "r");
	if (fp == NULL) {
		printf("ﾌｧｲﾙがopne出来ません\n");
		return 1;
	}
	while (fscanf(fp, "%d", &data) != EOF)
		printf("%d\n", data);

	fclose(fp);
	return 0;
}
/*
■「FILE型」ﾌｧｲﾙをﾌﾟﾛｸﾞﾗﾑ内で扱う為の一連の情報を
まとめた構造体。C言語の標準規格でその定義がstdio.hに
書かれている。
■なぜ,FILE,EOF,NULLの様に大文字で書くのか
これらが通常の変数や関数ではなく、ﾏｸﾛや型定義と
呼ばれる特別な仕組みで定義されているとのこと。
・NULLはstdio.hの中で#define NULL 0や
#define NULL ((void*)0)の様に定義されている。

・EOFは#define EOF (-1)の様に定義されている。
(-1)なのは通常の文字コードとは重複しない様にする為。
文字列とは違い、ﾌｧｲﾙを管理するOSはﾌｧｲﾙが何ﾊﾞｲﾄあるかを
既に知っている為、\0が暗黙的に追加されることは無い。
「EOF」はfgetc()の様なﾌｧｲﾙ読込関数が、「OSから『もうﾃﾞｰﾀは
ありません』と伝えられた時に、それをﾌﾟﾛｸﾞﾗﾑに知らせる為の
特別な信号（値）」なので戻り値としてEOF (-1)を返す。

・FILEはﾏｸﾛでは無く「typedef」と言う仕組みで定義された型名。
typedefは既存のﾃﾞｰﾀ型に別名(ｴｲﾘｱｽ)を付ける機能。
typedef struct _iobuf FILEの様にﾌｧｲﾙ情報を管理する複雑な
構造体に対してFILEと言う分かりやすい別名が付けられている。
_iobufの最初の_はｼｽﾃﾑ内部で使われる名前であることを
示している慣習的な目印。
*/