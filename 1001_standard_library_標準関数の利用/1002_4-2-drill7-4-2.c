#include<stdio.h>
#include<string.h>

int main(void) {

	char str[]="It is very important to get into the habio "
		"of studying during the first gurade.";
	printf("ｻﾝﾌﾟﾙの文字列は%s\n文字数は%3d文字です\n", str,
		strlen(str));
	printf("sizeof(str)を使った場合は、「\\0」まで含めて計算"
		"してくれるので、%3zu文字です\n",
		sizeof(str) / sizeof(str[0]));
	return 0;
}
/*
ｻﾝﾌﾟﾙの文字列はIt is very important to get into the habio of 
studying during the first gurade.
文字数は 79文字です
sizeof(str)を使った場合は、「\0」まで含めて計算してくれるので、 
80文字です
*/