#include<stdio.h>

int main(void) {

	enum coloertype{black,blue,green,cyan,red,purple,yellow,white};
	int cmdcoloer;

	printf("black=%d\n\n", black);

	cmdcoloer = red;
	printf("cmdcoloer=%d\n", cmdcoloer);
	return 0;
}