// Name: smallest_bills.c
// Purpose: To print the smallest number of $20, $15, $10, $1 bills 
// Author: Francis Baldon

#include <stdio.h>
#include <stdlib.h>

int *solver(int amount);
void printer(int *arr);

int main(void)
{
   system("clear");
   int amount;
   printf("Enter a dollar amount (enter '0' to quit): ");
   scanf("%d", &amount);

   if (amount == 0) {
      printf("Terminated.\n");
      return 0;
   }

   printer(solver(amount));

   return 0;
} 

int *solver(int amount) 
{
   int n20, n10, n5, n1;
   int *arr = malloc(sizeof(int) * 4);

   n20 = amount / 20;
   amount -=  n20 * 20;

   n10 = amount / 10;
   amount -= n10 * 10;

   n5 = amount / 5;
   amount -= n5 * 5;

   n1 = amount / 1;

   arr[0] = n20;
   arr[1] = n10;
   arr[2] = n5;
   arr[3] = n1;

   return arr;
}

void printer(int *arr) 
{
   printf("$20 bills: %d\n", arr[0]);
   printf("$10 bills: %d\n", arr[1]);
   printf(" $5 bills: %d\n", arr[2]);
   printf(" $1 bills: %d\n", arr[3]);
   free(arr);
   return;
}
