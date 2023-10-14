// Write a program to read two variables of type int and float. Read their values from the user and print the values

#include<stdio.h>

int main(){

    int user_int;
    float user_float;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Write a program to read two variables of type int and float. Read their values from the user and print the values\n\n");

    printf("Enter an Integer Number: \n");
    scanf("%d",&user_int);
    printf("Enter an Floating Number: \n");
    scanf("%f",&user_float);

    printf("\nYou Entered \"%d\" as an Integer Number\n\n",user_int);
    printf("You Entered \"%f\" as an Floating Number\n\n",user_float);

    printf("<--- End of Code --->");

    return 0;

}