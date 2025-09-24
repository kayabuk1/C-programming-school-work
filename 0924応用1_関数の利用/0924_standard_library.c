#include<stdio.h>
#include<ctype.h>//character typeの略。１文字の種類変換、判定関連の関数のﾍｯﾀﾞﾌｧｲﾙ

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c) != 0)
			putchar(toupper(c));
		else if (isupper(c) != 0)
			putchar(tolower(c));
		else
			putchar(c);
	}
	return 0;
}
/*
「upper」「lower」の由来
昔の印刷所では、文字のハンコを木のケースに整理して保管していた。
その際ｱﾙﾌｧﾍﾞｯﾄの大文字は、作業台の上段（upper）のケースに、
小文字は、下段のケースに置くのが一般的だった。
そこからupper-case-letters → uppercase(大文字),lowercase(小文字)という言葉が生れた。
なので「islower」「isupper」はその１文字は、小文字？大文字？と聞いているだけ。
*/