#include<stdio.h>

int main(void) {
	int age;
	printf("���Ȃ��͉��΂ł����H\n");
	scanf("%d", &age);
	if (age < 20) {
		printf("���Ȃ��͖����N�ł��ˁB\n");
	}else{
		printf("���Ȃ��͐��l�ł���\n");
	}
	return 0;
}

