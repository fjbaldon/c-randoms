#include <stdio.h>
#include <stdlib.h> // for system()
#include <conio.h>
#include <dos.h> // for sleep()

int get_identity(void); // checks for the password
int main_menu(void); // main menu
int one_m(void); // first option
float two_m(float*, float*, float*); //second option
int three_m(void); // third option
int four_m(void); // fourth option
int prompt_user(void); // prompts the user to go back or exit

int main(void) {
	int ch = 0;
	int c = 0; // for case 3
	float balance = 0.0, depst = 0.0, wdraw = 0.0; // for case 2


	get_identity();
	mmenu:
	ch = main_menu();
	switch (ch) {

		case 1:
			while (1) {
				if (one_m() == 4) {
					goto mmenu;
				}
				if (prompt_user() == 1) {
					continue;
				} else {
					puts("");
					break;
				}
			}
		break;
		case 2:
			while (1) {
				if (two_m(&balance, &depst, &wdraw) == 4) {
					puts("");
					break;
				}
				if (prompt_user() == 1) {
					continue;
				} else {
					puts("");
					break;
				}
			}
		break;
		case 3:
			while (1) {
				c = three_m();
				if (c == 3) {
					goto mmenu;
				} else if (c == 6) {
					continue;
				} else if ( c == 4 || c == 5) {
					puts("");
					break;
				}
				if (prompt_user() == 1) {
					continue;
				} else {
					puts("");
					break;
				}
			}
		break;
		case 4:
			four_m();
		break;
	}
	getch();
	return 0;
}

int get_identity(void) {
	clrscr();
	int p = 1234, up = 0;

	do {
		printf("\n\tEnter password: ");
		scanf("%d", &up);
		if (p != up)
			puts("Incorrect password! Try again.");
		scanf("%*[^\n]");
	} while (p != up);
	return 0;
}

int main_menu(void) {
	int ch = 0;

	clrscr();
	puts("\n\t\tKRISTOFF MACE");
	puts("\t\t Loon, Bohol\n");
	puts("[1] SEA BULLET CORPORATION");
	puts("[2] ATM TRANSACTION");
	puts("[3] OTHER APPS");
	puts("[4] EXIT\n");
	do {
		printf("\tPRESS #: ");
		scanf("%d", &ch);
		scanf("%*[^\n]");
		if (ch != 1 && ch != 2 && ch != 3 && ch != 4) {
			puts("Invalid option!");
		} else {
			break;
		}
	} while (1);
	return ch;
}

int one_m(void) {
	int ch = 0;
	float freight = 0, vat = 0, tfee = 0, fare = 0, dscount = 0; // C2
	char fname[128] = "", lname[128] = ""; // C3 
	int age = 0; 
	float others = 0, tax = 0;


	clrscr();
	puts("\n\t\tSEA BULLET CORPORATION");
	puts("\t\t   Tagbilaran City\n");
	puts("TRIP SCHEDULE: ");
	puts("[1] MANILA");
	puts("[2] CEBU");
	puts("[3] SIARGAO");
	puts("[4] BACK\n");
	do {
		printf("\tENTER DESTINATION: ");
		scanf("%d", &ch);
		scanf("%*[^\n]");
		if (ch != 1 && ch != 2 && ch != 3 && ch != 4) {
			puts("Invalid option!");
		} else {
			break;
		}
	} while (1);
	switch (ch) {
		case 1: 
			clrscr();
			puts("\nMabuhay");
		break;
		case 2:
			clrscr();
			printf("Enter freight:      ");
			scanf("%f", &freight);
			printf("Enter vat:          ");
			scanf("%f", &vat);
			printf("Enter terminal fee: ");
			scanf("%f", &tfee);
			fare = 500.00 + freight + vat + tfee;
			if (fare < 1500.00) {
				dscount = fare * 0.10;
			} else {
				dscount = fare * 0.15;
			}
			printf("\nFARE:            %2.f\n", fare);
			printf("DISCOUNT:        %.2f\n", dscount);
			printf("DISCOUNTED FARE: %.2f\n", fare - dscount);
		break;
		case 3:
			clrscr();
			printf("Enter first name: ");
			scanf(" %127[^\n]%*c", fname);
			printf("Enter last name : ");
			scanf(" %127[^\n]%*c", lname);
			printf("Enter age       : ");
			scanf("%d", &age);
			printf("\nEnter other charges: ");
			scanf("%f", &others);
			printf("Enter taxes        : ");
			scanf("%f", &tax);
			fare = 1000.00 + others + tax;
			if (age < 60) {
				dscount = fare * 0.15;
			} else {
				dscount = fare * 0.25;
			}
			printf("\nFIRSTNAME: %s\n", fname);
			printf("LASTNAME:  %s\n", lname);
			printf("AGE:       %d\n", age);
			printf("FARE:            %.2f\n", fare);
			printf("DISCOUNT:        %.2f\n", dscount);
			printf("DISCOUNTED FARE: %.2f\n", fare - dscount);
		break;
		case 4:
		break;
	} 
	return ch;
}

float two_m(float* balance, float* depst, float* wdraw) {
	int ch = 0;
	float dtemp = 0, wtemp = 0;

	clrscr();
	puts("\n\tATM TRANSACTION");
	puts("\n[1] DEPOSIT");
	puts("[2] WITHDRAW");
	puts("[3] BALANCE");
	puts("[4] EXIT\n");
	do {
		printf("\tSELECT: ");
		scanf("%d", &ch);
		scanf("%*[^\n]");
		if (ch != 1 && ch != 2 && ch != 3 && ch != 4) {
			puts("Invalid option!");
		} else {
			break;
		}
	} while (1);
	switch (ch) {
		case 1: 
			clrscr();
			printf("\nAmount you want to deposit: ");
			scanf("%f", &dtemp);
			puts("\nProcessing...");
			*depst += dtemp;
			*balance += dtemp;
			sleep(3);
			puts("\nSuccessfully deposited into your account! You can withdraw anytime.");
			printf("Your balance is: %.2f\n", *balance);
		break;
		case 2:
			clrscr();
			printf("\nAmount you want to withdraw: ");
			scanf("%f", &wtemp);
			if (*balance < 100.00) {
				puts("\nYou cannot transact your withdrawal if you don't have enough funds on your bank account. Account should have at least 100 PHP.");
				break;
			} else if (wtemp > *balance) {
				puts("\nMake sure the amount you'll withdraw is lesser than the amount of your deposited money.");
				break;
			} else if (*balance - wtemp < 100) {
				puts("\nYou need to have at least 100 PHP deposited in your account.");
				break;
			}
			*wdraw += wtemp;
			*balance = *balance - wtemp;
			puts("\nProcessing...");
			sleep(2);
			puts("\nSuccessfully withdrawn!");
			printf("Your balance is: %.2f\n", *balance);
		break;
		case 3:
			clrscr();
			printf("\nDEPOSITED: %.2f\n", *depst);
			printf("WITHDRAWN: %.2f\n", *wdraw);
			printf("BALANCE:   %.2f\n", *balance);
		break;
		case 4:
		break;
	} 
	return ch;
}

int three_m(void) {
	int ch = 0, ch2 = 0;
	float grade = 0;
	float quiz = 0, pquiz = 0, project = 0, pproject = 0, exam = 0, pexam = 0;

	clrscr();
	puts("\n\tOTHER APPS");
	puts("\nCATEGORIES: ");
	puts("[1] STUDENT'S GRADE");
	puts("[2] CONVERTER");
	puts("[3] BACK\n");
	do {
		printf("\tSELECT CATEGORY: ");
		scanf("%d", &ch);
		scanf("%*[^\n]");
		if (ch != 1 && ch != 2 && ch != 3) {
			puts("Invalid option!");
		} else {
			break;
		}
	} while (1);
	score:
	switch (ch) {
		case 1: 
			clrscr();
			puts("\n\t\t\t STUDENT'S GRADE");
			puts("\t\t\tRATING PERCENTAGE\n");
			puts("[1] ELISA \tMAJOR EXAM(40%) PROJECTS(35%) QUIZZES(25%)");
			puts("[2] NOEL  \tMAJOR EXAM(40%) PROJECTS(30%) QUIZZES(20%)");
			puts("[3] BACK\n");
			do {
				printf("\tSELECT STUDENT: ");
				scanf("%d", &ch2);
				scanf("%*[^\n]");
				if (ch != 1 && ch != 2 && ch != 3) {
					puts("Invalid option!");
					} else {
					break;
				}
			} while (1);
			switch (ch2) {
				case 1:
					clrscr();
					puts("\n\tYou've chosen Elisa.");
					printf("Supply the scores with this syntax: \n");
					printf("score<SPACE>total | Example: 85 100\n");
					printf("\nSCORES for QUIZ:    ");
					scanf("%f %f", &quiz, &pquiz);
					printf("SCORES for PROJECT: ");
					scanf("%f %f", &project, &pproject);
					printf("SCORES for EXAM:    ");
					scanf("%f %f", &exam, &pexam);
					grade = (((quiz / pquiz) * 50) + 50) * 0.25;
					grade += (((project / pproject) * 50) + 50) * 0.35;
					grade += (((exam / pexam) * 50) + 50) * 0.40;
					printf("\n\tELISA's GRADE: %.2f\n", grade);
					if (prompt_user() == 1) {
						goto score;
					} else {
						return 4;
					}
				break;
				case 2:
					clrscr();
					puts("\n\tYou've chosen Noel.");
					printf("Supply the scores with this syntax: \n");
					printf("score<SPACE>total | Example: 85 100\n");
					printf("\nSCORES for QUIZ:    ");
					scanf("%f %f", &quiz, &pquiz);
					printf("SCORES for PROJECT: ");
					scanf("%f %f", &project, &pproject);
					printf("SCORES for EXAM:    ");
					scanf("%f %f", &exam, &pexam);
					grade = (((quiz / pquiz) * 50) + 50) * 0.20;
					grade += (((project / pproject) * 50) + 50) * 0.30;
					grade += (((exam / pexam) * 50) + 50) * 0.40;
					printf("\n\tNOEL's GRADE: %.2f\n", grade);
					if (prompt_user() == 1) {
						goto score;
					} else {
						return 5;
					}
				break;
				case 3:
					return 6;
				break;
			}
		break;
		case 2:
			clrscr();
			puts("\nOpps!");
		break;
		case 3:
		break;
	} 
	return ch;
}

int four_m(void) {
	puts("");
	return 0;
}

int prompt_user(void) {
	char ch = EOF;

	do {
		printf("\nEnter 'y' to go back, 'n' to exit: ");
		scanf(" %c", &ch);
		if (ch != 'y' && ch != 'n') {
			puts("Invalid option!");
		} else {
			break;
		}
		scanf("%*[^\n]");
	} while (1);
	if (ch == 'y') {
		return 1;
	} else if (ch == 'n') {
		return 0;
	} else {
		return -1;
	}
}
