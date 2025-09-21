#include<stdio.h>

int main(void) {

	char str[] = "testpoint";
	char* p = str;

	printf("strは%s\n", str);
	printf("pは%s\n", p);//配列名str ＝ &str[0] ＝ p(代入したので)
	
	while (*p != '\0') {
		putchar(*p);
		p++;
	}putchar('\n');
	while (*p) {
		putchar(*p);
		p++;
	}putchar('\n');
	//C言語には０以外の全数値がtrueとして扱われるルールがある。
	 //\0は内部的には0として扱われれる。なので\0でfalseとなる。

	return 0;
}