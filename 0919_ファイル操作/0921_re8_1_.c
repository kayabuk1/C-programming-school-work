#include<stdio.h>
#include<stdlib.h>

struct Item {
	char name[64];
	unsigned int sell_price;
	unsigned int buy_price;
	unsigned int num;
};

int main(void) {

	FILE* fp;

	fp = fopen("0921_re8_1_.c", "r");
	if (fp == NULL) {
		printf("�t�@�C�����I�[�v���ł��܂���\n");
		return 1;
	}
	printf("�t�@�C��0921_re8_1_.c���I�[�v�����܂���\n");

	fclose(fp);
	printf("0921_re8_1_.c���N���[�Y���܂���\n\n");

	/*�t�@�C�����ǂ̗l�ȖړI�ŊJ����2�ڂ̈����Ŏw�肷��B
	* "r"read	�����̃t�@�C����Ǎ���p�ŊJ���B�t�@�C���������ꍇ�̓G���[�B
	* "w"write	�������ݐ�p�Ńt�@�C�����J���B�t�@�C����������ΐV�K�쐬�B
	*           ����Β��g�S����
	* "a"append	�ǋL��p�Ńt�@�C�����J���B�t�@�C����������ΐV�K�쐬�B
				����Ζ������ް��ǉ�
	*
	* fopen()��̧�ق��J���B���ꂾ���łȂ���������ƁA
	* ����̧�ق��Ǘ�����ׂ̏��i���ڽ�j��
	* FILE�\���̂ɕԂ����������B���̎��̖߂�l�̌^��FILE*�^*�B
	* ����̧�ٱ��ڽ�����̌�̧�قɑ΂��đ��삷��ۂ̋L�q���ȒP�ɂ��Ă����B
	*
	* fclose(fp)�œn���̂�*fp�ł͂Ȃ�fp�Ȃ̂́A�t�@�C�����̂����֐��ł͖����A
	* ̧�قƂ̐ڑ������֐��ׁ̈B�t�@�C���Ǘ����Ē��ڑ���o����̂�OS�B
	* OS�ɂ��̱��ڽ�̃t�@�C���Ƃ̐ڑ���؂�悤�Ɉ˗�����̂ŁA
	* ���ڽ�ł���(fp)�Ő������B
	*/

	struct Item a;
	strcpy(a.name, "usb memory");
	a.sell_price = 1200;
	a.buy_price = 500;
	a.num = 50;
	printf("���i�̖��O\t�̔����i\t�d�����i\t�݌ɐ�\n");
	printf("%-10s\t%8u\t&8u\t%6u\n",
		a.name, a.sell_price, a.buy_price, a.num);
}