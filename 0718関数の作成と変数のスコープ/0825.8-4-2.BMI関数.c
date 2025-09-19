#include<stdio.h>

double calc_bmi(double h, double w);
void print_bmi(double bmi);

int main(void) {
	double height, weight, bmi;
	printf("身長(cm)：");
	scanf("%lf", &height);
	printf("体重(kg)：");
	scanf("%lf",&weight);

	bmi=calc_bmi(height, weight);
	print_bmi(bmi);
	return 0;
}

double calc_bmi(double h, double w) {
	return w / ((h/100) * (h/100));
}
void print_bmi(double bm) {
	printf("あなたのBM指数は「%.2f」です\n", bm);
}