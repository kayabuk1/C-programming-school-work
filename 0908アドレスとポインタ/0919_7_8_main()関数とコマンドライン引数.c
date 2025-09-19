#include<stdio.h>

int main(int argc, char* argv[]) {

	int i;
	printf("argcの値は%d\n", argc);
	for (i = 0;i < argc;i++)
		printf("argv[%d]の文字列は,%s\n", i, argv[i]);

	return 0;
}
/*
「argc」は「argument count」の略。
「argument」は「引数」、「count」は数。
*プログラムに渡されたコマンドライン引数が、
* 「全部で何個あるか」を示す整数。
* プログラム名
*1970年代のC言語やUNIXの初期、プログラマーは
*タイプ数を減らす為。短い変数名を好んだ。
*
*/