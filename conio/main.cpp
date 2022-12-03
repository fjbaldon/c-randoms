#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

int
main(void) {
        clrscr();
        int a, b, c, ab, abc; 

        printf("Enter first number:  ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("Enter third number:  ");
        scanf("%d", &c);

        abc = (ab = a > b ? a : b) > c ? ab : c;

        printf("\nThe largest number is %d.\n", abc);

        getch();
        return EXIT_SUCCESS;
}
