// Name: s_cashier.c
// Purpose: Simple cashier
// Author: Francis Baldon

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char flag = 'n', restgtot = 'n';
	int nprod = 0, qntty = 0;
	float price = 0.0, subtot = 0.0, gtot = 0.0;
	float pd = 0.0, change = 0.0;

	do {
		system("clear");
		do {
			printf("Enter number of items purchased, -1 to quit: ");
			scanf("%d", &nprod);
			if (nprod == -1)
			return EXIT_SUCCESS;
		} while (nprod < 1);

		system("clear");
		for (size_t i = 1; i<=nprod; i++) {
			printf("Enter quantity for product(%ld): ", i);
			scanf("%d", &qntty);
			printf("Enter price for product(%ld):    ", i);
			scanf("%f", &price);
			subtot = qntty * price;
			printf("SUBTOTAL: %.2f\n\n", subtot);
			gtot += subtot;
		}

		printf("\nGRAND TOTAL: %.2f\n", gtot);
		printf("Enter amount paid: ");
		scanf("%f", &pd);
		change = pd - gtot;
		printf("CHANGE: %.2f\n", change);

		do {
			printf("AGAIN? [y/n]: ");
			scanf(" %c", &flag);
		} while (flag != 'y' && flag != 'n');
		do {
			printf("RESET GRAND SUM? [y/n]");
			scanf(" %c", &restgtot);
		} while (restgtot!= 'y' && restgtot != 'n');
		if (restgtot == 'y') {
			gtot = 0.0;
		} 		
	} while (flag == 'y');

	return EXIT_SUCCESS;
}
