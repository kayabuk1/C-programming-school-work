/*
���:
��قǂ�static�̃T���v���R�[�h���������āAint�^�ł͂Ȃ�
**struct Player�^**�̃f�[�^��ێ��ł���悤�ɂ��Ă��������B

�d�l:
name (������) �� level (����) �Ƃ��������o������ 
struct Player ���`���Ă��������B
int* input(int x) �̑���ɁA
struct Player* update_player(const char* new_name, int new_level)
�Ƃ����V�����֐����쐬���Ă��������B
update_player�֐��̒��ł́Astatic��struct Player�^�̕ϐ���
1�����g���Ă��������B
main�֐�����A����update_player�֐���2��Ăяo���Ă��������B
1���: "�E��", 10 ��n���B
2���: "���@�g��", 15 ��n���B
�Ăяo�����тɁA�߂�l�̃|�C���^���g���ăv���C���[�X�e�[�^�X��
�\�����Astatic�ϐ����㏑������Ă��܂����Ƃ��m�F���Ă��������B
�q���g:
�\���̂�name�����o�ɕ�������R�s�[����ɂ́A
strcpy�֐����K�v�ł� (#include <string.h>)�B

���҂����o��:
1��ڂ̌Ăяo����:
���O: �E��, ���x��: 10
--------------------
2��ڂ̌Ăяo����:
���O: ���@�g��, ���x��: 15
--------------------
�ŏ��̃|�C���^���ēx�\��:
���O: ���@�g��, ���x��: 15
*/

#include<stdio.h>
#include<string.h>

struct Player {
	char name[21];
	int level;
};
struct Player* update_player(const char* new_name, int new_level);

int main(void) {
	struct Player data1, data2;
	data1 = *update_player("�E��",10);
	printf("data1=%s,%d\n", data1.name, data1.level);
	data2 = *update_player("���@�g��", 15);
	printf("data2=%s,%d\n", data2.name, data2.level);
}
struct Player* update_player(const char* new_name, int new_level) {
	static struct Player data;
	strcpy(data.name,new_name);
	data.level = new_level;
	return &data;
}