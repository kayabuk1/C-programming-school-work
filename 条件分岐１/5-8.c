#include<stdio.h>

int main(void) {

	int biryear;
	int eto;

	while (1) {

		printf("���Ȃ��̐��܂ꂽ�N�́H\n");
		if (scanf("%d",&biryear) != 1) {
			while (getchar() != '\n');
			printf("���������͂��Ă�������\n");
		}
		else
		{
			break;
		}
	}
	//�q4�E�N5�E��6�E�K7�E�C8�E��9�E��10�E��11�E�\0�E��1�E��2�E��3
	eto = biryear % 12;

	switch (eto) {
	case 4:
		printf("���Ȃ��̊��x�͎q�ł�\n");
		break;
	case 5:
		printf("���Ȃ��̊��x�͋��ł�\n");
		break;
	case 6:
		printf("���Ȃ��̊��x�͓Ђł�\n");
		break;
	case 7:
		printf("���Ȃ��̊��x�͉K�ł�\n");
		break;
	case 8:
		printf("���Ȃ��̊��x�͒C�ł�\n");
		break;
	case 9:
		printf("���Ȃ��̊��x�͖��ł�\n");
		break;
	case 10:
		printf("���Ȃ��̊��x�͌߂ł�\n");
		break;
	case 11:
		printf("���Ȃ��̊��x�͖��ł�\n");
		break;
	case 0:
		printf("���Ȃ��̊��x�͐\�ł�\n");
		break;
	case 1:
		printf("���Ȃ��̊��x�͓тł�\n");
		break;
	case 2:
		printf("���Ȃ��̊��x�͜��ł�\n");
		break;
	case 3:
		printf("���Ȃ��̊��x�͈�ł�\n");
		break;
	}


}