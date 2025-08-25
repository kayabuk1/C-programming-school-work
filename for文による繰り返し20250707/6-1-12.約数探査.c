#include<stdio.h>

int main(void) {

	int baseNum, yakuNum,warukazu,count= 0;

	printf("約数を探す数値を入力。\n:");
	do {
		if (scanf("%d",&baseNum) != 1) {
			printf("半角数字で入力してください。\n:");
			while (getchar() != '\n');
		}
		else {
			break;
		}
	}
	while (1);
	
	/*
	for (baseNum;baseNum % 2 == 0 || baseNum % 3 == 0 || baseNum % 5 == 0&& baseNum/2 > 2;) {
		if (baseNum % 3 == 0 && baseNum / 2 > 1) {
			yakuNum = baseNum / 3;
			baseNum = yakuNum;
			printf("%dは約数です。\n", yakuNum);
		}
		else if (baseNum % 2 == 0 && baseNum / 2 > 1) {
			yakuNum = baseNum / 2;
			baseNum = yakuNum;
			printf("%dは約数です。\n", yakuNum);
		}
		else if(baseNum%5==0&&baseNum/2>1)
		{
			yakuNum = baseNum / 5;
			baseNum = yakuNum;
			printf("%dは約数です。\n", yakuNum);
		}
		else {
			printf("素数\n");
			return 0;
		}
	}printf("素数\n");
	return 0;
	*/

	for (warukazu = 2;baseNum / 2 >= warukazu;warukazu++) {
		if (baseNum % warukazu == 0) { 
			printf("%dは約数です\n", warukazu);count++; }
	}
	if (count == 0) { printf("素数"); }
	else { printf("約数は%d個", count); }
	return 0;
}
