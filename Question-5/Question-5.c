//  WAP to read two floating type numbers from user. Calculate their sum, difference, product and average

#include <stdio.h>
int main() {

  float d1, d2, sum, diff, prod, avg;

  printf("Name-Himanshu Chandna, Class-1B\n\n");

  printf("WAP to read two floating type numbers from user. Calculate their sum, difference, product and average.\n\n");

  printf("Enter two decimal values:\n");
  printf("Number 1: \t");
  scanf("%f", &d1);
  printf("Number 2: \t");
  scanf("%f", &d2);

  sum = d1 + d2;
  diff = d1 - d2;
  prod = d1 * d2;
  avg = (d1 + d2) / 2;

  printf("The operations done on the numbers are:\n");
  printf("a + b = %.2f\n", sum);
  printf("a - b = %.2f\n", diff);
  printf("a * b = %.2f\n", prod);
  printf("(a + b)/2 = %.2f\n", avg);

  printf("\n\n<--- End of Code --->");

  return 0;

}