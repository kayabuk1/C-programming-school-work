#include<stdio.h>
#include<ctype.h>

/*
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c) != 0)
			putchar(towlower(c));
		else if (isupper(c))
			putchar(tolower(c));
		else
			putchar(c);
	}
	return 0;
}
/*
�Ȃ�getchar()�͂P������ǂݍ��ނ̂ɖ߂�l��int�^�Ȃ̂��H
	��EOF��Ԃ����߁BEOF��-1�ł���Achar�^�ł͕\���ł��Ȃ����߁B
	��char�^�͕����t���̏ꍇ-128~127�܂ł͈̔͂����\���ł��Ȃ��B
	��unsigned char�^�ł�0~255�܂ł͈̔͂����\���ł��Ȃ��B
	��ASCII�R�[�h��0~127�܂ł͈̔͂Ȃ̂ŁAchar�^�ŕ\���ł��邪�A
	��EOF��\���ł��Ȃ��̂ŁAint�^�ŕԂ��K�v������B
	��EOF��-1�ł���Aint�^�ł���Ε\���ł���B
	�����������āAgetchar()�̖߂�l��int�^�ł���K�v������B
	���[�U�����char�^�̕������󂯎���āA�����int�^�ɕϊ�����
	�Ԃ����A�����char�^�ɓ�����putchar()�ŕ\���ł���B
*/
int main(void) {
	int i, j;
	int ch;

	printf("  | 0| 1| 2| 3| 4| 5| 6| 7|\n");
	printf("--+--+--+--+--+--+--+--+--+\n");
	for (i = 0;i < 16;i++) {
		printf("%x|", i);
		for(j = 0;j < 8;j++) {
			ch = j * 16 + i;
			if (isalpha(ch) != 0)
				printf("%3x", ch);
			else
				printf("   ");
		}
		putchar('\n');
	}
	return 0;
}
/*
  | 0| 1| 2| 3| 4| 5| 6| 7|
--+--+--+--+--+--+--+--+--+
0|                50    70
1|             41 51 61 71
2|             42 52 62 72
3|             43 53 63 73
4|             44 54 64 74
5|             45 55 65 75
6|             46 56 66 76
7|             47 57 67 77
8|             48 58 68 78
9|             49 59 69 79
a|             4a 5a 6a 7a
b|             4b    6b
c|             4c    6c
d|             4d    6d
e|             4e    6e
f|             4f    6f
*/