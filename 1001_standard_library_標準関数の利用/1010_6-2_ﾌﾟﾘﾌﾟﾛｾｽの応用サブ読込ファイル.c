#include<stdio.h>
#include<string.h>
#include"1010_6-2_ÌßØÌßÛ¾½‚Ì‰—p.h"
struct item datainput(int number,char *str,int price){
	struct item data;
	data.number = number;
	strcpy(data.name, str);
	data.price = price;
	return data;
};