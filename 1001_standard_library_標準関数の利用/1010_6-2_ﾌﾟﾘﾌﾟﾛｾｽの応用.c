#include<stdio.h>
#include"1010_6-2_ﾌﾟﾘﾌﾟﾛｾｽの応用.h"
#include<string.h>
struct item datainput(int number, char* str, int price);
int main(void) {
	struct item data1;
	data1 = datainput(1, "フロッピーディスク", 100);
			/*別の.cﾌｧｲﾙで定義された関数を呼び出すには、
			 main.cがその関数の仕様書である、
			ﾌﾟﾛﾄﾀｲﾌﾟ宣言を知っている必要がある。
			ﾍｯﾀﾞﾌｧｲﾙ部という呼び書き方でよいのでしょうか？
			int main()の上に記述されているので、先にﾌﾟﾘﾌﾟﾛｾｽが
			別のｿｰｽﾌｧｲﾙを読み込んで、mainの上に別ｿｰｽﾌｧｲﾙに書かれた
			定義を挿入してくれるイメージで良いでしょうか？
			→少し違う。ﾌﾟﾘﾌﾟﾛｾｽは確かにincludeされた別ﾌｧｲﾙの中身
			*/
	printf("%-2d,%-20s,%5d\n", 
		data1.number, data1.name, data1.price);
	return 0;
}
/*
#include<stdio.h>
#include<string.h>
#include"1010_6-2_ﾌﾟﾘﾌﾟﾛｾｽの応用.h"
struct item datainput(int number,char *str,int price){
	struct item data;
	data.number = number;
	strcpy(data.name, str);
	data.price = price;
	return data;
* 
#pragma once
#ifndef __ITEM
#define __ITEM
struct item {
	int number;
	char name[20];
	int price;
};
#endif // !__ITEM
*/