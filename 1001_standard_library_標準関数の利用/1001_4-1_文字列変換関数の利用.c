#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	char str[] = "100.0 256.0", * ptr;

	printf("%d\n", atoi(str));
	printf("%.1f\n", atof(str));
	printf("%d\n", atol(str));

	printf("最初に取得した実数：%lf\n", strtod(str, &ptr));
	printf("残った文字列：%s\n", ptr);
	printf("次に取得した実数:%lf\n", strtod(ptr, &ptr));

	printf("100を2進数として取得：%d\n", strtol(str, &ptr, 2));
	printf("100を8進数として取得：%d\n", strtol(str, &ptr, 8));
	printf("100を10進数として取得：%d\n", strtol(str, &ptr, 10));
	printf("100を16進数として取得：%d\n", strtol(str, &ptr, 16));

	sprintf(str, "%d", 50);
	printf("数値を文字列に変換した結果：%s\n", str);
	return 0;
}
/*
100
100.0
100
最初に取得した実数：100.000000
残った文字列： 256.0
次に取得した実数:256.000000
100を2進数として取得：4
100を8進数として取得：64
100を10進数として取得：100
100を16進数として取得：256
数値を文字列に変換した結果：50
*/ 