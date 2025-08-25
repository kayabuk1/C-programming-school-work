#include<stdio.h>

int main(void) {
	int nyen=0, xko=0;
	double nx=0;

	printf("商品の単価を入力\n:");
	if (scanf("%d", &nyen) != 1) {
		printf("半角数字で入力してください。\n");
		return 0;
	}else if (nyen <= 0) {
		printf("商品単価は0を超える値を入力してください\n");
		return 0;
	}

	printf("購入個数を入力\n:");
	if (scanf("%d", &xko) != 1) {
		printf("半角数字入力してください。\n");	
		return 0;
	}else if (xko <= 0) {
		printf("購入個数は0を超える値を入力してください\n");
		return 0;
	}
	
	if (xko < 10) { nx = nyen * xko; }
	else if (xko >= 10 && xko < 20) { nx = 0.95 * (nyen * xko); }
	else if (xko >= 20 && xko < 50) { nx = 0.90 * (nyen * xko); }
	else if (xko >= 50&&xko<90) { nx = 0.85 * (nyen * xko); }
	else if (xko >= 90) { nx = 0.80 * (nyen * xko); }
	if (nyen >= 10000) { nx = nx - 500; }

	printf("購入価格は、%d円です。\n",(int)nx );
	
	return 0;

}
