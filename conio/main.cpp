#include <stdio.h>
#include <conio.h>

int main() {
  //No.1 Final bill of a water consumer
  float preread, prevread, reading, parbill, ampmeter, fbill, tax;

  printf("\nEnter present reading: ");
  scanf("%f",&preread);
  printf("\nEnter previous reading: ");
  scanf("%f",&prevread);
  printf("\nEnter amount per cubic meter: ");
  scanf("%f",&ampmeter);
  //compute 
  reading = preread - prevread;
  parbill = reading * ampmeter;

  if (reading < 10) {
    tax = parbill *.10;
  } else if(reading >=10 && reading <=25) {
    tax = parbill *.15;       
  } else if(reading >=26 && reading <=45) {
    tax = parbill *.20;
  } else if(reading >=46 && reading <=60) {
    tax = parbill *.25; 
  } else {
    tax = parbill *.30;   
  }
  //compute final bill
  fbill = parbill + tax;
  printf("\nFinal Bill of the Consumer is: %.2f",fbill);
  return 0;
}
