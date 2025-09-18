#include<stdio.h>

int main(void) {

	char str[] = "testpoint";
	char* p = str;//char *p = &str[0];‚Æ“¯‚¶

	printf("p‚Í%p\n", p);
	printf("str‚Í%s\n", str);
	printf("str‚Í");
	while (*p != '\0') {
		putchar(*p);
		p++;
	}
	putchar('\n');
	printf("ƒ‹[ƒvŒã‚Ìp‚Í%s\n\n", p);

	p = str;
	printf("p‚Í%s\n",p);

	printf("p‚Í%p\n",p);
	printf("p‚Í%ld\n", (long)p);

	printf("*p‚Í%p\n", *p);
	printf("*p‚Í%d\n", *p);
	printf("*p‚Í%c\n", *p);

	printf("&*p‚Í%s\n", &*p);
	printf("&*p‚Í%p\n", &*p);
	printf("&p‚Í%p\n", &p);

	return 0;
}