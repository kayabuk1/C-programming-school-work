#include<stdio.h>

int main(void) {
	int nyen=0, xko=0;
	double nx=0;

	printf("���i�̒P�������\n:");
	if (scanf("%d", &nyen) != 1) {
		printf("���p�����œ��͂��Ă��������B\n");
		return 0;
	}else if (nyen <= 0) {
		printf("���i�P����0�𒴂���l����͂��Ă�������\n");
		return 0;
	}

	printf("�w���������\n:");
	if (scanf("%d", &xko) != 1) {
		printf("���p�������͂��Ă��������B\n");	
		return 0;
	}else if (xko <= 0) {
		printf("�w������0�𒴂���l����͂��Ă�������\n");
		return 0;
	}
	
	if (xko < 10) { nx = nyen * xko; }
	else if (xko >= 10 && xko < 20) { nx = 0.95 * (nyen * xko); }
	else if (xko >= 20 && xko < 50) { nx = 0.90 * (nyen * xko); }
	else if (xko >= 50&&xko<90) { nx = 0.85 * (nyen * xko); }
	else if (xko >= 90) { nx = 0.80 * (nyen * xko); }
	if (nyen >= 10000) { nx = nx - 500; }

	printf("�w�����i�́A%d�~�ł��B\n",(int)nx );
	
	return 0;

}
