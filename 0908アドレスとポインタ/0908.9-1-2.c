#include<stdio.h>

int main(void) {

	int num = 100;
	int* p;
	p = &num;

	printf("�ϐ�num�̒l��%d�ł�\n", num);
	printf("�ϐ�num�̃A�h���X��%d�ł�\n", &num);
	printf("�|�C���^�ϐ�p�̒l��%d�ł�\n", p);
	printf("�|�C���^�ϐ��̎w��������̒l��%d�ł�\n", *p);
	return 0;

}
/*�y���s���ʁz
�ϐ�num�̒l��100�ł�
�ϐ�num�̃A�h���X��1794897396�ł�
�|�C���^�ϐ�p�̒l��1794897396�ł�
�|�C���^�ϐ��̎w��������̒l��100�ł�
*/