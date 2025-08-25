#include<stdio.h>

int main(void) {
	int value;
	printf("’l’i‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &value);
	float tax;
	tax = value*0.08;
	printf("%d‰~‚ÌÁ”ïÅ‚Í%f‰~‚Å‚·B\n", value, tax);
	return 0;
}