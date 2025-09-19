#include<stdio.h>
void print_line(void);

int main(void)
{
	print_line();
}
void print_line(void)
{
	int i = 0;
	for (i = 0;i <= 20;i++) {
		printf("-");
	}
}