#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Total Assessment Calculator\n");
  int num_units;
  float cost_per_unit, misc_fees, lab_fees, equip_fees, tot_assess;

  printf("\nEnter number of units enrolled: ");
  scanf("%d", &num_units);
  printf("Enter cost per unit:            ");
  scanf("%f", &cost_per_unit);
  puts("\nOTHER CHARGES");
  printf("Enter miscellaneous fees:       ");
  scanf("%f", &misc_fees);
  printf("Enter lab fees:                 ");
  scanf("%f", &lab_fees);
  printf("Enter equipment fees:           ");
  scanf("%f", &equip_fees);
  
  tot_assess = (num_units * cost_per_unit) + (misc_fees + lab_fees + equip_fees);
  printf("\nYour total assessment will be: PHP %.2f\n", tot_assess);

  getch();
  return 0;
}
