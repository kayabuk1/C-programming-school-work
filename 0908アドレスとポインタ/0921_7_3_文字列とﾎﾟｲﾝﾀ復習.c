#include<stdio.h>

int main(void) {

	char str[] = "testpoint";
	char* p = str;

	printf("str��%s\n", str);
	printf("p��%s\n", p);//�z��str �� &str[0] �� p(��������̂�)
	
	while (*p != '\0') {
		putchar(*p);
		p++;
	}putchar('\n');
	while (*p) {
		putchar(*p);
		p++;
	}putchar('\n');
	//C����ɂ͂O�ȊO�̑S���l��true�Ƃ��Ĉ����郋�[��������B
	 //\0�͓����I�ɂ�0�Ƃ��Ĉ������B�Ȃ̂�\0��false�ƂȂ�B

	return 0;
}