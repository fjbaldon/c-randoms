#include <stdio.h>
#include <conio.h>

int 
main(void) {
	int n, i, s = 0, f = 1;

	clrscr();
	for (i = 1; f == 1;i++) {
		scanf("%d", &n);
		if (n > s && i != 1)
			f = 0;
		s += n;
	}
	getch();
	return 0;
}
