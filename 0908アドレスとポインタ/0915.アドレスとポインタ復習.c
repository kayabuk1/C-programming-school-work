#include<stdio.h>

int main(void) {

	char str[] = "testpoint";
	char* p = str;//char *p = &str[0];と同じ

	printf("pは%p\n", p);
	printf("strは%s\n", str);
	printf("strは");
	while (*p != '\0') {
		putchar(*p);
		p++;
	}
	putchar('\n');
	printf("ループ後のpは「　」%s\n\n", p);

	p = str;
	printf("pは%s\n",p);

	printf("pは%p\n",p);
	printf("pは%ld\n", (long)p);

	printf("*pは%p\n", *p);
	printf("*pは%d\n", *p);
	printf("*pは%c\n", *p);

	printf("&*pは%s\n", &*p);
	printf("&*pは%p\n", &*p);
	printf("&pは%p\n", &p);

	return 0;
}