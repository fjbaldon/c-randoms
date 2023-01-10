#include <stdio.h>
#include <conio.h>

int 
main(void) {
	int s, i, u9 = 0, b9u8 = 0, b8u7 = 0;
	float g, sg  = 0.0;

	clrscr();
	printf("Enter number of subjects:    ");
	scanf("%d", &s);
	for (i = 1; i <= s; i++) {
		printf("Enter grade for subject[%d]: ", i);
		scanf("%f", &g);
		if (g >= 90)
			u9++;
		else if (g < 90 && g > 80)
			b9u8++;
		else if (g <= 80 && g >= 75)
			b8u7++;
		sg += g;
	}
	printf("\nAVERAGE GRADE: %.2f\n", sg/s);
	printf("NO OF GRADES: 90 UP:    %d\n", u9);
	printf("NO OF GRADES: 81-89:    %d\n", u9);
	printf("NO OF GRADES: 75-80:    %d\n", u9);

	getch();
	return 0;
}
