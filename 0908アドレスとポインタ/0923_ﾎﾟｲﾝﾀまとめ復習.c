#include<stdio.h>
#include<stdlib.h>
#define ARRAY_SIZE 5

int length1(char str[]);
int length2(char[]);
int length3(char* str);

void func1(int data1, int*data2) {
	printf("func1()�ɓn���ꂽdata1�̒l��%d�Adata2��%p\n",
		data1, data2);
	data1 = 100;
	*data2 = 100;
	printf("func1()��data1�̒l��%d�Adata2��%d\n", data1, *data2);
}

void allocate_memory(int** p_ptr) {
	//main�ň����󂯎��������p_ptr�ւ̑���������
	*p_ptr = (int*)malloc(sizeof(int));//�̂ł��̍s*p_ptr�͏�������
	printf("�֐����Ŋm�ۂ�����؂̱��ڽ��:%p\n", *p_ptr);
}

int main(int argc,char *argv[]){
	printf("argc�̒l��%d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]�̕�����́A%s\n", i, argv[i]);

	char* name[3] = { "miyao","suzuki","satou" };
	//�߲���̔z�� 
	/*"miyao"�̗l�ȕ������e�����́A�R���p�C����������؂̂ǂ�����
	* �z�u����A��۸��т̒��ł͂��̕�����̐擪�������ڽ�Ƃ��āA
	* ������B���̐擪�������ڽ���W�߂Ĉ�ň����������Aint�^��
	* �z��ɂ͓�����Ȃ��B���ڽ�ƌ�����ނ̏��Ȃ̂�����A����
	* ��p�̔��߲���ϐ����K�v�ɂȂ�Bchar* �𕡐����ׂ����̂�
	* �uchar�ւ��߲���z��v���ׂ̈ɐ錾��char�� *�����Ă���B
	* ���̔z��̊e�v�f�̌^�͕����ւ��߲���ł���Ɛ錾���Ă���B
	
	�߲���z����g����ʂ͉��p���x���łȂ���΁A��������i�[�����
	�l����OK�B
	����name�ƌ����z����֐��ɓn���ƁA����́u�z��̐擪
	�v�f�̃A�h���X�v�ɕϊ������i������str[]��*str�ɕϊ������̂Ɠ����j
	name[]�̐擪�v�f�̌^��char* �^�Ȃ̂Łuchar*�ւ̱��ڽ�v�ƂȂ�A
	���ʂƂ���char** �^�Ƃ��Ĉ����B
	char *argv[]��char** argv�Ƃ��Ĉ�����̂Ɠ����B
	*/
	
	int* a_ptr = NULL;
	printf("\n�ďo�O��a_ptr:%p\n", (void*)a_ptr);
	allocate_memory(&a_ptr);
	printf("�ďo���a_ptr:%p\n", (void*)a_ptr);
	if (a_ptr != NULL) {
		*a_ptr = 123;
		printf("�m�ۂ�����؂ɓ��ꂽ�l��%d\n\n", *a_ptr);
		free(a_ptr);
	}
	char abc[] = "abcdefg";
	printf("�������́A%d\n", length1(abc));//C����͔z��������Ƃ���
	printf("�������́A%d\n", length2(abc));//�n���Ȃ��̂ŁA*abc�ɕϊ�
	printf("�������́A%d\n\n", length3(abc));//����ēn�����B

	int data1 = 10, data2 = 10;
	printf("data1�̏����l��%d�Adata2�̏����l��%d\n", data1, data2);
	func1(data1, &data2);
	printf("data1�̍ŏI�l��%d�Adata2�̍ŏI�l��%d\n\n", data1, data2);

	char str[] = "testpoint";
	char* p = str;
	printf("�ustr�v��%s\n", str);
	printf("�up�vstr��%s\n", p);
	printf("�u$str[0]�vstr��%s\n", &str[0]);
	while (*p) {
		putchar(*p);
		p++;
	}printf("\n\n");

	int i, a[ARRAY_SIZE], b[ARRAY_SIZE];
	int* ip;
	for (i = 0; i < ARRAY_SIZE; i++) {
		ip = &a[i];
		*ip = i;
	}
	for (i = 0,ip=&b[0]; i < ARRAY_SIZE; i++, ip++)
		*ip = i;
	for (i = 0; i < ARRAY_SIZE; i++)
		printf("a[%d]=%d�Ab[%d]=%d\n",i, a[i], i, b[i]);
	putchar('\n');

}
int length1(char str[]) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length2(char* str) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char* str) {
	char* begin = str;
	while (*str)
		str++;
	return str - begin;
}