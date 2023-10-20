// To swap two numbers without using third variable

#include<stdio.h>

int main(){

  int num1, num2;

  printf("Name-Himanshu Chandna, Class-1B\n\n");

  printf("To swap two numbers without using third variable.\n\n");

  printf("Enter Number 1:\n");
  scanf("%d", &num1);
  printf("\nEnter Number 2:\n");
  scanf("%d", &num2);

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("\nSwapped Number 1: %d\n", num1);
  printf("Swapped Number 2: %d\n", num2);

  printf("\n\n<--- End of Code --->");

  return 0;

}