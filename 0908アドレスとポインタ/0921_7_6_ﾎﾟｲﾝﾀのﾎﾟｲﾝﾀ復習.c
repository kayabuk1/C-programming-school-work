#include<stdio.h>
#include<stdlib.h>//standard library�W��ײ����stdio.h��string.h�̗l�Ȑ�啪��ȊO��
					//�l�X�ȕ֗��@�\���܂܂�Ă���B���ł����̃C���[�W�Ƃ̂��ƁB

void allocate_memory(int** p_ptr) {//main�ň����󂯎��������p_ptr�ւ̑���������
	*p_ptr = (int*)malloc(sizeof(int));
	printf("�֐����Ŋm�ۂ����������̃A�h���X�F%p\n", *p_ptr);
}
/*main()����n���ꂽ&a_ptr��2���߲��p_ptr�Ŏ󂯎��Bp_ptr=&a_atr�B
*�umalloc()�v��memory allocation�̗��Bad(�`��)+locare(�z�u����)�Ŋ��蓖�Ă�Ӗ��B
* OS��(sizeof(int)��=4�o�C�g��)�������m�ۈ˗����āA�u�m�ۏo�����������̐擪���ڽ��Ԃ��v
* malloc()�̖߂�l�̱��ڽ�͔ėp��void*�^�Ȃ̂ŃL���X�g����int�^���߲���ɁB
* ���̱��ڽ��*p_ptr�ɑ���B*p_ptr�͊ԐڎQ�Ƃ��߲���ϐ�a_atr���̂��w���Ă���̂ŁA
* ������malloc�Ŋm�ۂ������ڽ�������Ă���B
* mallco()�͕K��free()�ƃZ�b�g�Ŏg���B�g��Ȃ��ƃ��������[�N�̌����ɂȂ�B
* 
* int�^�̕ϐ��F�u�����v������ׂ̔�
* int* �^�̕ϐ��F�u�����̱��ڽ�v�����邽�߂̔�
* int** �^�̕ϐ��F�w�u�����̱��ڽ�v�̱��ڽ�x������ׂ̔�
* �����ꎟ�߲�����p����̗l�Ɍq���čs����Ƃ�����A
* ���ׂ߲͂ǂ������̒l�̏ꏊ��������Ȃ��BC������߲���ւ��߲���ƁA�߲���������ɋ�ʂ���
*/

int main(void) {

	int x, * p1, ** p2;
	x = 100;
	p1 = &x;
	p2 = &p1;

	printf("x�̒l��%d�A\t\t*p1�̒l��%d�A\t\t**p2�̒l��%d\n", x, *p1, **p2);

	printf("&x�̒l��%p�Ap1�̒l��%p�A*p2�̒l��%p\n", &x, p1, p2);

	printf("&p1�̒l��%p�Ap2�̒l��%p\n", &p1, p2);

	printf("&p2�̒l��%p\n\n", &p2);



	int* a_ptr = NULL;//�߲���ϐ���NULL�ŏ���������B

	printf("�ďo�O��a_ptr�F%p\n", (void*)a_ptr);//printf��%p���g���Ƃ���(void*)��
												//�L���X�g����̂��{���͐������Ƃ̂��ƁB
	
	allocate_memory(&a_ptr);

	printf("�ďo���a_ptr�F%p\n", (void*)a_ptr);

	if (a_ptr != NULL) {
		*a_ptr = 123;
		printf("�m�ۂ����������ɓ��ꂽ�l%d\n", *a_ptr);
		free(a_ptr);
	}

	return 0;
}
/*2���߲���͂ǂ���������ʂŎg���̂��H
* ���֐��̒��ŁA�Ăяo�����ɂ����߲���ϐ����̂��̂�ύX���������
* int�^�̕ϐ����֐����ŕύX����ɂ́A���̕ϐ��̱��ڽ�iint* p1�j���֐��ɓn�����B
* ���l�ɁAint*�^���߲���ϐ����֐����ŕύX����ɂ́A
* �����߲���ϐ��̱��ڽ�iint** p2�j��n���B
*/