//  Write a program to read two integers and an operator (+,-,*,/,%). Use switch-case statement to get result of operator on two integers.

#include<stdio.h>

int main(){

    // Assigning the variables
    int num1, num2, result;
    char operation;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find maximum of three numbers by using if else statement\n\n");

    // Taking input from the user
    printf("Choose the operation you want to perfrom:-\n+\n-\n*\n/\n%%\n\n");
    scanf("%c",&operation);

    printf("Enter number 1: ");
    scanf("%d",&num1);

    printf("Enter number 2: ");
    scanf("%d",&num2);

    // By using the switch statement we're trying to perfrom different actions on the user input integers based on the operation used entered from the list.
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("%d %c %d = %d",num1, operation, num2, result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("%d %c %d = %d",num1, operation, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%d %c %d = %d",num1, operation, num2, result);
        break;

    case '/':
        result = num1 / num2;
        printf("%d %c %d = %d",num1, operation, num2, result);
        break;

    case '%':
        result = num1 % num2;
        printf("%d %c %d = %d",num1, operation, num2, result);
        break;

    // If user entered input other than integer value 0-100 it shows error to the user and ask to try again.
    default:
        printf("The value entered is invalid!!\nPlease check and try again.");
        break;
    }

    printf("\n\n<--- End of Code --->");

    return 0;

}