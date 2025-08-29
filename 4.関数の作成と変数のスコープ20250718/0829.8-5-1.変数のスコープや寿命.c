#include<stdio.h>

int call_count(void);

int count;

int main(void) {
	call_count();
	call_count();
	call_count();
	call_count();
	call_count();
	call_count();
	return 0;

}

int call_count(void) {
	count++;
	printf("ŠÖ”call_count‚Í%d‰ñŒÄ‚Ño‚³‚ê‚Ü‚µ‚½\n", count);
	return count;
}