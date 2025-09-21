#include<stdio.h>

int main(void) {

	char* name[3] = { "miyao","suzuki","satou" };
	int i;

	for (i = 0; i < 3; i++)
		printf("%s\n", name[i]);

	return 0;
}
/*ﾎﾟｲﾝﾀの配列は、各文字列のﾃﾞｰﾀそのもでは無く、各文字列の先頭要素のアドレスのみ格納。
*/