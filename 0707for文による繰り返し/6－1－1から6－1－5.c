#include<stdio.h>

/*int main(void) {

	int i,in,fi,sum= 0;

	printf("�����l�����\n:");
	scanf("%d", &in);
	printf("�ŏI�l�����\n:");
	scanf("%d", &fi);
	
	if (in < fi) {
		for (i = in;i <= fi;i++) {
			sum = sum + i;
		}
		printf("%d����%d�܂ł̍��v��%d�ł��B", in, fi, sum);
		return 0;
	}else if(in>fi){
		for (i = in;i >= fi;i--) {
			sum = sum +i;
		}
		printf("%d����%d�܂ł̍��v��%d�ł��B", fi, in, sum);
		return 0;
	}
	return 0;
}*/
int main(void) {
	int i, initial_value, final_value,sum = 0;
	int start_num, end_num;

	printf("�����l�����\n:");
	scanf("%d", &initial_value);
	printf("�ŏI�l�����\n:");
	scanf("%d", &final_value);
	if (initial_value <= final_value) {
		start_num = initial_value;
		end_num = final_value;
	}
	else {
		start_num = final_value;
		end_num = initial_value;
	}
	for (i = start_num;i <= end_num;i++) {
		sum = sum + i;
	}
	printf("%d����%d�܂ł̍��v��%d�ł��B", initial_value, final_value, sum);
	return 0;
}