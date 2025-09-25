#include<stdio.h>
#include<string.h>

struct Item
{
	char			name[64];
	unsigned int	sell_price;
	unsigned int	buy_price;
	unsigned int	num;
};
typedef struct Item ITEM;

void printf_item(ITEM shouhinNo);
ITEM get_item(void);

int main(void) {
	ITEM* ip;
	ITEM a;
	ip = &a;
	strcpy(ip->name, "usb memory");
	ip->sell_price = 1200;
	ip->buy_price = 500;
	ip->num = 50;
	printf_item(a);
	printf("上記の様に商品データを入力してください\n\n");

	ITEM b = get_item();
	printf_item(b);
}
void printf_item(ITEM a) {
	printf("商品名\t：%s\n", a.name);
	printf("販売価格：%u\n", a.sell_price);
	printf("仕入価格：%u\n", a.buy_price);
	printf("在庫数\t：%u\n", a.num);
}
ITEM get_item(void) {
	ITEM temp;
	int bufferclear;
	printf("商品データを入力してください\n");
	printf("商品名：");
	scanf("%63s", temp.name);
	printf("\n販売価格；");
	scanf("%u", &temp.sell_price);
	printf("\n仕入価格：");
	scanf("%u", &temp.buy_price);
	printf("\n在庫数：");
	scanf("%u", &temp.num);
	while ((bufferclear = getchar()) != '\n' && bufferclear != EOF);
	printf("-----------------------------------------------------\n");
	return temp;
}