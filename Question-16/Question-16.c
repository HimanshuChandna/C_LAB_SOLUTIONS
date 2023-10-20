// To find maximum of two numbers by using conditional operators

#include <stdio.h>

int main() {
  
  // Assigning the variables
  int num1, num2, max;

  
  printf("Name-Himanshu Chandna, Class-1B\n\n");
  printf("To find maximum of two numbers by using conditional operators\n\n");

  // Taking input from the user   
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  // The ternary operator is a conditional operator that can be used to evaluate a condition and return one of two values, depending on whether the condition is true or false.
  max = (num1 > num2) ? num1 : num2;

  // Printing maximum of two numbers   
  printf("The maximum of %d and %d is %d.\n", num1, num2, max);

  printf("\n\n<--- End of Code --->");

  return 0;

}