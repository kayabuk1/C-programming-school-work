#include<stdio.h>
#define NINZUU 3

struct MEMBERLIST
{
	int		number;
	char	name[100];
	int		age;
	double	weight;
};
int main(void) {
	int i, ch;
	char* p;
	struct MEMBERLIST data[NINZUU];
	for (i = 0;i < NINZUU;i++) {
		data[i].number = i + 1;
		printf("����ԍ�%d�̖��O����͂��Ă�������\n:",
			data[i].number);
		p = data[i].name;
		while ((ch = getchar()) != '\n')
			*p++ = ch;
		*p = '\0';
		printf("�N��Ƒ̏d���L���ŋ�؂��ē��͂��ĉ�����\n:");
		scanf("%d,%lf", &data[i].age, &data[i].weight);
		scanf("*[^\n]");
		scanf("%*c");
	}
	printf("����ԍ�\t���O\t�N��\t�̏d\n");
	for (i = 0;i < NINZUU;i++) {
		printf("%d\t\t%s\t\t%d\t%.1f\n",
			data[i].number, data[i].name,
			data[i].age, data[i].weight);
	}
	return 0;
}