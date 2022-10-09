#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Difference of 2 Numbers Calculator\n");
  int num_1, num_2, diff;

  printf("\nEnter first number:  ");
  scanf("%d", &num_1);
  printf("Enter second number: ");
  scanf("%d", &num_2);

  diff = num_1 - num_2;
  printf("\n%d - %d = %d\n", num_1, num_2, diff);

  getch();
  return 0;
}
