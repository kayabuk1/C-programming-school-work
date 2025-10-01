/*
問題:
先ほどのstaticのサンプルコードを改造して、int型ではなく
**struct Player型**のデータを保持できるようにしてください。

仕様:
name (文字列) と level (整数) というメンバを持つ 
struct Player を定義してください。
int* input(int x) の代わりに、
struct Player* update_player(const char* new_name, int new_level)
という新しい関数を作成してください。
update_player関数の中では、staticなstruct Player型の変数を
1つだけ使ってください。
main関数から、このupdate_player関数を2回呼び出してください。
1回目: "勇者", 10 を渡す。
2回目: "魔法使い", 15 を渡す。
呼び出すたびに、戻り値のポインタを使ってプレイヤーステータスを
表示し、static変数が上書きされてしまうことを確認してください。
ヒント:
構造体のnameメンバに文字列をコピーするには、
strcpy関数が必要です (#include <string.h>)。

期待される出力:
1回目の呼び出し後:
名前: 勇者, レベル: 10
--------------------
2回目の呼び出し後:
名前: 魔法使い, レベル: 15
--------------------
最初のポインタを再度表示:
名前: 魔法使い, レベル: 15
*/

#include<stdio.h>
#include<string.h>

struct Player {
	char name[21];
	int level;
};
struct Player* update_player(const char* new_name, int new_level);

int main(void) {
	struct Player data1, data2;
	data1 = *update_player("勇者",10);
	printf("data1=%s,%d\n", data1.name, data1.level);
	data2 = *update_player("魔法使い", 15);
	printf("data2=%s,%d\n", data2.name, data2.level);
}
struct Player* update_player(const char* new_name, int new_level) {
	static struct Player data;
	strcpy(data.name,new_name);
	data.level = new_level;
	return &data;
}