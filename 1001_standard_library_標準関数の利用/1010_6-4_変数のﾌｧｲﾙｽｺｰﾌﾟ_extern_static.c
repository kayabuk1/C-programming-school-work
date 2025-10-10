#include<stdio.h>
int sum(int x, int y);//ここでのﾌﾟﾛﾄﾀｲﾌﾟ宣言がﾍｯﾀﾞﾌｧｲﾙをincludeするのと同役割を果たす
                      //ﾌﾟﾛﾄﾀｲﾌﾟ宣言はコンパイラに渡す関数の名刺の様なもの
					  // ﾍｯﾀﾞﾌｧｲﾙのincludeはその名刺がまとまった名刺ﾌｧｲﾙを読込む行為
//なぜｿｰｽ元のﾌｧｲﾙ名が分からないのにちゃんと参照出来るのか？
//→ﾘﾝｶﾌﾟﾛｸﾞﾗﾑが、後に全ての部品(ｵﾌﾞｼﾞｪｸﾄﾌｧｲﾙ)を集めて、つつじま合わせをしてくれるから
//コンパイラの時に「int sum()」を見つけて、了解して。但しsum()本体がどこにあるかは
//分からないので、「後で誰か見つけて」と言う趣旨の指示を残しておこうと考え、main.objと
//言う部品を作る。コンパイラの外側にあるvisualstudio(ビルドシステム)は除外されていない
//ｿｰｽﾌｧｲﾙは全て実行するものとして把握しているので、sum()の本体が書かれた別のｿｰｽﾌｧｲﾙも
//同時にコンパイラにコンパイルさせて、sum.objと言う部品を作らせる。
// 個別コンパイル (Separate Compilation) という重要な原則がある。
// そしてﾘﾝｶプログラムに結合させる。
// 監督がビルドシステム、コンパイラが翻訳家、リンカが組み立て工のイメージ。
int ans;
static int ans2;
int main(void) {
	int a, b;
	a = 10;
	b = 20;
	ans = sum(a, b);	
	printf("%2d + %2d = %2d\n", a, b, ans);
	printf("ans2=%d\n", ans2);
	return 0;
}
/*
「extern記憶指定子」externalの略。externalには「外部の」という意味がある。
C言語における記憶指定子externは「この変数の本体は、ここのﾌｧｲﾙではなく、別のどこか
外部のﾌｧｲﾙで定義されていますよ」とコンパイラに教える働きをする。
「定義」と「宣言」の違いを理解しておくことが大事。
Definition(定義):ex:int g_count = 0;
変数の実態をここで作成して、メモリも確保する。
そのプログラム全体で同じ名前の変数の定義をすることは「１回」しかできない。
Declaration(宣言):ex:extern int g_count;
「g_countと言うint型の変数がどこかに存在しますよー」とコンパイラに名前だけ紹介する。
そのプログラム内で変数の作成は行わない。メモリも確保しない。何回でも宣言(紹介)出来る

■具体的にexternをどんな場面で使うのか？
ﾌﾟﾛｸﾞﾗﾑが大きくなって、複数の.cﾌｧｲﾙに機能を分割した時、それらのﾌｧｲﾙ間で、
「共有したい設定値やデータがある場合」にexternを使う。
例：プログラム全体で「ログレベル」という設定値を共有したい場合。
１．ﾍｯﾀﾞﾌｧｲﾙ(config.h)
#ifndef CONFIG_H
#define CONFIG_H
extern int g_log_level; //g_log_levelと言う変数が外部にあるよと「宣言」
#endif

2.ｿｰｽﾌｧｲﾙ(config.c)//g_log_level変数本体をここで「定義」
int g_log_level = 1; //1=通常ﾓｰﾄﾞ：2=詳細ﾓｰﾄﾞ：3=ﾃﾞﾊﾞｯｸﾞﾓｰﾄﾞ

３．main.c//main関数はconfig.hをincludeすることでg_log_levelの存在を知って、
利用する事が出来る
#include<stdio.h>
#include"config.h"
void sub_function()
int main(void){
	printf("main:現在のログレベルは%2dです\n",g_log_level);
	g_log_level=2;
	sub_function();
	retrun 0;
	}
	void sub_function(){
		printf("sub_function:現在のログレベルは%2dです\n",g_log_level);
	}
*/