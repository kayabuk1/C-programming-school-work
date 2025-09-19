#include<stdio.h>

void print_wattage(double volt,double amp);

int main(void) {
	double volt, amp;
	printf("計測した電圧を入力: ");
	scanf("%lf", &volt);
	printf("計測した電流を入力: ");
	scanf("%lf", &amp);
	
	print_wattage(volt,  amp);

	return 0;
}
//関数中の変数は関数のスコープ内でのみ有効。
//v=voltを関数の中で行っている。
//仮引数という。このおかげで、main関数の変数をそのまま使える。
//関数の再利用性と保守性が向上する。
void print_wattage(double v, double a) {
	printf("\n計測した電圧は%g[V]、電流は%g[A]、"
		"ワット数は %g[w]です。\n", v, a, v * a);
}