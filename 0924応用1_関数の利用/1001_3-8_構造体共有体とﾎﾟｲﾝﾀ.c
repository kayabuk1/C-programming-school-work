#include<stdio.h>
#include<string.h>

struct Item {
	int number;
	char name[21];
	int price;
};
int main(void) {
	struct Item data1, * p;

	data1.number = 1;
	strcpy(data1.name, "フロッピーディスク");
	data1.price = 100;

	p = &data1;

	printf("data1.number=%4d\n", data1.number);
	printf("(*p).number=%4d\n", (*p).number);
	printf("p->number=%4d\n", p->number);
	return 0;
}