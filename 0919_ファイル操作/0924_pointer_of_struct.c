#include<stdio.h>
#define NINZUU 3

struct MEMBERLIST {
	int		number;
	char	name[100];
	int		age;
	double	weight;
};
int main(void) {
	int i, ch;
	char* p;
	struct MEMBERLIST data[NINZUU];
	struct MEMBERLIST* data_ptr = data;

	for (i = 0;i < NINZUU;i++) {
		(*data_ptr).number = i + 1;
		printf("名簿番号「%d」ﾉ名前ｦ入力ｼﾃｸﾀﾞｻｲ:", data_ptr->number);
		p = data_ptr->name;
		while ((ch = getchar()) != '\n') {
			*p = ch;
			p++;
		}
		*p = '\0';
		printf("体重ﾄ年齢ｦ記号ﾃﾞ区切区切ｯﾃ入力ｼﾃｸﾀﾞｻｲ\n:");
		scanf("%d,%lf", &data_ptr->age, &data_ptr->weight);
		scanf("%*[^\n]");
		scanf("%*c");
		data_ptr++;
	}
	printf("名簿番号\t名前\t年齢\t体重\n");
	for (i = 0, data_ptr = data;i < NINZUU; i++, data_ptr++)
		printf("%d\t\t%s\t%d\t%.1f\n",
			data_ptr->number, data_ptr->name, data_ptr->age, data_ptr->weight);
	return 0;
}