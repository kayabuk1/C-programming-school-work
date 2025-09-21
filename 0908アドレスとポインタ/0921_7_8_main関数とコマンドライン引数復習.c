#include<stdio.h>

int main(int argc,char *argv[]) 
{	
	int i;

	printf("argcの値は%d\n", argc);

	for (i = 0; i < argc; i++)
		printf("argv[%d]の文字列は、%s\n", i, argv[i]);

	return 0;
}
/*ﾌﾟﾛｼﾞｪｸﾄ右ｸﾘｯｸ　→　プロパティ　→　構成ﾌﾟﾛﾊﾟﾃｨ、ﾃﾞﾊﾞｯｸﾞ　→　
* コマンド引数ボックスに渡したい値をスペース区切りで入力（プログラム名は必要ない）→
* デバッグ実行でコマンドライン引数の実行が可能。
* 
* 出力結果
* argcの値は3　argcは引数の数を数える。自ら（プログラム名）も含むので1からカウント。
argv[0]の文字列は、C:\Users\tates\Source\Repos\C-programming-school-work\x64\Debug\0908アドレスとポインタ.exe
argv[1]の文字列は、100
argv[2]の文字列は、200
* 
* 
* argc,argv。argument count,vectorの略。
* argumentには口論という意味ではなく引数という意味。
* 元々語源になった言葉には、自らの主張することの正しさを「明らかにする」意味があった。
* そこから口論とう意味になってしまったが、関数に渡して、関数する働きを「明らかにする」
* 意味から、引数にargumentが使われている。
* vectorにはベクトル以外に「一次元配列」と言う意味がある。
*/