//「文字列は、終端に\0を持つと定められたchar型配列である」

#include<stdio.h>

int main(void) {

	int i;
	char j;

	char a[5];
	char b[] = { 'A','B','C','D','E' };
	char c[] = "ABCDE";

	for (i = 0;i < 5;i++)
		a[i] = 'A' + i;

	for (i = 0;i < 5;i++)
		printf("iの値は%d,a[i]は%c,b[i]は%c,c[i]は%c\n", i, a[i], b[i], c[i]);
	printf("iの値は%d,aは%s,bは%s,cは%s\n", i, a, b, c);

	printf("%d\n", sizeof(j));//char型一つ分のバイト数を表示
	printf("%d\n", sizeof(a));//char型５個分のデータサイズ＝5バイト
	printf("%d\n", sizeof(b));//同じくchar型5個分＝40ビット
	printf("%d\n", sizeof(c));//char型6個分。最後に自動的に「\0」が追加されている

	return 0;
}/*実行結果
 iの値は0,a[i]はA,b[i]はA,c[i]はA
iの値は1,a[i]はB,b[i]はB,c[i]はB
iの値は2,a[i]はC,b[i]はC,c[i]はC
iの値は3,a[i]はD,b[i]はD,c[i]はD
iの値は4,a[i]はE,b[i]はE,c[i]はE
iの値は5,aはABCDEﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌABCDEﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌABCDE,bはABCDEﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌﾌABCDE,cはABCDE
1
5
5
6*/