#include<stdio.h>

int max(int x, int y);

int main(void) {
	int a, b, ans;
	printf("2�̐������F�ŋ�؂��ē��͂��Ă��������B");
	scanf("%d:%d", &a, &b);
	ans = max(a, b);
	printf("%d��%d��%d�̕����傫���ł��B\n", a, b, ans);
	return 0;
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}else {
		return y;
	}
}