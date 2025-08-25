#include<stdio.h>

int main(void) {
	int age;
	printf("あなたは何歳ですか？\n");
	scanf("%d", &age);
	if (age < 20) {
		printf("あなたは未成年ですね。\n");
	}else{
		printf("あなたは成人ですね\n");
	}
	return 0;
}

