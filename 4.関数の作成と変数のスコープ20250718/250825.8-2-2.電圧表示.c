#include<stdio.h>

void print_voltage(double volt);

int main(void){
	double volt;
	printf("計測した電圧を入力: ");
	scanf("%lf", &volt);
	print_voltage(volt);
	return 0;
	}

void print_voltage(double volt) {
	printf("計測した電圧は、%g[V]です。\n", volt);
}