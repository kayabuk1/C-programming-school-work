#include<stdio.h>

int main(void) {

	char str[] = "testpoint";
	char* p = str;//char *p = &str[0];�Ɠ���

	printf("p��%p\n", p);
	printf("str��%s\n", str);
	printf("str��");
	while (*p != '\0') {
		putchar(*p);
		p++;
	}
	putchar('\n');
	printf("���[�v���p�́u�@�v%s\n\n", p);

	p = str;
	printf("p��%s\n",p);

	printf("p��%p\n",p);
	printf("p��%ld\n", (long)p);

	printf("*p��%p\n", *p);
	printf("*p��%d\n", *p);
	printf("*p��%c\n", *p);

	printf("&*p��%s\n", &*p);
	printf("&*p��%p\n", &*p);
	printf("&p��%p\n", &p);

	return 0;
}