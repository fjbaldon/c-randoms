#include <stdio.h>
#include <conio.h>

main() {
  clrscr();
  float prev_rd, pres_rd, read, rate, part_bll, tax, bill;

  printf("Enter previous reading:     ");
  scanf("%f", &prev_rd);
  printf("Enter present reading:      ");
  scanf("%f", &pres_rd);
  printf("Enter rate per cubic meter: ");
  scanf("%f", &rate);

  read = pres_rd - prev_rd;
  part_bll = read * rate;

  if (read < 10) {
    tax = part_bll * 0.10;
  } else if (read >= 10 && read <= 25) {
    tax = part_bll * 0.15;
  } else if (read >= 26 && read <= 45) {
    tax = part_bll * 0.20;
  } else if (read >= 46 && read <= 60) {
    tax = part_bll * 0.25;
  } else if (read > 60) {
    tax = part_bll * 0.30;
  }

  bill = part_bll + tax;
  printf("\nBill will be PHP %.2f\n", bill);

  getch();
}
