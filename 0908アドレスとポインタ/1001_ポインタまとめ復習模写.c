/*⑴"abcdefg"と言う文字列の長さを測る関数を書け。
関数名は、length1,length2,length3。変数名はとすること*/
#include<stdio.h>

int length1(char str[]);
int length2(char* str);
int length3(char[]);

int main(void){}

int length1(char str[]) {
	int i = 0;
	while (str[i])//\0が出てくるまでカウンタ変数を0→7を進めて、7を返す。
		i++;
	return i;
}
int length2(char* str) {
}
