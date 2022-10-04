// Name: assignment_1.c
// Purpose: AIO program that contains functions that you can use in Items no. 1 - 3.
// Author: Francis Baldon

// Includes directives to stdio and stdlib libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
int num_prompter(int operation);
int square_1(int *num_inputsum);
int difference_2(int *num_inputs);
int complex_difference_3(int *num_inputs);
void display_output(int output);
int retry(void);

// Main function -> Fun starts here
int main(void) {
	starting_point:
	system("clear");
	int operation;

	printf("1. Computes square root of a number.\n");
	printf("2. Computes difference of two numbers.\n");
	printf("3. Performs the operation stated in Item 3.\n");
	printf("0. Exit.\n");

	printf("\nEnter operation(digit): ");
	scanf("%d", &operation);

	// Checks if the input is valid
	first_prompt:
	if (operation != 1 && operation != 2 && operation != 3 && operation != 0) {
		goto first_prompt;
	} else if (operation == 1 || operation == 2 || operation == 3) {
		if (num_prompter(operation) == true) {
			goto starting_point;
		} else {
			printf("Program terminated.\n");
		}
	} else if (operation == 0) {
		printf("Program terminated.\n");
		return EXIT_SUCCESS;
	}

	return EXIT_SUCCESS;
}

// Function Declarations 
// Function to prompt the user for input depending on the operation.
int num_prompter(int operation) {
	int *num_inputs = malloc(sizeof(int));

	switch (operation) {
	case 1:
		prompt_1:
		printf("Enter number: ");
		if (scanf("%d", &num_inputs[0]) == 0) goto prompt_1;

		display_output(square_1(num_inputs));
		free(num_inputs);
		break;

	case 2:
		num_inputs = malloc(sizeof(int) * 2);

		prompt_2:
		printf("Enter first number: ");
		if (scanf("%d", &num_inputs[0]) == 0) goto prompt_1;
		prompt_3:
		printf("Enter second number: ");
		if (scanf("%d", &num_inputs[1]) == 0) goto prompt_2;

		display_output(difference_2(num_inputs));
		free(num_inputs);
		break;

	case 3:
		num_inputs = malloc(sizeof(int) * 4);

		prompt_4:
		printf("Enter first number: ");
		if (scanf("%d", &num_inputs[0]) == 0) goto prompt_4;
		prompt_5:
		printf("Enter second number: ");
		if (scanf("%d", &num_inputs[1]) == 0) goto prompt_5;
		prompt_6:
		printf("Enter third number: ");
		if (scanf("%d", &num_inputs[2]) == 0) goto prompt_6;
		prompt_7:
		printf("Enter fourth number: ");
		if (scanf("%d", &num_inputs[3]) == 0) goto prompt_7;

		display_output(complex_difference_3(num_inputs));
		free(num_inputs);
		break;

	default:
		printf("This code should never execute!\n");
		exit;
	}

	return retry() ? true : false;
}

// Here are the actual operations
int square_1(int *num_inputs) {
	return num_inputs[0] * num_inputs[0];
}

int difference_2(int *num_inputs) {
	return num_inputs[0] - num_inputs[1];
}

int complex_difference_3(int *num_inputs) {
	return (num_inputs[0] + num_inputs[1]) - (num_inputs[2] + num_inputs[3]);
}

int retry() {
	char choice;

	prompt:
	// This section of code is broken lmao
	printf("\nRetry (y/n)?: ");
	scanf("%c", &choice);
	// End
	
	if (choice != 'y' && choice != 'n') {
		goto prompt;
	} else if (choice == 'y') {
		return true;
	} else if (choice == 'n') {
		return false;
	}

	return EXIT_SUCCESS;
}

// Displays the final output
void display_output(int output) {	
	printf("\nThe output is: %d\n", output);

	return;
}
