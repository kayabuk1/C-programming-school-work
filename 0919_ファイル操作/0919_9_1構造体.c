#include<stdio.h>

void stringcopy(char* str1, char* str2);

struct MEMBERLIST {
	int number;
	char name[100];
	int age;
	double weight;
};

int main(void) {
	struct MEMBERLIST a;
	struct MEMBERLIST b = { 2,"山田",37,62.5 };

	a.number = 1;
	stringcopy(a.name, "佐藤");
	a.age = 25;
	a.weight = 49.5;

	printf("名簿番号\t名前\t年齢\t体重\n");
	printf("%d\t\t%s\t%d\t%.1f\n",
		a.number, a.name, a.age, a.weight);
	printf("%d\t\t%s\t%d\t%.1f\n",
		b.number, b.name, b.age, b.weight);
	return 0;
}
void stringcopy(char* str1, char* str2) {
	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = *str2;
}