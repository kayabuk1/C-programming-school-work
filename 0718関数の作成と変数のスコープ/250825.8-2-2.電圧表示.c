#include<stdio.h>

void print_voltage(double volt);

int main(void){
	double volt;
	printf("�v�������d�������: ");
	scanf("%lf", &volt);
	print_voltage(volt);
	return 0;
	}

void print_voltage(double volt) {
	printf("�v�������d���́A%g[V]�ł��B\n", volt);
}