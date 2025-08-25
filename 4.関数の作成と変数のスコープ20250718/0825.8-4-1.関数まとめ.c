#include<stdio.h>

int calc_ctax(int price,double tax);
void print_fainal_price(double price);

int main(void) {
	int price;
	double tax = 1.1;
	double final_price;

	printf("税別価格を入力：");
	scanf("%d", &price);
	
	final_price=calc_ctax(price, tax);
	print_fainal_price(final_price);


	return 0;
}

int calc_ctax(int price,double tax) {
	return price * tax;
}
void print_fainal_price(double price) {
	printf("税込み価格は、「%g円」です！\n", price);
}