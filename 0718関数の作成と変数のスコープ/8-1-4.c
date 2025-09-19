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
	printf("\n名前：丸亀　太郎\n年齢：20\n出身：丸亀市\n");
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