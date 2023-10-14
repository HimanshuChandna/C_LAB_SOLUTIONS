// WAP to read temperature in Celcius and convert it to Farenheit and vice-versa. Display the results of the program

#include<stdio.h>

int main(){

  float cel, fareh;

  printf("Name-Himanshu Chandna, Class-1B\n\n");

  printf("WAP to read temperature in Celcius and convert it to Farenheit and vice-versa. Display the results of the program.\n\n");

  printf("Enter the Temperature in farenheit:\n\n");
  scanf("%f", &fareh);

  cel = (fareh - 32) * 5 / 9;
  fareh = (cel * 9 / 5) + 32;

  printf("Farenheit -> Celcius: %.2f\n", cel);
  printf("Celcius -> Farenheit: %.2f\n", fareh);

  printf("\n\n<--- End of Code --->");

  return 0;

}