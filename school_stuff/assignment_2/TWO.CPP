#include <stdio.h>
#include <conio.h>

main() {
  clrscr();
  float temp, dose;
  printf("Enter temp: ");
  scanf("%f", &temp);

  if (temp >= 38 && temp <= 40) {
    dose = 15.0;
  } else if (temp >= 41 && temp <= 45) {
    dose = 25.0;
  } else if (temp >= 46 && temp <= 49) {
    dose = 35.0;
  } else if (temp >= 50) {
    dose = 45.0;
  } else {
    dose = 0.0;
  }

  printf("\nDosage is at %.2f ml\n", dose); 

  getch();
} 
