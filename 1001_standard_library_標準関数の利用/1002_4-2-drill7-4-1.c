#include<stdio.h>
#include<string.h>

int main(void) {

	char name[101];
	int i = 0;
	int ch=0;

	printf("名前をｱﾙﾌｧﾍﾞｯﾄで、1文字ずつ入力してください。\n"
		"入力が終了したら最後に 0 を入力してください\n");
	for(i=0;i<100;i++)
	{
		printf("%d文字目:", i + 1);
		ch = getchar();
		if (ch == '0' || ch == '\n' || ch == EOF) {
			break;
		}
		name[i] = ch;
		while ((ch = getchar()) != '\n') {
			name[i+1] = ch;
			i++;
		}
	}
	name[i] = '\0';
	printf("あなたの名前は%sさんですね。\n", name);
	return 0;
}