// To find maximum of three numbers using conditional operator

#include<stdio.h>

int main(){

    // Assigning the variables
    int num1, num2, num3, max;

    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("To find maximum of three numbers using conditional operator\n\n");

    // Taking input from the user
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    // The ternary operator is a conditional operator that can be used to evaluate a condition and return one of two values, depending on whether the condition is true or false.

    // Here were checking if num1 is greater than num2 and num3 then num1 will be the greatest, if not then we're checking if num2 is greater than num3. Then print num2 otherwise print num3

    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;

    // Printing the maximum of three numbers
    printf("The maximum of %d , %d , %d is %d.\n", num1, num2, num3, max);

    printf("\n\n<--- End of Code --->");

    return 0;

}