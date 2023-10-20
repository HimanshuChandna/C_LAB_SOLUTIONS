// To find maximum of three numbers by using if else statement

#include<stdio.h>

int main(){

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find maximum of three numbers by using if else statement\n\n");

    // Assigning the variables
    int num1, num2, num3;

    // Taking input from the user
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    // Checking whether num1 is greater than num2, if true executing the num1 is greater than num2 print statement. If not executing the else block printing num2 is greater than num1
    if(num1 > num2 && num1 > num3){

        printf("%d is greater than %d and %d\n\n",num1, num2, num3);

    }

    else if(num2 > num3){

        printf("%d is greater than %d and %d\n\n",num2, num1, num3);

    }

    else{

        printf("%d is greater than %d and %d\n\n",num3, num1, num2);

    }

    printf("\n\n<--- End of Code --->");
    
    return 0;

}