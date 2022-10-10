#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Water Bill Calculator\n");
  float prev_reading, pres_reading, bill;
  const float COST_PER_CUBIC_METER = 15.50;

  printf("\nEnter previous reading in cubic meter: ");
  scanf("%f", &prev_reading);
  printf("Enter present reading in cubic meter:  ");
  scanf("%f", &pres_reading);
  
  bill = (pres_reading - prev_reading) * COST_PER_CUBIC_METER;
  printf("\nYour water bill will be: PHP %.2f\n", bill);

  getch();
  return 0;
}
