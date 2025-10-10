#include<stdio.h>

void print_indent(int level) {
	for (int i = 0;i < level;i++) {
		printf(" ");
	}
}
long fact(int x,int level);

int main(void) {
	int data = 3;
	printf("%d! = %ld\n", data, fact(data,0));
	return 0;
}
long fact(int x,int level) {
	long result;
	print_indent(level);
	printf("-> fact(%d)‚ªŒÄ‚Î‚ê‚Ü‚µ‚½\n", x);
	if (x <= 1) {
		printf("<- fact(%d)‚Í‚P‚ð•Ô‚µ‚Ü‚·\n", x);
		return 1;
	}
	else {
		result=x* fact(x - 1,level+1);
		printf("fact(%d)‚Í@%d * fact(%d) ‚ÌŒ‹‰Ê%ld‚ð•Ô‚µ‚Ü‚·\n",x,x,x-1, result);
		return result;
	}
}
/*
-> fact(3)‚ªŒÄ‚Î‚ê‚Ü‚µ‚½
 -> fact(2)‚ªŒÄ‚Î‚ê‚Ü‚µ‚½
  -> fact(1)‚ªŒÄ‚Î‚ê‚Ü‚µ‚½
<- fact(1)‚Í‚P‚ð•Ô‚µ‚Ü‚·
fact(2)‚Í@2 * fact(1) ‚ÌŒ‹‰Ê2‚ð•Ô‚µ‚Ü‚·
fact(3)‚Í@3 * fact(2) ‚ÌŒ‹‰Ê6‚ð•Ô‚µ‚Ü‚·
3! = 6
*/