#include<stdio.h>

int main(void) {

	int month = 0;

	printf("ŒŽ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	if (scanf("%d", &month) != 1) {}


	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		printf("%dŒŽ‚Í31“ú‚Ü‚Å‚ ‚è‚Ü‚·\n", month);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%dŒŽ‚Í30“ú‚Ü‚Å‚ ‚è‚Ü‚·\n", month);
	}
	else if (month == 2) {
		printf("%dŒŽ‚Í28“ú‚©29“ú‚Ü‚Å‚ ‚è‚Ü‚·\n", month);
	}
	else{
		printf("ŒŽ‚Ì“ü—Í‚ðŠÔˆá‚¦‚Ä‚¢‚Ü‚·\n");
	}
	
	return 0;
	
}