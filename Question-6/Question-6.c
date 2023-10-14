// WAP to read Principle amount and time for a loan application. Take Rate of interest as a symbolic constant. Calculate Simple interest and display results

#include<stdio.h>
#define rate 0.07

int main(){
  
  int princ_amt, time;
  float si;

  printf("Name-Himanshu Chandna, Class-1B\n\n");

  printf("WAP to read Principle amount and time for a loan application. Take Rate of interest as a symbolic constant. Calculate Simple interest and display results.\n\n");

  printf("Enter the principal amount:");
  scanf("%d", &princ_amt);
  printf("The Defaut interest rate is 7 percent \n");
  printf("Enter the time duration:");
  scanf("%d", &time);

  si = (princ_amt * rate * time) / 100;

  printf("The Simple Interest if: %f\t", si);

  printf("\n\n<--- End of Code --->");

  return 0;

}