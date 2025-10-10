#include<stdio.h>

void bitprint(char x);

int main(void) {
	char data1 = 0xA9;
	unsigned char data2 = 0xA9;

	bitprint(data1 | 0x65);
	bitprint(data1 & 0x65);
	bitprint(data1 ^ 0x65);
	bitprint(~data1);

	bitprint(data1 << 1);
	bitprint(data1 >> 4);
	bitprint(data1 >> 2);
	bitprint(data2 >> 2);
	return 0;
}
void bitprint(char x) {
	unsigned char bitmask = 0x80;
	int i;
	for (i = 0; i <sizeof(char)*8; i++) {
		putchar(((x & bitmask)!=0) ? '1' : '0');
		bitmask >>= 1;
	}
	putchar('\n');
}