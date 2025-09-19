#include<stdio.h>

int main(void) {

	int soba,i = 0;

	printf("うどんと言えば「ぶっかけうどん」だと思う(1：はい、0：いいえ)\n:");
	scanf("%d", &soba);
	do{
		printf("%d回目の拒否ですね(^^)", i=i+1);
		printf("素直になろう。本当はそう思うでしょ？(1：はい、0：いいえ)\n:");
		scanf("%d", & soba);
	} while (soba != 1&&i<=4);
	if (soba == 1) {
		printf("ですよね(^^)仲良くなれそうです。");
	}
	else {
		printf("そうですか。釜揚げ派ですか残念です。");
	}
	return 0;


}