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
	printf("��L�̗l�ɏ��i�f�[�^����͂��Ă�������\n\n");

	ITEM b = get_item();
	printf_item(b);
}
void printf_item(ITEM a) {
	printf("���i��\t�F%s\n", a.name);
	printf("�̔����i�F%u\n", a.sell_price);
	printf("�d�����i�F%u\n", a.buy_price);
	printf("�݌ɐ�\t�F%u\n", a.num);
}
ITEM get_item(void) {
	ITEM temp;
	int bufferclear;
	printf("���i�f�[�^����͂��Ă�������\n");
	printf("���i���F");
	scanf("%63s", temp.name);
	printf("\n�̔����i�G");
	scanf("%u", &temp.sell_price);
	printf("\n�d�����i�F");
	scanf("%u", &temp.buy_price);
	printf("\n�݌ɐ��F");
	scanf("%u", &temp.num);
	while ((bufferclear = getchar()) != '\n' && bufferclear != EOF);
	printf("-----------------------------------------------------\n");
	return temp;
}