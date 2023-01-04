// Name: abc_store.c
// Purpose: Cashier for a shop that sells balls
// Author: Francis Baldon

#include <stdio.h>
#include <stdlib.h>

float balls_cashier(int balls) {
  float ball_price = 4.75f;
  if (balls <= 10) return ball_price * balls;
  else if (balls > 10) {
    float dscount;
    dscount = (ball_price * balls) * 0.1f;
    return (ball_price * balls) - dscount;
  }
  else return 0;
}

int main(void) {
  system("clear");
  int balls;

  puts("ABC STORE CASHIERING SYSTEM");
  fputs("\nENTER NUMBER OF BALLS: ", stdout);
  scanf("%d", &balls);
  printf("TOTAL: %.2f\n", balls_cashier(balls));
  puts("\n*** THANK YOU FOR SHOPPING WITH US ***");

  return EXIT_SUCCESS;
}
