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
	strcpy(data1.name, "�ۯ�߰�ި��");
	data1.price = 100;

	data2 = data1;

	printf("%d%s%d\n", data1.number, data1.name, data1.price);
	printf("%d%s%d\n", data2.number, data2.name, data2.price);
	
	if (data1.number == data2.number &&
		strcmp(data1.name, data2.name) == 0 &&
		data1.price == data2.price)
		printf("data1��data2�͓�����\n");
	else
		printf("data1��data2�͓������Ȃ�\n");
	return 0;
}
/*
�utypedef�v�͉��Z�q�ł��֐��ł��Ȃ��A�u�\���v�Bint,if,struct�Ɠ����B
�u#define�v�������۾���ɂ��u�P���Ȓu�����v�B���ׂ߲́u�^�v���ӎ����Ȃ��B
�utypedef�v�ͺ��ׂ߲��V����**�^��ر�(�ʖ�)�Ƃ��Đ������F������B
*/
