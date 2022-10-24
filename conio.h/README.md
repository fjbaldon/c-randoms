# Headers files for gcc(Linux) to work with conio.h library
`clrscr(void)`, `gotoxy(int, int)`, `getch(void)`, and `getche(void)` functions are declared in the `conio.h` header file. 


Usage:
```
git clone https://github.com/fjbaldon/c_randoms
```
1. Clone repo.
2. `cd` into conio.h and cut/copy both the `conio.h` and `conio.c` files in the same directory you're compiling your C code.
3. Simply add `#include "conio.h"` in your C code to finish things up.
4. Don't forget to add `conio.c` when compiling!
`gcc -o main main.c conio.c`

You might want to edit all occurences of `system("clear")` to `system("cls")` in the `conio.c` source file if you're on Windows.
