// To swap two numbers using third variable

#include<stdio.h>

int main(){

  int a, b, temp;

  printf("Name-Himanshu Chandna, Class-1B\n\n");

  printf("To swap two numbers using third variable.\n\n");

  printf("Enter number 1:\n");
  scanf("%d", &a);
  printf("Enter Number 2:\n");
  scanf("%d", &b);

  temp = a;
  a = b;
  b = a;
  b = temp;

  printf("\nSwapped Number 1: %d\n", a);
  printf("Swapped Number 2: %d\n", b);

  printf("\n\n<--- End of Code --->");

  return 0;

}