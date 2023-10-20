// To find maximum of two numbers by using if else statement

#include<stdio.h>

int main(){

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Mathematical operation on character to get other character\n\n");

    // Assigning the variables
    int num1, num2;

    // Taking input from the user
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Checking whether num1 is greater than num2, if true executing the num1 is greater than num2 print statement. If not executing the else block printing num2 is greater than num1
    if(num1 > num2){

        printf("%d is greater than %d\n\n",num1, num2);

    }

    else{

        printf("%d is greater than %d\n\n",num2, num1);

    }

    printf("\n\n<--- End of Code --->");
    
    return 0;

}