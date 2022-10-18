#include <stdio.h>

float taxiFare(float km) {
  float fare = 60.00f;
  if (km < 2.00f) return fare;
  for (int km_add = (int)km - 1; km_add > 0; km_add--) {
    fare += 20.00f;
  }

  return fare; 
}

float jeepFare(int pass_ty, float km) {
  enum passengerType{ reg = 1, dscount = 2 };
  float reg_fare = 11.00f, dscount_fare = 10.00f;
  if (pass_ty == reg) {
    if (km < 2.00f) return reg_fare;
    for (int km_add = (int)km - 1; km_add > 0; km_add--) { 
      reg_fare += 1.15;
    }
    return reg_fare;
  } else if (pass_ty == dscount) {
    if (km < 2.00f) return dscount_fare;
    for (int km_add = (int)km - 1; km_add > 0; km_add--) {
      dscount_fare += 0.92f;
    } 
    return dscount_fare;
  } else puts("Error!");

  return 0;
}

int main(void) {
  puts("SY Lines");
  fputs("Enter (1) for Taxi. (2) for Jeepney: ", stdout);

  int vehicle;
  scanf("%d", &vehicle);
  enum Vehicles{ Taxi = 1, Jeepney = 2 };

  if (vehicle == Taxi) {
    float kms;
    fputs("Enter kilometers: ", stdout);
    scanf("%f", &kms);
    printf("\nYour fair will be: %.2f\n", taxiFare(kms));

  } else if (vehicle == Jeepney) {
    int pass_ty;
    float kms, fare;
    fputs("\nEnter passenger type:", stdout);
    fputs("\n(1) for Regular. (2) for SP, SC & PWD:", stdout);
    scanf("%d", &pass_ty);
    fputs("Enter kilometers: ", stdout);
    scanf("%f", &kms);
    printf("\nYour fair will be: %.2f\n", jeepFare(pass_ty, kms));
  } else {
    puts("Error!");
    return 0;
  }

  return 0;
}
