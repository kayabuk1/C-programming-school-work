#include<stdio.h>
//�ϐ��̃X�R�[�v
// �P�D
//�֐��̊O�Ő錾���ꂽ�ϐ��̓O���[�o���ϐ��ƌĂсA��۸��ёS�̂ŗL��
//���̃R�[�h�ł�int global;���O���[�o���ϐ��B
//�Q�D
//�֐��̒��Ő錾���ꂽ�ϐ��̓��[�J���ϐ��ƌĂсA���̊֐����ł̂ݗL���B
//���̃R�[�h�ł�func1,func2���Ő錾���ꂽlocal,global�����[�J���ϐ��B
//�֐����I������ƃ��[�J���ϐ��̓�����������������B
//�Ȃ̂œ������O�̕ϐ���ʂ̊֐��Ő錾���Ă����Ȃ��B

void func1(void);
void func2(void);

int global;
//�v���v���Z�b�T���֗^����̂͐擪�ɏ�����Ă�����̂Ƃ������Ƃł͂Ȃ��A
// ���ł͂��܂�w���q�����B
//�O���[�o���ϐ��̓R���p�C���ƃ����J���֗^����B

int main(void) {

	int local = 10;
	//���ʂȊ֐��ł���main�֐�����local�����[�J���ϐ��B
	// �ЂƂ̃X�R�[�v�o�p�̂Ȃ��ł̂ݗL���B

	printf("main�֐�()�Flocal=%d,global=%d\n", local, global);
	func1();
	printf("main�֐�()�Flocal=%d,global=%d\n", local, global);

	putchar('\n');

	printf("main�֐�()�Fglobal=%d\n",  global);
	func2();
	printf("main�֐�()�Fglobal=%d\n", global);

	return 0;
}
void func1(void) {
	int local;
	local = 20;
	//func1����߂�����Alocal�͏��������̂ŁA
	// main��local�ɂ͉e�����Ȃ��Blocal=10�̂܂܁B
	global = 200;
	printf("func1�֐�()�Flocal=%d,global=%d\n", local, global);
}
void func2(void) {
	int global;
	global = 20000;
	printf("func2�֐�()�Fglobal=%d\n", global);
}//�R���p�C���̓R�[�h�̒��̕ϐ����Q�Ƃ���x�ɁA�܂��ł������̃X�R�[�v
//�܂胍�[�J���X�R�[�v�istack�̈�j�𒲂ׂ�B�����ă��[�J���ϐ���������΁A
//�R���p�C���͂��̃��[�J���ϐ����g���A�O���[�o���ϐ��͖�������B
//�������[�J���ϐ���������Ȃ���΁A�O���[�o���X�R�[�v�istatic�̈�j��
//���ׂăO���[�o���ϐ����g���B
//�Ȃ̂ŗD�揇�ʂ́A���[�J���ϐ����O���[�o���ϐ��A�ɂȂ�