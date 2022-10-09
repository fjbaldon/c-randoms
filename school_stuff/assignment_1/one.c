#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Square of a Number\n");
  int num;

  printf("\nEnter number: ");
  scanf("%d", &num);
  
  printf("\n%d ^ 2 is %d\n", num, num * num);

  getch();
  return 0;
} 
