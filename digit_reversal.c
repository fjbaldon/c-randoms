// Name: digit_reversal.c
// Purpose: To reverse a two-three digit number
// Author: constantineexx

#include <stdio.h>
#include <stdlib.h>

int prompt(void);
int *digit_reverser(int digit);
void digit_printer(int *arr);

int main(void) {
   system("clear");
   int stopper = prompt();
   while (stopper != 0) {
      digit_printer(digit_reverser(stopper));
      stopper = prompt();
   }
   printf("Terminated.\n");
	return 0;
}

int prompt(void) {
	int digit;
	printf("Enter a two or three-digit number (enter '0' to quit): ");
	scanf("%d", &digit);

	return digit;
}

int *digit_reverser(int digit) {
   if (digit >= 100 && digit <=999) {
		int first_d, second_d, third_d;
		int *arr = malloc(sizeof(int) * 4);
		first_d = digit / 100;
		second_d = (digit % 100) / 10;
		third_d = (digit % 100) % 10;

		arr[0] = first_d;
		arr[1] = second_d;
		arr[2] = third_d;

		return arr;
	} else if (digit >= 10 && digit <= 99) {
		int first_d, second_d;
		int *arr = malloc(sizeof(int) * 3);
		first_d = digit / 10;
		second_d = digit % 10;
		
		arr[0] = first_d;
		arr[1] = second_d;

		return arr;
	} else {
		printf("Error! Invalid input!\n");
		exit(0);
	}
}

void digit_printer(int *arr) {
	if (arr[2] == '\0') {
		printf("The reversal is: %d%d\n", arr[1], arr[0]);
		free(arr);
		return;
	} else if (arr[3] == '\0') {
		printf("The reversal is: %d%d%d\n", arr[2], arr[1], arr[0]);
		free(arr);
		return;
	} else {
		printf("Error\n");
		exit(0);
	}
}
