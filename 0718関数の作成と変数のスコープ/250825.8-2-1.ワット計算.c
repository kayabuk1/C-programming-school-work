#include<stdio.h>

void print_wattage(double volt,double amp);

int main(void) {
	double volt, amp;
	printf("�v�������d�������: ");
	scanf("%lf", &volt);
	printf("�v�������d�������: ");
	scanf("%lf", &amp);
	
	print_wattage(volt,  amp);

	return 0;
}
//�֐����̕ϐ��͊֐��̃X�R�[�v���ł̂ݗL���B
//v=volt���֐��̒��ōs���Ă���B
//�������Ƃ����B���̂������ŁAmain�֐��̕ϐ������̂܂܎g����B
//�֐��̍ė��p���ƕێ琫�����シ��B
void print_wattage(double v, double a) {
	printf("\n�v�������d����%g[V]�A�d����%g[A]�A"
		"���b�g���� %g[w]�ł��B\n", v, a, v * a);
}