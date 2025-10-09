/*1009文字列変換関数模写
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char str[] = "100 256.0", * ptr;
	printf("%-5d\n", atoi(str)); //ASCII to Int
	printf("%-5lf\n", atof(str)); //ASCII to Float
	printf("%-5d\n", atol(str)); //ASCII to Long

	printf("最初に取得した実数:%5lf\n", strtod(str, &ptr)); //文字列→double型に変換
	//	 strtod(文字列,読込終了後の先頭ｱﾄﾞﾚｽ)
	printf("残った文字列\t:%5s\n", ptr);
	printf("次に取得した実数\t:%5lf\n", strtod(ptr, &ptr)); //文字列→double型に変換
	/*
	書式指定子では無く変換指定子？
	strtod()の終了後の先頭ｱﾄﾞﾚｽとは？char*ﾎﾟｲﾝﾀ配列型変数？ptrにはまだ何も入れていないけれどOK？
		printf("最初に取得した実数:%5lf\n", strtod(str, &ptr)); //文字列→double型に変換
										//	 strtod(文字列,読込終了後の先頭ｱﾄﾞﾚｽ)
		printf("残った文字列\t\t:%5s", ptr);
		printf("次に取得した実数\t:%5lf\n", strtod(ptr, &ptr));
		なんでこれで読み込んで行くとﾎﾟｲﾝﾀが移動するのだろう。最後は配列名じゃなくてｱﾄﾞﾚｽそのもでOKなの？
		→配列名＝先頭要素のアドレスで内部的にも同じものとして扱われるから問題無いんだった。
		A.str()の2つ目の引数は、関数に情報を渡す為ではなく、受け取る為にある。
		scanf()で&strみたいに書き込む場所の情報を渡すのと同じイメージかな？
		引き渡す数なんて名前なのに実際は引き受けてるのはずるい？でもなんで戻り値にしなかったの？
		→「C言語の関数は『１つしか』戻り値を返せない」為、主要な結果(変換した数値)は戻り値で、
		副次的な結果(終了位置)は、引数で渡されたﾎﾟｲﾝﾀ(&ptr)を通じて呼び出し元の数値を直接書き換える事で
		返す。今回は&ptrでﾎﾟｲﾝﾀ(メモ)自体の格納場所にアクセスしてptr=&str[3]という情報に書き換えている
	*//*
	printf("100を２進数として取得;%4d,p=%p\n", strtol(str, &ptr, 2), ptr);
	printf("100を８進数として取得;%4d,p=%p\n", strtol(str, &ptr, 8), ptr);
	printf("100を16進数として取得;%4d,p=%p\n", strtol(str, &ptr, 10), ptr);
	printf("100を10進数として取得;%4d,p=%p\n", strtol(str, &ptr, 16), ptr);
	sprintf(str, "%d", 50); //数値を文字列に変換
	printf("数値を文字列に変換した結果:%s,p=%p\n", str, ptr);
	*//*
	そもそもlong型整数の役割とは？int型の役割との違いは？→表現出来る数値の最小範囲
	sizeof(short)<=sizeof(int)<=sizeof(long)<=sizeof(long long)と定められている。
	昔16ビットPCなどint=16ビット(約±3万)、long=32bit(約±21億)。現在32bit/64bitpc:int=32bitが多い。
	環境により異なってくる。
	intにはそのコンピュータにとってもっとも自然で効率的なサイズの整数というニュアンスがある。
	strtoi()は無い。大は小を兼ねる。strtolならそのPCにとってほぼ全ての整数を表現出来る。
	ちなみにstrtoll()はある。
	sprintf(str, "%d", 50); //数値を文字列に変換。ちなみこの関数は引数についてどう定義されている？
	逆のatoi()やstrtol()より引数がやや複雑なのはなぜ？
	A.例えば「"%d円の%s"」と言う書式(設計図)と「"100"と"リンゴ"」という複数の部品を受け取り
	新しい文字列を作る複雑な動作をする為。なので、どこに完成品(新しい文字列)を納品するか、
	どんな仕様(書式)でつくるか、どの部品(%の数に合わせて可変長)を使うかのより多くの情報が必要になる
	100
	100.000000
	100
	最初に取得した実数:100.000000
	残った文字列    : 256.0
	次に取得した実数        :256.000000
	100を２進数として取得;   4,p=000000DC81CFFBAB
	100を８進数として取得;  64,p=000000DC81CFFBAB
	100を16進数として取得; 100,p=000000DC81CFFBAB
	100を10進数として取得; 256,p=000000DC81CFFBAB
	数値を文字列に変換した結果:50
	*/
	/*strtodやstrtolは読み込む文字が無くなったらNULLを返す為、同じ型のﾃﾞｰﾀを繰り返し読むときに便利
	なんで便利か？→ループの旅にptrが自動的に次の文字の開始位置まで進んでくれるので。
	ptr = "10.0 20.0 25.0";
	do {
		printf("%f\n", strtod(ptr, &ptr));
	} while (*ptr != '\0'); //0でも良いが人間に文字列の終わりかどうかﾁｪｯｸしている意図が伝わる\0が良い
*//*
 直接charﾎﾟｲﾝﾀ型の変数pに文字列を代入してもなぜ大丈夫？→コンパイル時に""で囲まれた文字列は内部的に
 先頭要素のアドレスに変換されている。
 *//*1009_4-2_文字列操作系関数(string.h)
#include<stdio.h>
#include<string.h>
int main(void) {
	char str01[] = "cabbae\\0 12345\0\\012345", str02[80] = "";	//strcpyで使う為の空文字列を用意
	printf("str:%15s\n", str01); //ｴｽｹｰﾌﾟｼｹｰﾝｽで\0が表示される
	printf("strlen(str):%15d\n", strlen(str01)); //\0の手前まで\0 12345の8文字
	printf("sizeof(str):%15zu\n", sizeof(str01) / sizeof(str01[0]));
	//配列確保に使われたﾒﾓﾘｻｲｽﾞ=\0含む＋自動追加の\0=17バイト

	printf("strchr(str01,'1'):%15s\n",strchr(str01,'1'));//文字検索後最初に発見位置へのﾎﾟｲﾝﾀを戻す
	printf("strstr(str01,\"12\"):%15s\n", strstr(str01, "12"));//文字列検索
	//					↑の\はｴｽｹｰﾌﾟｼｹｰﾝｽ。printfに終わりの""と勘違い指せないために前に付ける
	printf("strcspn(str01, \"12c\"):%15d\n", strcspn(str01, "12c"));
	//少し特殊。先頭から「12cのどれか１文字『にも』一致しない文字」が何時続くかを数えるので→3
	//実用的にはどう使うのだろう？\0とかも指定出来るのかな？
//区切り文字「,」等が最初に出てくる場所を探すのに便利。\0も指定出来る
//み合わせて"Sato,25,Tokyo"の様なﾃﾞｰﾀからSatoだけ抜き出したりする。

	printf("strspn(str01,\"abc\"):%15d\n", strspn(str01, "abc"));
	//これも特殊。先頭から"abc"だけで構成された部分が何文字続くか調べる
	//これもどんな時に使うのだろう？
	//文字列の先頭が許可された文字だけで構成されているか調べる時。例ユーザIDなど。
	//さっきから警告に出てくる%zdとはなんだろうか？
	strcpy(str02, str01);
	printf("str02:%s\n", str02);
	strncpy(str02, str01, 5); //strncpyはヌル文字を自動追加してくれないので自分で追加する必要がある
	printf("str02:%s\n", str02);//C言語のNULLはRDBMSのNULLとは意味が違うので注意。
	if (strncmp(str01, str02, 7)== 0)
		printf("strncmp(str01,str02,5)==0\n");
	else
		printf("strncmp(str01,str02,5)!=0\n");
	strncat(str01, "ABCDEFG", 3);
	strcat(str02, "ABCDEFG");
	printf("str01:%s\n", str01);
	printf("str02:%s\n", str02);
	return 0;
}*/
/*
str: cabbae\0 12345
strlen(str):             14
sizeof(str):             23
strchr(str01,'1'):          12345
strstr(str01,"12"):          12345
strcspn(str01, "12c"):              0
strspn(str01,"abc"):              5
str02:cabbae\0 12345
str02:cabbae\0 12345
strncmp(str01,str02,5)==0
*/
