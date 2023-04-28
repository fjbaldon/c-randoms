#include <stdio.h>
#include <stdlib.h>

void splash(void)
{
	puts("");
	printf("\t\tLIST OF PROGRAMMING PROBLEMS\n");
	printf("\tCategories: \n");
	printf("\t\t[1]\tPROBLEM #1\n");
	printf("\t\t[2]\tPROBLEM #2\n");
	printf("\t\t[3]\tPROBLEM #3\n");
	printf("\t\t[4]\tEXIT\n\n");
	printf("\t\tEnter Category [1-4]: ");
}

void cargo(void)
{
	float tt, rf, carg, dut, vat, dis; /* trip ticket */
	float nk, ak; /* cargo */

	printf("\n\tEnter number of kilos: ");
	scanf("%f", &nk);
	printf("\tEnter amount per kilo: ");
	scanf("%f", &ak);
	printf("\tEnter regular fare:    ");
	scanf("%f", &rf);
	carg = nk*ak;
	dut = rf * 0.20;
	vat = carg * 0.05;
	dis = (rf + carg + dut + vat) * 0.10;
	tt = (rf + carg + dut + vat) - dis;
	printf("\n\tDiscount:    %.2f\n", dis);
	printf("\tVAT:         %.2f\n", vat);
	printf("\tDUTIES:      %.2f\n", dut);
	printf("\tCARGO:       %.2f\n", carg);
	printf("\tTRIP TICKET: %.2f\n", tt);
}

float fare(int age, float oth, float tax)
{
	float f, d;

	f = 500 + oth + tax;
	if (age < 60)
		d = f*0.15;
	else 
		d = f*0.25;
	printf("\n\tDiscount: %.2f\n", d);
	return f-d;
}

int cat1(void)
{
	int opt;
	float nk, ak;

	puts("");
	printf("\t\t\"Welcome\"\n");
	printf("\tOption: \n");
	printf("\t\t[1]\tCARGO\n");
	printf("\t\t[2]\tFARE\n");
	printf("\t\t[3]\tBACK TO MAIN\n");
	printf("\t\tSelect Option: ");
	scanf("%d", &opt);
	switch (opt) {
	case 1:
		cargo();
		break;
	case 2:
	{
		int a;
		float o, t;

		printf("\n\tEnter age:    ");
		scanf("%d", &a);
		printf("\tEnter others: ");
		scanf("%f", &o);
		printf("\tEnter tax:    ");
		scanf("%f", &t);
		printf("\tDiscounted Fare: %.2f\n", fare(a, o, t));
	}
		break;
	case 3:
		return 0;
	default:
		printf("\n\tInvalid choice!\n");
		break;
	}
	return 1;
}

void add(void)
{
	float x, y;

	printf("\n\tEnter [1st] number: ");
	scanf("%f", &x);
	printf("\tEnter [2nd] number: ");
	scanf("%f", &y);
	printf("\n\tSUM: %.2f\n", x+y);
}

float sub(void)
{
	float x, y;

	printf("\n\tEnter [1st] number: ");
	scanf("%f", &x);
	printf("\tEnter [2nd] number: ");
	scanf("%f", &y);
	return x-y;
}

void mul(float x, float y)
{
	printf("\n\tPRODUCT: %.2f\n", x*y);
}

float divs(float x, float y)
{
	return x/y;
}

int cat2(void)
{
	int opt;

	puts("");
	printf("\t\tLIST OF ARITHMETIC OPERATORS\n");
	printf("\tOperators: \n");
	printf("\t\t[1]\tADDITION\n");
	printf("\t\t[2]\tSUBTRACTION\n");
	printf("\t\t[3]\tMULTIPLICATION\n");
	printf("\t\t[4]\tDIVISION\n");
	printf("\t\t[5]\tBACK TO MAIN\n\n");
	printf("\t\tSelect Option: ");
	scanf("%d", &opt);
	switch (opt) {
	case 1:
		add();
		break;
	case 2:
		printf("\n\tSUB: %.2f\n", sub());
		break;
	case 3:
	{
		float x, y;

		printf("\n\tEnter [1st] number: ");
		scanf("%f", &x);
		printf("\tEnter [2nd] number: ");
		scanf("%f", &y);
		mul(x, y);
	}
		break;
	case 4:
	{
		float x, y;

		printf("\n\tEnter [1st] number: ");
		scanf("%f", &x);
		printf("\tEnter [2nd] number: ");
		scanf("%f", &y);
		printf("\n\tQUOTIENT: %.2f\n", divs(x, y));
	}
		break;
	case 5:
		return 0;
	default:
		printf("\n\tInvalid choice!\n");
		break;
	}
	return 1;
}

void milkshake(void)
{
	int i, n;
	float p, o, cus;

	puts("");
	printf("\tMilk Shake Available Size: \n");
	printf("\tSmall  - 65 pesos\n");
	printf("\tMedium - 99 pesos\n");
	printf("\tLarge  - 145 pesos\n");
	printf("\n\tEnter number of orders: ");
	scanf("%d", &n);
	p = 0;
	for (i = 1; i <= n; ++i) {
		printf("\tEnter order [%d]: ", i);
		scanf("%f", &o);
		p += o;
	}
	printf("\n\tAMOUNT PAYABLE:  %.2f\n", p);
	printf("\tEnter customer pay: ");
	scanf("%f", &cus);
	printf("\tCHANGE:            %.2f\n", cus - p);
}

void milktea(void)
{
	int i, n;
	float p, o, cus;

	puts("");
	printf("\tMilk Shake Available Size: \n");
	printf("\tSmall  - 50 pesos\n");
	printf("\tMedium - 75 pesos\n");
	printf("\tLarge  - 105 pesos\n");
	printf("\n\tEnter number of orders: ");
	scanf("%d", &n);
	p = 0;
	for (i = 1; i <= n; ++i) {
		printf("Enter order [%d]: ", i);
		scanf("%f", &o);
		p += o;
	}
	printf("\n\tAMOUNT PAYABLE:  %.2f\n", p);
	printf("\tEnter customer pay: ");
	scanf("%f", &cus);
	printf("\tCHANGE:            %.2f\n", cus - p);
}

int cat3(void)
{
	int opt;

	puts("");
	printf("\t\tMACKY SNACKS BAR\n");
	printf("\t\tGenomoan, Loon, Bohol\n");
	printf("\t\t[1]\tMilk Shake\n");
	printf("\t\t[2]\tMilk Tea\n");
	printf("\t\t[3]\tSiomai with Juice\n");
	printf("\t\t[4]\tBACK TO MAIN\n\n");
	printf("\t\tSelect Menu: ");
	scanf("%d", &opt);
	switch (opt) {
	case 1:
		milkshake();
		break;
	case 2:
		milktea();
		break;
	case 3:
		printf("\n\tOut of Order!..Thank you\n");
		break;
	case 4:
		return 0;
	default:
		printf("\n\tInvalid choice!\n");
		break;
	}
	return 1;
}

int main(void)
{
	int cat; 

	system("clear");
	while (1) {
	splash();
		scanf("%d", &cat);
		switch (cat) {
		case 1:
			while (cat1());
			system("clear");
			continue;
		case 2:
			while (cat2());
			system("clear");
			continue;
		case 3: 
			while (cat3());
			system("clear");
			continue;
		case 4:
			printf("\n\tExited.\n");
			return 0;
		default:
			printf("\n\tInvalid choice!\n");
			break;
		}
	}
	return 0;
}
