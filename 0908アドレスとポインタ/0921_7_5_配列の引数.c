#include<stdio.h>

int length1(char str[8]);//C言語は配列を引数として渡すことは出来ない。
int length2(char str[]);//引数として渡す配列の大きさは分からない。
int length3(char* str);//char *strでは配列先頭ｱﾄﾞﾚｽと単一変数のｱﾄﾞﾚｽの二つあり得る。
//int length4(char[]);
//int length5(char*);
/*ｺﾝﾊﾟｲﾗはchar str[]という表記を見て、char型へのﾎﾟｲﾝﾀつまりｱﾄﾞﾚｽ情報が
来るんだなとしか解釈しない。[8]に数字を入れても無視される。*/

int main(void) {
	char a[] = "abcdefg";//末尾\0が自動的に追加
	printf("文字数は、%d\n", length1(a));
	printf("文字数は、%d\n", length2(a));
	printf("文字数は、%d\n", length3(a));
	//配列aを渡す＝&a[0]を渡すのと同じ。

	return 0;
}
int length1(char str[]) {
	int i = 0;
	while (str[i])//\0に当たるまでi++して最後にiを返す。
		i++;
	return i;//なので 7 が返される。
}
int length2(char* str) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char* str) {
	char* begin = str;//受取ったｱﾄﾞﾚｽを別のbeginというﾎﾟｲﾝﾀ変数に保存
	while (*str)//ﾛｰｶﾙﾎﾟｲﾝﾀ変数*strが指すｱﾄﾞﾚｽの中身を取り出す。
		str++;	//つまり、&a[0]='l'これを偽\0になるまで続ける。
	return str - begin;
	//同じ配列を指すﾎﾟｲﾝﾀ同士を引算すると、その間の「要素個数」が計算出来る。
	//int型であっても、ﾎﾟｲﾝﾀ2‐ﾎﾟｲﾝﾀ1、と言うﾎﾟｲﾝﾀ同士の引き算記述を見ると、
	//内部的に、(ﾎﾟｲﾝﾀ1‐ﾎﾟｲﾝﾀ2)/sizeof(ﾎﾟｲﾝﾀのﾃﾞｰﾀ型)としてくれる。
}