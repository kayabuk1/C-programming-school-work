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

int main(void) {
	ITEM* ip;
	ITEM a;
	ip = &a;
	strcpy(ip->name, "usb memory");
	ip->sell_price = 1200;
	ip->buy_price = 500;
	ip->num = 50;
	printf_item(a);
	return 0;
}
void printf_item(ITEM a) {
	printf("商品名\t：%s\n", a.name);
	printf("販売価格：%d\n", a.sell_price);
	printf("仕入価格：%d\n", a.buy_price);
	printf("在庫数\t：%d\n", a.num);
}