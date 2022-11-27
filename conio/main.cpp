#include <stdio.h>
#include "conio.h"

int main() {
  clrscr();

/*   Doctor's Fee */
  printf("DOCTOR'S FEE\n\n");
  float docs_fee, anaes_fee, spec_fee, surg_fee;
  printf("Enter anaesthesiologist fee: ");
  scanf("%f", &anaes_fee);
  printf("Enter specialist fee:        ");
  scanf("%f", &spec_fee);
  printf("Enter surgeon's fee:         ");
  scanf("%f", &surg_fee);

  docs_fee = anaes_fee + spec_fee + surg_fee;
  clrscr();

/*   Lab Fees */
  printf("LAB FEE\n\n");
  float lab_fee, xray , cbc , urinalysis;
  printf("Enter xray fees:                   ");
  scanf("%f", &xray);
  printf("Enter cbc fees:                    ");
  scanf("%f", &cbc);
  printf("Enter blood typing urinalysis fee: ");
  scanf("%f", &urinalysis);

  lab_fee = xray + cbc + urinalysis;
  clrscr();

/*   Other charges */
  printf("OTHER CHARGES\n\n");
  float others, ex_beds, syrnges, dextrse, dress_lq, meds;
  printf("Enter extra beddings:  ");
  scanf("%f", &ex_beds);
  printf("Enter syringes:        ");
  scanf("%f", &syrnges);
  printf("Enter dextrose:        ");
  scanf("%f", &dextrse);
  printf("Enter dressing liquid: ");
  scanf("%f", &dress_lq);
  printf("Enter medicines:       ");
  scanf("%f", &meds);

  others = ex_beds + syrnges + dextrse + dress_lq + meds;
  clrscr();

/*   Room charges */
  printf("ROOM CHARGES\n\n");
  float room_chrges, conf_days, rate_p_day;
  printf("Enter no. of confined days: ");
  scanf("%f", &conf_days);
  printf("Room rate per day:          ");
  scanf("%f", &rate_p_day);

  room_chrges = conf_days * rate_p_day;
  clrscr();

/*   Tax  */
  float tax;
  tax = (0.1 * others) + (0.12 * docs_fee);

/*   Overall hospital bill */
  float hosp_bill;
  hosp_bill = docs_fee + room_chrges + lab_fee + others + tax;
  
/*   Main output */
  printf("Doctor's fee:  %5.2f\n", docs_fee);
  printf("Lab fees:      %5.2f\n", lab_fee);
  printf("Other charges: %5.2f\n", others);
  printf("Room charges:  %5.2f\n", room_chrges);
  printf("Tax:           %5.2f\n", tax);
  printf("Hospital Bill: %5.2f\n", hosp_bill);

  getch();
}
