#include<stdio.h>
//変数のスコープ
// １．
//関数の外で宣言された変数はグローバル変数と呼び、ﾌﾟﾛｸﾞﾗﾑ全体で有効
//このコードではint global;がグローバル変数。
//２．
//関数の中で宣言された変数はローカル変数と呼び、その関数内でのみ有効。
//このコードではfunc1,func2内で宣言されたlocal,globalがローカル変数。
//関数が終了するとローカル変数はメモリから消去される。
//なので同じ名前の変数を別の関数で宣言しても問題ない。

void func1(void);
void func2(void);

int global;
//プリプロセッサが関与するのは先頭に書かれているものということではなく、
// ＃ではじまる指示子だけ。
//グローバル変数はコンパイラとリンカが関与する。

int main(void) {

	int local = 10;
	//特別な関数であるmain関数内のlocalもローカル変数。
	// ひとつのスコープ｛｝のなかでのみ有効。

	printf("main関数()：local=%d,global=%d\n", local, global);
	func1();
	printf("main関数()：local=%d,global=%d\n", local, global);

	putchar('\n');

	printf("main関数()：global=%d\n",  global);
	func2();
	printf("main関数()：global=%d\n", global);

	return 0;
}
void func1(void) {
	int local;
	local = 20;
	//func1から戻った後、localは消去されるので、
	// mainのlocalには影響しない。local=10のまま。
	global = 200;
	printf("func1関数()：local=%d,global=%d\n", local, global);
}
void func2(void) {
	int global;
	global = 20000;
	printf("func2関数()：global=%d\n", global);
}//コンパイラはコードの中の変数を参照する度に、まず最も内側のスコープ
//つまりローカルスコープ（stack領域）を調べる。そしてローカル変数が見つかれば、
//コンパイラはそのローカル変数を使い、グローバル変数は無視する。
//もしローカル変数が見つからなければ、グローバルスコープ（static領域）を
//調べてグローバル変数を使う。
//なので優先順位は、ローカル変数＞グローバル変数、になる