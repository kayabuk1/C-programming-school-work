#include<stdio.h>

int main(void) {
	int age;
	char gender;

	printf("���Ȃ��̐����w�I�Ȑ��ʂ́H\n�j�Ȃ炍�A���Ȃ炗�����\n:");
	if (scanf(" %c", &gender)!=1){
		printf("���͂��Ԉ���Ă��܂��B\n");
		return 1;
	}
	printf("���Ȃ��͉��΂ł����H\n");
	if (scanf(" %d", &age)!=1{
		printf("���͂��Ԉ���Ă��܂��B\n");
		return 1;
	}

	if (age >= 20&&gender==m) {
		printf("���l�j��\n");
	}else if(age<20&&gender==m){
		printf("���N\n");
	}else if (age>=20&&gender=='w'){
		printf("���l����\n");
	}else if(age<20&&gender=='w'){
		printf("����\n");
	}else{
		printf("���ʂ̓��͂��Ԉ���Ă��܂��B\n");
	}
	return 0;
}