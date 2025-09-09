#include<stdio.h>

void print_details(int* ptr);

int main(void) {

	int a;
	int* p;

	a = 10;
	printf("aの値は%d,aのアドレス&aは%p\n", a, &a);
	
	p = &a;
	printf("pの値は%p,pのアドレス&pは%p,*pの値は%d\n", p, &p, *p);

	*p = 5;
	printf("aの値は%d,aのアドレス&aは%p\n", a, &a);
	printf("aの値は%d,aのアドレス&aは%p\n",*p,p);

	print_details(&a);

	return 0;
}
void print_details(int* ptr) {
	printf("pに記録された値は%d、アドレスは%p\n", *ptr, ptr);
}
/*実行結果
aの値は10,aのアドレス&aは000000177AD7FBB4
pの値は000000177AD7FBB4,pのアドレス&pは000000177AD7FBD8,*pの値は10
aの値は5,aのアドレス&aは000000177AD7FBB4
aの値は5,aのアドレス&aは000000177AD7FBB4
pに記録された値は5、アドレスは000000177AD7FBB4
*/