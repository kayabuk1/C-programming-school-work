#include<stdio.h>
#include<string.h>

struct Book
{
	char			title[64];
	char			author[64];
	unsigned int	price;
	unsigned int	page;
};

int main(void) {

	struct Book a;
	strcpy(a.title , "Computer Organization and Design");
	strcpy(a.author, "patterson");
	a.price = 4620;
	a.page = 404;

	printf("タイトル：%s\t著者名：%s\n価格：%d\nページ数：%d",
		a.title, a.author, a.price, a.page);
}
/*
データ型Bookでaという家が建てられた、
その家にはBookという建築方式に則って
title[]という長屋、author[]という長屋、
priceという部屋、pageという部屋がある。
C言語では配列名は原則先頭要素のアドレスを表す。
そして文字列も先頭要素のアドレス情報を取り扱って処理する。
("文字列"と記述してもｺﾝﾊﾟｲﾙ時に"文字列"配置したﾒﾓﾘの先頭文字ｱﾄﾞﾚｽ
に置換されてしまう。)
なので配列名＝”文字列”はアドレス情報をアドレス情報で
上書きする操作とコンパイラは捉えてしまいエラーを起こしてしまう。
配列でない変数はただの箱なのでそのまま＝で値を入れらる。
*/

