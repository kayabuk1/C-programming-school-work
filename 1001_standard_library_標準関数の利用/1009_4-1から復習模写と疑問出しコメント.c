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
//1009_4-3_時間関数time.h模写
#include<stdio.h>
#include<time.h>
int main(void) {
	time_t now, settime;//構造体time_t型の変数nowとsettimeを宣言(実はlong型の変数) 
			//time_tはlong型の別名とは？
			//long型ってlong int型のことでは無かったの？元々は時間を扱う為の型だったの？
			// →たまたま長大な値になる時刻の入れ物として丁度良かったのでlong型を使い別名つけただけ。
			//「time_t」とは時刻を格納する為の型のエイリアスとtypedefで定められている。
			//longよりもtime_tを使う事で異なる環境でも動作する移植性が高められているとのこと。
			//異なる環境とは？具体的には？→32bitCPUは4ﾊﾞｲﾄ、64bitCPUはﾊﾞｲﾄになってしまう。
	struct tm* t1, t2;//構造体tm型ﾎﾟｲﾝﾀ型の変数t1とt2を宣言。tm型とは？どんな構造体？
			//tmはtimeの略。time_tがただの秒数だったのに対して、こちらは年月日日時分秒といった各要素に
			//分解されたカレンダーの様な構造体。メンバ(構造体の変数)に
			// 「tm_sec,tm_min,tm_hour,tm_mday(1-31),tm_mon(0-11,+1して使う),tm_year,tm_wday(曜日)」が居る
	t2.tm_sec = 0;
	t2.tm_min = 0;		
	t2.tm_hour = 0;
	t2.tm_mday = 0;
	t2.tm_mon = 1;
	t2.tm_year = 2025 - 1900;
	t2.tm_wday = 0;
	t2.tm_yday = 0;
	t2.tm_isdst = 0;
	settime = mktime(&t2);
	printf("2025/1/31 00:00:00 は 1900/1/1 00:00:00 から %10d経過しています。\n", settime);
	printf("ctime\t:%s", ctime(settime));
				//maketimeの略だと思うけれど、なんでtm型変数t2のｱﾄﾞﾚｽだけで、各メンバのｱﾄﾞﾚｽは渡さないで
				//時刻を設定できるの？
	time(&now);//time()関数---現在の時刻を1970/1/1,00:00:00を基準に取得する関数
				//文字コード的？バイナリ？的にはどんな形で取得されるの？
				//long型整数値のビットパターンがそのまま返される。
				//因みにtime()関数は戻り値でも現在の時刻を返すのでnow = time(NULL)と書ける。
	printf("1900/1/1 00:00:00　から　%10d秒経過しています\n", now);
			//1970/1/1 00:00:00が基準のものあると聞いたけれど、それとの違いは？
			//そもなぜ1970年が基準になった？UNIXエポックとは？UNIX時間とは？→UNIXが本格的に開発されたのが
			// 1969～1970年ごろだった。
			//なぜtm_yearは1900/1/1が基準？→ﾒﾓﾘは当時はとても貴重1900の差分の80で年が表示出来た。
			// localtime()とは？→現地時間。time()が返す値はUTC(協定世界時)。それを自分のPCの設定に変換する
	printf("ctime\t:%s\n", ctime(&now));//ctime()とはそも何？何の略？%sだけで文字列になぜ変換出来る？
			//「covert time」の略。ﾊﾞｲﾅﾘ整数値のtime_tの秒数を受け取り、それを人間が読める形でかつ、
			//char型の文字列に変換して返す動作をする。戻り値がWed Oct 8 09:45:00 2025\nの様な文字列なので
			//そのまま%sで表示が出来る。
			//なんでコピーではなくて、ｱﾄﾞﾚｽ演算子で元データを変更しに行っているの？
			//C言語の古い関数では、long型の様な比較的大きなﾃﾞｰﾀは、コピーする値渡しよりもｱﾄﾞﾚｽ渡しの方が
			//わずかに効率が良いと考えられていた。では渡すのは&ではなくて*無しのﾎﾟｲﾝﾀptrとかでも良いの？
			//ポインタを渡すことで、関数にNULLを渡せるようにする。←はなぜそうなるの？
	t1 = localtime(&now);//現地時間に調整してくれる関数。日本標準時はJST 9
}	
/*
*time.hは疑問点がたくさん出てきて全然模写が進まないね汗。
* 
*/
