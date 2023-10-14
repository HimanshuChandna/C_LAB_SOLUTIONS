// Write a program to read two integers from user and print both the numbers. Find their sum and assign it to third variables.

#include<stdio.h>

int main(){

    
    int f_1, f_2, sum;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf(" Write a program to read two integers from user and print both the numbers. Find their sum and assign it to third variables.\n\n");

    printf("Enter first number: \n");
    scanf("%d",&f_1);
    printf("\nEnter second number: \n");
    scanf("%d",&f_2);

    printf("\nYou entered first number = %d\n",f_1);
    printf("\nYou entered second number = %d\n",f_2);

    sum = f_1 + f_2;

    printf("\n\nThe sum of first and second number is: %d\n\n",sum);

    printf("<--- End of Code --->");

    return 0;

}