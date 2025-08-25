#include<stdio.h>

int main(void) {

	int biryear;
	int eto;

	while (1) {

		printf("‚ ‚È‚½‚Ì¶‚Ü‚ê‚½”N‚ÍH\n");
		if (scanf("%d",&biryear) != 1) {
			while (getchar() != '\n');
			printf("³‚µ‚­“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		}
		else
		{
			break;
		}
	}
	//q4E‰N5E“Ğ6E‰K7E’C8E–¤9EŒß10E–¢11E\0E“Ñ1Eœú2Eˆå3
	eto = biryear % 12;

	switch (eto) {
	case 4:
		printf("‚ ‚È‚½‚ÌŠ±x‚Íq‚Å‚·\n");
		break;
	case 5:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í‹‚Å‚·\n");
		break;
	case 6:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í“Ğ‚Å‚·\n");
		break;
	case 7:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í‰K‚Å‚·\n");
		break;
	case 8:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í’C‚Å‚·\n");
		break;
	case 9:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í–¤‚Å‚·\n");
		break;
	case 10:
		printf("‚ ‚È‚½‚ÌŠ±x‚ÍŒß‚Å‚·\n");
		break;
	case 11:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í–¢‚Å‚·\n");
		break;
	case 0:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í\‚Å‚·\n");
		break;
	case 1:
		printf("‚ ‚È‚½‚ÌŠ±x‚Í“Ñ‚Å‚·\n");
		break;
	case 2:
		printf("‚ ‚È‚½‚ÌŠ±x‚Íœú‚Å‚·\n");
		break;
	case 3:
		printf("‚ ‚È‚½‚ÌŠ±x‚Íˆå‚Å‚·\n");
		break;
	}


}