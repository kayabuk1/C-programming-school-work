#include<stdio.h>

void print_ascii(char ch);

int main(void) {
	char ch;
	scanf(" %c", &ch);
}

void print_ascii(char ch) {
	printf("�����u %c �v��16�i���ł́u%X�v�ł�",ch,ch);
}