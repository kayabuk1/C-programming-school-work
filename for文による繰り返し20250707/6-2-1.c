#include<stdio.h>

int main(void) {
	int yes, no = 0;
	printf("うなぎパイは最高においしいお菓子だと思う（1:はい、0:いいえ）\n:");
	scanf("%d", &yes);
	while (yes == 0){
		printf("素直になろう！うなぎパイは最高においしいお菓子だと思う（1:はい、0:いいえ）\n:");
		scanf("%d", &yes);
	}
	printf("ですよね！うなぎパイは日本一！\n");
	return 0;

}