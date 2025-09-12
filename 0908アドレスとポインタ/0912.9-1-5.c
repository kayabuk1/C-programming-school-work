#include<stdio.h>

int main(void) {

	int id[] = { 21,22,23,24,25 };
	int* ip[5];
	int i;


	for (i = 0;i < 5;i++) {
		ip[i] = &id[i];
	}
	for (i = 0;i < 5;i++) {
		printf("%d:ip[%d]=%p,*ip[i]=%d\n", i, i, ip[i], *ip[i]);
	}
	printf("\n");
	
	char ic[] = "ABCDE";
	char* cp[6];
	for (int j = 0;j < 5;j++) {
		cp[j] = &ic[j];
	}
	for (int j = 0;j < 5;j++) {
		printf("%d:cp[%d]=%p,*ip[i]=%c\n", j, j, cp[j], *cp[j]);
	}
}
/*実行結果 intは4バイトずつ、charは１バイトずつ増えている
0:ip[0]=000000763BF1FA28,*ip[i]=21
1:ip[1]=000000763BF1FA2C,*ip[i]=22
2:ip[2]=000000763BF1FA30,*ip[i]=23
3:ip[3]=000000763BF1FA34,*ip[i]=24
4:ip[4]=000000763BF1FA38,*ip[i]=25

0:cp[0]=000000763BF1FAB4,*ip[i]=A
1:cp[1]=000000763BF1FAB5,*ip[i]=B
2:cp[2]=000000763BF1FAB6,*ip[i]=C
3:cp[3]=000000763BF1FAB7,*ip[i]=D
4:cp[4]=000000763BF1FAB8,*ip[i]=E
*/