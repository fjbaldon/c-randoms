#include <stdio.h>
#include <conio.h>

int 
main(void) {
	int s, i;
	float g, sg  = 0.0;

	clrscr();
	printf("Enter number of subjects:    ");
	scanf("%d", &s);
	for (i = 1; i <= s; i++) {
		printf("Enter grade for subject[%d]: ", i);
		scanf("%f", &g);
		sg += g;
	}
	printf("\nAVERAGE GRADE: %.2f\n", sg/s);

	getch();
	return 0;
}
