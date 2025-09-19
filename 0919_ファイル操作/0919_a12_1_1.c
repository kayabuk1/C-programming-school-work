#include<stdio.h>
#include<string.h>

struct Item
{
	char name[64];
	unsigned int sell_price;
	unsigned int buy_price;
	unsigned int num;
};
int main(void) {
	struct Item a;
		
	strcpy(a.name, "usb memory");
	a.sell_price = 1200;
	a.buy_price = 500;
	a.num = 50;
	printf("¤•i‚Ì–¼‘O\t”Ì”„‰¿Ši\td“ü‰¿Ši\tİŒÉ”\n");
	printf("%-10s\t%8u\t%8u\t%6u\n", 
		a.name, a.sell_price, a.buy_price, a.num);
	return 0;
}