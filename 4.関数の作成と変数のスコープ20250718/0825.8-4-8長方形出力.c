#include<stdio.h>

void print_rectangle(int x, int y);
void print_triangle(int x, int y);

int main(void) {
	int width, height;
	printf("四角形の幅を入力:");
	scanf("%d",&width);
	printf("四角形の高さを入力:");
	scanf("%d", &height);

	print_rectangle(width, height);

	print_triangle(width, height);
	return 0;
}
void print_rectangle(int x, int y) {
	int xx, yy;
	for(yy=0;yy<y;yy++){
	for (xx = 0;xx < x;xx++) {
		printf("*");
		}
	printf("\n");
	}
}
void print_triangle(int x, int y) {
	int xx, yy;
	for (xx = 0;xx < x;xx++) {
		for (yy = 1;yy < y;yy++) {
			if (yy > xx) {
				printf("*");
			}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
}