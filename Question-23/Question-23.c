// WAP to find nature of roots of quadratic equations.

#include<stdio.h>

int main(){

    // Assigning the variables
    float a, b, c, discriminant;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("WAP to find nature of roots of quadratic equations.\n\n");

    printf("Enter the coefficients(a,b,c) of the quadratic equation ax^n+bx+c:\n\n");

    // Taking input from the user
    printf("Enter coefficient 'a':\n");
    scanf("%f",&a);
    printf("Enter coefficient 'b':\n");
    scanf("%f",&b);
    printf("Enter coefficient 'c':\n");
    scanf("%f",&c);

    discriminant = (b*b)-(4*a*c);

    // Checking the value of discriminant by using the if-else ladder conditional statements
    if (discriminant > 0){

        printf("The roots are real and distinct.");

    }

    else if (discriminant == 0){

        printf("The roots are real and equal.");

    }

    else if (discriminant < 0){

        printf("The roots are imaginary.");

    }

    else{

        // If the user enters any wrong input then it returns the user with an error message.
        printf("Invalid!.\t Please Check the entered values and try again.");

    }
    
    printf("\n\n<--- End of Code --->");

    return 0;

}