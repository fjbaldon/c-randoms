#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int
main(void)
{
	int opt;
	char copt;
	int qntty;
	float price, bse = 3000, pay, dscount;

	clrscr();
	puts("\t\t\tMACE APP");
	puts("[1]\t\tAPP STORE");
	puts("[2]\t\tSCHOOL APP");
	puts("[3]\t\tVOTING APP");
	puts("[4]\t\tEXIT\n");
	printf("\nENTER YOUR CHOICE [1-4]: ");
	scanf(" %d", &opt);

	switch (opt) {
	c1:
	case 1:
		clrscr();
		puts("[A]\t\tGROCERY STORE");
		puts("[B]\t\tHOME FASHION");
		puts("[C]\t\tBACK TO MAIN");
		printf("\nENTER YOUR CHOICE [A-C]: ");
		scanf(" %c", &copt);

		switch (copt) {
		case 'A': case 'a':
			clrscr();
			printf("Enter purchased quantity: ");
			scanf(" %d", &qntty);
			printf("Enter item price: ");
			scanf(" %f", &price);
			pay = qntty * price;
			if (qntty * price > bse)
				dscount = pay * 0.10;
			else
				dscount = pay * 0.02;
			printf("\nDiscount: %.2f\n", dscount);
			printf("Total cost: %.2f\n", pay - dscount);
			getch();
			goto c1;
			break;
		case 'B': case 'b':
			clrscr();
			puts("Unavailable Service.");
			getch();
			goto c1;
			break;
		case 'C': case 'c':
			return main();
			break;
		}
			break;
	case 2: /* FALLTHROUGH */
	case 3:
		clrscr();
		puts("UNAVAILABLE SYSTEM");
		getch();
		break;
	case 4:
		break;
	}

	return EXIT_SUCCESS;
}
