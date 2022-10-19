#include <stdio.h>

int main(void) {
  float grades[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
  int max_i = 0;
  char subjects[5][256] = { "English", "Mathematics", "Filipino", "Hekasi", "Science" };
  char* rating;

  for (int i = 0; i < 5; i++) {  
    printf("Enter grade for subject %s: ", subjects[i]);
    scanf("%f", grades + i);
    if (grades[i] > grades[max_i]) max_i = i; 
  }
  if (grades[max_i] >= 75 && grades[max_i] <= 80) {
    rating = "Fair";
  } else if (grades[max_i] >= 80 && grades[max_i] <= 85) {
    rating = "Good";
  } else if (grades[max_i] >= 85 && grades[max_i] <= 90) {
    rating = "Best";
  } else if (grades[max_i] >= 90 && grades[max_i] <= 95) {
    rating = "Very Good";
  } else if (grades[max_i] >= 95 && grades[max_i] <= 100) {
    rating = "Excellent";
  }

  printf("\nMaximum grade is: %.2f in %s.\n", grades[max_i], subjects[max_i]);
  printf("Rating: %s\n", rating);

  return 0;
}
