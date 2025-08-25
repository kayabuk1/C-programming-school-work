/*データの入力*/
/*ファイル名はex_in.c*/
#include<stdio.h>

int main(void) 
{
	int a, b,c,d,e,f;

	//scanf("%d", &a);
	//scanf("%d", &b);
	scanf("%d%d%d%d%d%d", &a, &b,&c,&d,&e,&f);

	printf("aの値は%d,bの値は%d\n", a, b);
	printf("a+bは%d\n", a + b+c+d+e+f);

	return 0;
}