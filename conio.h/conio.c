#include "conio.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>

int clrscr(void) {
  system("clear");
  return 0;
}

int gotoxy(int x, int y) { 
  printf("%c[%d;%df", 0x1b, y, x);
  return 0;
}
 
int getch(void) {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    system("clear");
    return ch;
}

int getche(void) {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    system("clear");
    return ch;
}
