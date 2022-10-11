#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Difference of 4 Numbers Calculator\n");
  int num_1, num_2, num_3, num_4, diff;

  printf("\nEnter first number:  ");
  scanf("%d", &num_1);
  printf("Enter second number: ");
  scanf("%d", &num_2);
  printf("Enter third number:  ");
  scanf("%d", &num_3);
  printf("Enter fourth number: ");
  scanf("%d", &num_4);
  
  diff = (num_1 + num_2) - (num_3 + num_4);
  printf("\n(%d + %d) - (%d + %d) = %d\n", num_1, num_2, num_3, num_4, diff);

  getch();
  return 0;
}
