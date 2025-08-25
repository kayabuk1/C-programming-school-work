#include<stdio.h>

void print_ascii(char ch);

int main(void) {
	char ch;
	scanf(" %c", &ch);
}

void print_ascii(char ch) {
	printf("文字「 %c 」は16進数では「%X」です",ch,ch);
}