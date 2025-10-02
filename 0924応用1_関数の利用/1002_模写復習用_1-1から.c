#include<stdio.h>
#include<ctype.h>

/*
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c) != 0)
			putchar(towlower(c));
		else if (isupper(c))
			putchar(tolower(c));
		else
			putchar(c);
	}
	return 0;
}
/*
なぜgetchar()は１文字を読み込むのに戻り値はint型なのか？
	→EOFを返すため。EOFは-1であり、char型では表現できないため。
	→char型は符号付きの場合-128~127までの範囲しか表現できない。
	→unsigned char型でも0~255までの範囲しか表現できない。
	→ASCIIコードは0~127までの範囲なので、char型で表現できるが、
	→EOFを表現できないので、int型で返す必要がある。
	→EOFは-1であり、int型であれば表現できる。
	→したがって、getchar()の戻り値はint型である必要がある。
	ユーザからのchar型の文字を受け取って、それをint型に変換して
	返すが、それをchar型に入れればputchar()で表示できる。
*/
int main(void) {
	int i, j;
	int ch;

	printf("  | 0| 1| 2| 3| 4| 5| 6| 7|\n");
	printf("--+--+--+--+--+--+--+--+--+\n");
	for (i = 0;i < 16;i++) {
		printf("%x|", i);
		for(j = 0;j < 8;j++) {
			ch = j * 16 + i;
			if (isalpha(ch) != 0)
				printf("%3x", ch);
			else
				printf("   ");
		}
		putchar('\n');
	}
	return 0;
}
/*
  | 0| 1| 2| 3| 4| 5| 6| 7|
--+--+--+--+--+--+--+--+--+
0|                50    70
1|             41 51 61 71
2|             42 52 62 72
3|             43 53 63 73
4|             44 54 64 74
5|             45 55 65 75
6|             46 56 66 76
7|             47 57 67 77
8|             48 58 68 78
9|             49 59 69 79
a|             4a 5a 6a 7a
b|             4b    6b
c|             4c    6c
d|             4d    6d
e|             4e    6e
f|             4f    6f
*/