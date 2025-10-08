/*
#include<stdio.h>
#include<time.h>
int main(void) {
	time_t now, settime;
	struct tm* t1, t2;
	time(&now);
	printf("1900/1/1 00:00:00����%10d�b�o�߂��Ă��܂�\n", now);
	printf("ctime\t:%s\n", ctime(&now));
	t1 = localtime(&now);
	printf("localtime:%4d/%02d/%02d %02d:%02d:%02d\t�ł�\n",
		t1->tm_year + 1900, t1->tm_mon + 1, t1->tm_mday,
		t1->tm_hour, t1->tm_min, t1->tm_sec);

	t2.tm_sec = 0;
	t2.tm_min = 0;
	t2.tm_hour = 0;
	t2.tm_mday = 0;
	t2.tm_mon = 1;
	t2.tm_year = 2025 - 1900;
	t2.tm_wday = 0;
	t2.tm_isdst = 0;
	settime = mktime(&t2);
	printf("2025/1/31/ 00:00:00�@�́@1900/1/1 00:00:00�@����%-10d�b\n",
		settime);
	printf("ctime\t:%s", ctime(&settime));
	return 0;
}
*/
/*
1900/1/1 00:00:00����1759884300�b�o�߂��Ă��܂�
ctime   :Wed Oct  8 09:45:00 2025

localtime:2025/10/08 09:45:00   �ł�
2025/1/31/ 00:00:00�@�́@1900/1/1 00:00:00�@����1738249200�b
ctime   :Fri Jan 31 00:00:00 2025
*/
/*4-3ex
#include<stdio.h>
#include<time.h>
int main(void) {
	int data;
	time_t start, end;
	clock_t cl_start, cl_end;
	cl_start = clock();
	time(&start);
	printf("�������l����͂��Ă�������\n");
	scanf("%d", &data);
	cl_end = clock();
	time(&end);
	printf("���Ȃ������͂����l��%d�ł�\n", data);
	printf("���͂ɂ����������Ԃ�%8.0lf�b�ł�\n", difftime(end, start));
	printf("���͂Ɋ|�������v���Z�X���Ԃ�%8.3lf�b�ł�\n",
		(cl_end - cl_start) / CLOCKS_PER_SEC);
	return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	system("echo test");
	printf("windir=%s\n", getenv("windir"));
	return 0;
}*//*
#include<stdio.h>
#include<stdarg.h>
int sum(int sum_data, ...);
int main(void) {
	printf("sum=%3d\n", sum(1,2,-1 ));
	printf("sum=%3d\n", sum(1, 2,3, -1));
	printf("sum=%3d\n", sum(1, 2,3,4, -1));
	return 0;
}
int sum(int sum_data, ...) {
	int ans = sum_data;
	int data;
	va_list argptr;
	va_start(argptr, sum_data);
	while ((data = va_arg(argptr, int)) != -1)
		ans += data;
	va_end(argptr);
	return ans;
}
*//*
sum=  3
sum=  6
sum= 10
*//*
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	FILE* fp;
	fp = fopen("testfile", "w");
	if (fp == NULL) {
		printf("̧�ق��J���܂���\n");
		exit(1);
	}
	fprintf(fp, "testfile");
	fclose(fp);
	return 0;
}*/
/*
̧�ق��Ǘ����Ă���̂�OS�Ȃ̂ŁA������̧�ق̑��쌠��OS�Ɉ˗�����̂�
������̂ł����A������ΐV�K�쐬�Ƃ�������ɂȂ�̂��A����������ł��B
�܂�w�ŏ������݂łȂ��A�V�K�쐬�܂��͏㏑���Ƃ�������ɂȂ闝�R�A�p���
�̃j���A���X�Ȃ񂩂��m�肽���ł��B
�uw�v���[�h�̖ړI�́A�P�Ƀt�@�C�����J�����ł͂Ȃ��A
�u���ꂩ��w�������݂���ׂ́x�܂�����Ȕ�����p�ӂ���v���ƁB
����I�ɂ́A�������ȂǂŁu�V�K�쐬�v��u�㏑���ۑ�����̂ƑS�������v
���[�h���J���A�V�K�쐬�������ƁA���[�h�͏������ނ��߂̂܂������
����������p�ӂ��Ă����B
fopen("new_file.txt","w")�́AOS�ɁA
�unew_file.txt�v�Ƃ���̧�قɏ������݂����A������Ώ������ݗp������p�ӂ���
�ƌ����Ă���悤�Ȃ��́B

�����Łufgets���g������ǂ������L�q�łǂ���������ɂȂ�܂����H�v
���������΂Ȃ�"w"�̗l�ɃA�X�L�[���̂܂܂ŕ\���ł��閽�߂�""�ň͂ނ̂ł����H
��fopen�̗l��C����̕W�����C�u����֐��̑������A�����Ƃ���
�u������wchar*�x���󂯎��l�ɐ݌v����Ă���v�ׁB
fopen�֐��̃v���g�^�C�v�錾��

FILE *fopen(const char *filename, const char *mode);)
�Q�Ԗڂ̈���mode�̌^��const char*�^�܂蕶����ւ̃|�C���^�Ŗ�����΂Ȃ�Ȃ�
�ƁAconst�Ŗ��m�ɒ�߂��Ă���B
C����ł�'w'��"w"�͖��m�ɋ�ʂ���Ă���̂ŁA�P�����ł�""�ň͂�
��̓I�ɂǂ���ʂ���Ă���́H
�ˁu'w'(����)�v�����I�ɕ����R�[�h��119���L�^���ꂽ�R�C���B����l�ȏ�̏��͖���
	�u"w"(������)�v�͒���'w'�̃R�C���ƁA'\0'�������Ă��锠�́u�Z���v
*/
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	FILE* fp;
	int data[5] = { 3,14,15,9,26 };
	fp = fopen("binfile", "wb"); //"wb"b��binaryӰ�ށB���s�����ʈ��������B
	if (fp == NULL) {				//�f�[�^��01�̂���̂܂܂ň����B
		printf("file open error\n");
		exit(1);
	}
	fwrite(data,  sizeof(int),  sizeof(data) / sizeof(int),  fp);
	/*(��1�����F�����݂����f�[�^���i�[����Ă���ꏊ�̐擪�A�h���X,
	* ��2�����F
	*/

	fclose(fp);
}
/*
��������ɂ��鐮���z��̃f�[�^���A���̂܂܂̌`(�o�C�i���Ƃ���)̧�قɏ����ޓ���
fprintf(�e�L�X�g������)---�l�Ԃ��ǂ߂�B��Ffprintf(fp, "%d", 123);
fwrite(�o�C�i��������)---fwrite(&num,...)�Ə����ƁAint�^�̕ϐ�num�����������
�\������Ă����ޯ�����݂��̂��́i��4�o�C�g�̃f�[�^�j�����̂܂�̧�قɏ����܂��
�l�Ԃ��e�L�X�g�G�f�B�^�ŊJ���Ă������������ĈӖ��s���Ɍ�����B

if (fp == NULL) {
		printf("file open error\n");
		exit(1);
	}�Ȃ�����Ńv���O�������ُ�I��������L�q�ɂȂ�̂��H
*/





