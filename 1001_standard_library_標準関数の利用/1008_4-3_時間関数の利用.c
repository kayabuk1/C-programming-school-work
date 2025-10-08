/*
#include<stdio.h>
#include<time.h>
int main(void) {
	time_t now, settime;
	struct tm* t1, t2;
	time(&now);
	printf("1900/1/1 00:00:00から%10d秒経過しています\n", now);
	printf("ctime\t:%s\n", ctime(&now));
	t1 = localtime(&now);
	printf("localtime:%4d/%02d/%02d %02d:%02d:%02d\tです\n",
		t1->tm_year + 1900, t1->tm_mon + 1, t1->tm_mday,
		t1->tm_hour, t1->tm_min, t1->tm_sec);

	t2.tm_sec = 0;
	t2.tm_min = 0;
	t2.tm_hour = 0;
	t2.tm_mday = 0;
	t2.tm_mon = 1;
	t2.tm_year = 2025 - 1900;
	t2.tm_wday = 0;
	t2.tm_isdst = 0;
	settime = mktime(&t2);
	printf("2025/1/31/ 00:00:00　は　1900/1/1 00:00:00　から%-10d秒\n",
		settime);
	printf("ctime\t:%s", ctime(&settime));
	return 0;
}
*/
/*
1900/1/1 00:00:00から1759884300秒経過しています
ctime   :Wed Oct  8 09:45:00 2025

localtime:2025/10/08 09:45:00   です
2025/1/31/ 00:00:00　は　1900/1/1 00:00:00　から1738249200秒
ctime   :Fri Jan 31 00:00:00 2025
*/
/*4-3ex
#include<stdio.h>
#include<time.h>
int main(void) {
	int data;
	time_t start, end;
	clock_t cl_start, cl_end;
	cl_start = clock();
	time(&start);
	printf("何か数値を入力してください\n");
	scanf("%d", &data);
	cl_end = clock();
	time(&end);
	printf("あなたが入力した値は%dです\n", data);
	printf("入力にかかった時間は%8.0lf秒です\n", difftime(end, start));
	printf("入力に掛かったプロセス時間は%8.3lf秒です\n",
		(cl_end - cl_start) / CLOCKS_PER_SEC);
	return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	system("echo test");
	printf("windir=%s\n", getenv("windir"));
	return 0;
}*//*
#include<stdio.h>
#include<stdarg.h>
int sum(int sum_data, ...);
int main(void) {
	printf("sum=%3d\n", sum(1,2,-1 ));
	printf("sum=%3d\n", sum(1, 2,3, -1));
	printf("sum=%3d\n", sum(1, 2,3,4, -1));
	return 0;
}
int sum(int sum_data, ...) {
	int ans = sum_data;
	int data;
	va_list argptr;
	va_start(argptr, sum_data);
	while ((data = va_arg(argptr, int)) != -1)
		ans += data;
	va_end(argptr);
	return ans;
}
*//*
sum=  3
sum=  6
sum= 10
*//*
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	FILE* fp;
	fp = fopen("testfile", "w");
	if (fp == NULL) {
		printf("ﾌｧｲﾙが開けません\n");
		exit(1);
	}
	fprintf(fp, "testfile");
	fclose(fp);
	return 0;
}*/
/*
ﾌｧｲﾙを管理しているのはOSなので、既存のﾌｧｲﾙの操作権をOSに依頼するのは
分かるのですが、無ければ新規作成という動作になるのが、理解が難しいです。
またwで書き込みでなく、新規作成または上書きという動作になる理由、英語で
のニュアンスなんかも知りたいです。
「w」モードの目的は、単にファイルを開く事ではなく、
「これから『書き込みする為の』まっさらな白紙を用意する」こと。
動作的には、メモ帳などで「新規作成」や「上書き保存するのと全く同じ」
ワードを開き、新規作成を押すと、ワードは書き込むためのまっさらな
白紙文書を用意してくれる。
fopen("new_file.txt","w")は、OSに、
「new_file.txt」というﾌｧｲﾙに書き込みたい、無ければ書き込み用白紙を用意して
と言っているようなもの。

ここで「fgetsを使ったらどういう記述でどういう動作になりますか？」
そういえばなぜ"w"の様にアスキーそのままで表示できる命令を""で囲むのですか？
⇒fopenの様なC言語の標準ライブラり関数の多くが、引数として
「文字列『char*』を受け取る様に設計されている」為。
fopen関数のプロトタイプ宣言部

FILE *fopen(const char *filename, const char *mode);)
２番目の引数modeの型がconst char*型つまり文字列へのポインタで無ければならない
と、constで明確に定めれらている。
C言語では'w'と"w"は明確に区別されているので、１文字でも""で囲む
具体的にどう区別されているの？
⇒「'w'(文字)」内部的に文字コードの119が記録されたコイン。それ値以上の情報は無い
	「"w"(文字列)」は中に'w'のコインと、'\0'が入っている箱の「住所」
*/
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	FILE* fp;
	int data[5] = { 3,14,15,9,26 };
	fp = fopen("binfile", "wb"); //"wb"bはbinaryﾓｰﾄﾞ。改行も特別扱いせず。
	if (fp == NULL) {				//データを01のありのままで扱う。
		printf("file open error\n");
		exit(1);
	}
	fwrite(data,  sizeof(int),  sizeof(data) / sizeof(int),  fp);
	/*(第1引数：書込みたいデータが格納されている場所の先頭アドレス,
	* 第2引数：
	*/

	fclose(fp);
}
/*
メモリ上にある整数配列のデータを、そのままの形(バイナリとして)ﾌｧｲﾙに書込む動作
fprintf(テキスト書込み)---人間が読める。例：fprintf(fp, "%d", 123);
fwrite(バイナリ書込み)---fwrite(&num,...)と書くと、int型の変数numがメモリ上で
表現されているﾋﾞｯﾄﾊﾟﾀｰﾝそのもの（例4バイトのデータ）がそのままﾌｧｲﾙに書込まれる
人間がテキストエディタで開いても文字化けして意味不明に見える。

if (fp == NULL) {
		printf("file open error\n");
		exit(1);
	}なぜこれでプログラムを異常終了させる記述になるのか？
*/





