#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  int a, b, c, d, e;

  printf("Enter first number:  ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("Enter third number:  ");
  scanf("%d", &c);

  e = (d = a > b ? a : b) < c ? c : d;
  printf("\nThe largest number is %d.\n", e);

  getch();
  return 0;
}
