#include<stdio.h>

void print_details(int* ptr);

int main(void) {

	int a;
	int* p;

	a = 10;
	printf("a�̒l��%d,a�̃A�h���X&a��%p\n", a, &a);
	
	p = &a;
	printf("p�̒l��%p,p�̃A�h���X&p��%p,*p�̒l��%d\n", p, &p, *p);

	*p = 5;
	printf("a�̒l��%d,a�̃A�h���X&a��%p\n", a, &a);
	printf("a�̒l��%d,a�̃A�h���X&a��%p\n",*p,p);

	print_details(&a);

	return 0;
}
void print_details(int* ptr) {
	printf("p�ɋL�^���ꂽ�l��%d�A�A�h���X��%p\n", *ptr, ptr);
}
/*���s����
a�̒l��10,a�̃A�h���X&a��000000177AD7FBB4
p�̒l��000000177AD7FBB4,p�̃A�h���X&p��000000177AD7FBD8,*p�̒l��10
a�̒l��5,a�̃A�h���X&a��000000177AD7FBB4
a�̒l��5,a�̃A�h���X&a��000000177AD7FBB4
p�ɋL�^���ꂽ�l��5�A�A�h���X��000000177AD7FBB4
*/