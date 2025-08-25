#include<stdio.h>

int max(int x, int y);

int main(void) {
	int a, b, ans;
	printf("2‚Â‚Ì®”‚ğF‚Å‹æØ‚Á‚Ä“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d:%d", &a, &b);
	ans = max(a, b);
	printf("%d‚Æ%d‚Í%d‚Ì•û‚ª‘å‚«‚¢‚Å‚·B\n", a, b, ans);
	return 0;
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}else {
		return y;
	}
}