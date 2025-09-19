#include<stdio.h>

int in_check(void);
int sum(int x);

int main(void) {
	int data;
	while ((data = in_check()) != 0) 
		printf("Œ»İ‚Ì‡ŒvF%d\n", sum(data));
	return 0;
}

int in_check(void) {
	int in_data;
	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(0‚ÅI—¹)");

	scanf("%d", &in_data);
	return in_data;
}
int sum(int x) {
	static int sum_data = 0;
	sum_data += x;

	return sum_data;
}