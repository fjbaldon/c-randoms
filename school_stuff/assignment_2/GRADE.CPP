#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int 
main(void)
{
    int chone = 0, chtwo = 0;
    float sc = 0, pf = 0, t = 0, grade = 0;

    clrscr();
	puts("CATEGORIES;");
	puts("[1]\tSTUDENT'S GRADE");
	puts("[2]\tCONVERTER");
	puts("[3]\tBACK");
	printf("\nENTER CATEGORY: ");
	scanf("%d", &chone);

    switch (chone) {
    case 1:
        clrscr();
        puts("\t\t\t STUDENT'S GRADE");
        puts("\t\t\tRATING PERCENTAGE");
        puts("[1]\tELISA");
        puts("[2]\tNOEL");
        puts("[3]\tBACK");
        printf("\nSELECT STUDENT: ");
        scanf("%d", &chtwo);
        switch (chtwo) {
        case 1:
            clrscr();
            puts("ELISA");
            printf("Quizzes(100/100):  ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.25;
            printf("Projects(100/100): ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.35;
            printf("Exams(100/100):    ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.40;
            grade = t;
            break;
        case 2:
            clrscr();
            puts("NOEL");
            printf("Quizzes(100/100):  ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.20;
            printf("Projects(100/100): ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.30;
            printf("Exams(100/100):    ");
            scanf("%f/%f", &sc, &pf);
            t += (((sc / pf) * 50) + 50) * 0.40;
            grade = t;
            break;
        case 3:
            return main();
        }
        printf("\nGrade: %.3f\n", grade);
        break;
    case 2:
        clrscr();
        puts("Opps!");
        break;
    case 3:
        break;
    }

    getch();
    return EXIT_SUCCESS;
}
