#include<stdio.h>

void print_my_profile(void);
void print_line(void);

int main(void) {
	print_line();
	print_my_profile();
	print_line();
	return 0;
}
void print_my_profile(void)
{
	printf("\n���O�F�ۋT�@���Y\n�N��F20\n�o�g�F�ۋT�s\n");
}
void print_line(void)
{
	printf("\n");
	int i = 0;
	for (i = 0;i <= 20;i++)
	{

		printf("-");
	}
	printf("\n");
	
void printf_name_card()
{
	printf_line();
	printf_my_profile();
	printf_line();
}