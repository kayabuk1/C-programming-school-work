#include<stdio.h>

double sum(int* data, int datasize);
double avg(int* data, int datasize);

int main(void) {

	double (*pfunc[])(int*, int) = { sum,avg };
	int datasize, data[] = { 31,14,15,9,26,53,5,8,9,79 };

	datasize = sizeof(data) / sizeof(data[0]);
	printf("datasize=%d\n", datasize);

	printf("data sum =%.0lf\n", pfunc[0](data, datasize));
	printf("data avg =%.0lf\n", pfunc[1](data, datasize));
	return 0;
}
double sum(int* data, int datasize) {
	int i ,ans = 0,*p;
	p = data;
	for (i = 0; i < datasize; i++) {
		ans += *p;
		p++;
	}
	return (double)ans;
}
double avg(int* data, int datasize) {
	return sum(data, datasize) / datasize;
}
/*
datasize=10
data sum =249
data avg =25
*/