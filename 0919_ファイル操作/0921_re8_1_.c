#include<stdio.h>
#include<stdlib.h>

struct Item {
	char name[64];
	unsigned int sell_price;
	unsigned int buy_price;
	unsigned int num;
};

int main(void) {

	FILE* fp;

	fp = fopen("0921_re8_1_.c", "r");
	if (fp == NULL) {
		printf("ファイルがオープンできません\n");
		return 1;
	}
	printf("ファイル0921_re8_1_.cをオープンしました\n");

	fclose(fp);
	printf("0921_re8_1_.cをクローズしました\n\n");

	/*ファイルをどの様な目的で開くか2つ目の引数で指定する。
	* "r"read	既存のファイルを読込専用で開く。ファイルが無い場合はエラー。
	* "w"write	書き込み専用でファイルを開く。ファイルが無ければ新規作成。
	*           あれば中身全消去
	* "a"append	追記専用でファイルを開く。ファイルが無ければ新規作成。
				あれば末尾にﾃﾞｰﾀ追加
	*
	* fopen()はﾌｧｲﾙを開く。それだけでなく成功すると、
	* そのﾌｧｲﾙを管理する為の情報（ｱﾄﾞﾚｽ）を
	* FILE構造体に返す動作をする。その時の戻り値の型はFILE*型*。
	* このﾌｧｲﾙｱﾄﾞﾚｽがその後ﾌｧｲﾙに対して操作する際の記述を簡単にしてくれる。
	*
	* fclose(fp)で渡すのが*fpではなくfpなのは、ファイル自体を閉じる関数では無く、
	* ﾌｧｲﾙとの接続を閉じる関数の為。ファイル管理して直接操作出来るのはOS。
	* OSにこのｱﾄﾞﾚｽのファイルとの接続を切るように依頼するので、
	* ｱﾄﾞﾚｽである(fp)で正しい。
	*/

	struct Item a;
	strcpy(a.name, "usb memory");
	a.sell_price = 1200;
	a.buy_price = 500;
	a.num = 50;
	printf("商品の名前\t販売価格\t仕入価格\t在庫数\n");
	printf("%-10s\t%8u\t&8u\t%6u\n",
		a.name, a.sell_price, a.buy_price, a.num);
}