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
		printf("����ԍ��u%d�vɖ��O����ͼø�޻�:", data_ptr->number);
		p = data_ptr->name;
		while ((ch = getchar()) != '\n') {
			*p = ch;
			p++;
		}
		*p = '\0';
		printf("�̏dĔN�L���ދ�؋�دÓ��ͼø�޻�\n:");
		scanf("%d,%lf", &data_ptr->age, &data_ptr->weight);
		scanf("%*[^\n]");
		scanf("%*c");
		data_ptr++;
	}
	printf("����ԍ�\t���O\t�N��\t�̏d\n");
	for (i = 0, data_ptr = data;i < NINZUU; i++, data_ptr++)
		printf("%d\t\t%s\t%d\t%.1f\n",
			data_ptr->number, data_ptr->name, data_ptr->age, data_ptr->weight);
	return 0;
}