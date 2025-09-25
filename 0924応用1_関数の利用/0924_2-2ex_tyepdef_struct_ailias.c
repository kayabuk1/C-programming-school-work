#include<stdio.h>
#include<string.h>

struct Item {
	int number;
	char name[80];
	int price;
};

typedef struct Item SHOUHIN;

int main(void) {

	SHOUHIN data1, data2;

	data1.number = 1;
	strcpy(data1.name, "ﾌﾛｯﾋﾟｰﾃﾞｨｽｸ");
	data1.price = 100;

	data2 = data1;

	printf("%d%s%d\n", data1.number, data1.name, data1.price);
	printf("%d%s%d\n", data2.number, data2.name, data2.price);
	
	if (data1.number == data2.number &&
		strcmp(data1.name, data2.name) == 0 &&
		data1.price == data2.price)
		printf("data1とdata2は等しい\n");
	else
		printf("data1とdata2は等しくない\n");
	return 0;
}
/*
「typedef」は演算子でも関数でもなく、「予約語」。int,if,structと同じ。
「#define」はﾌﾟﾘﾌﾟﾛｾｯｻによる「単純な置換え」。ｺﾝﾊﾟｲﾗは「型」を意識しない。
「typedef」はｺﾝﾊﾟｲﾗが新しい**型ｴｲﾘｱｽ(別名)として正しく認識する。
*/
