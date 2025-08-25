#include<stdio.h>

int main(void) {
	int age;
	char gender;

	printf("あなたの生物学的な性別は？\n男ならｍ、女ならｗを入力\n:");
	if (scanf(" %c", &gender)!=1){
		printf("入力が間違っています。\n");
		return 1;
	}
	printf("あなたは何歳ですか？\n");
	if (scanf(" %d", &age)!=1{
		printf("入力が間違っています。\n");
		return 1;
	}

	if (age >= 20&&gender==m) {
		printf("成人男性\n");
	}else if(age<20&&gender==m){
		printf("少年\n");
	}else if (age>=20&&gender=='w'){
		printf("成人女性\n");
	}else if(age<20&&gender=='w'){
		printf("少女\n");
	}else{
		printf("性別の入力が間違っています。\n");
	}
	return 0;
}