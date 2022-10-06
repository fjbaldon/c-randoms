#include <stdio.h>
#include <conio.h>

int main(void) {
  clrscr();
  printf("Square of a Number\n");
  int num;

  printf("Enter number: ");
  scanf("%d", &num);
  
  printf("%d squared is: %d\n", num, num * num);

  getch();
  return 0;
} 
