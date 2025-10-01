#include<stdio.h>

int func1(int x);

int main(void) {

	int (*pfunc)(int) = func1;
	int ans;

	printf("main =%p\n", main);
	printf("func1=%p\n", func1);
	printf("pfunc=%p\n", pfunc);

	ans = (*pfunc)(10);
	printf("ans=%d\n", ans);
	return 0;
}
int func1(int x) {
	printf("func1=%d\n", x);
	return x * 2;
}
/*
main =00007FF76A951271
func1=00007FF76A95114A
pfunc=00007FF76A95114A
func1=10
ans=20

*/