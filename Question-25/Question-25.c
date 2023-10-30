//  WAP to compute xⁿ using while statement

#include<stdio.h>

int main(){

    // Assigning the variables
    int x, power, value, i;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("WAP to compute x^n using while statement\n\n");

    printf("Enter the value of 'x'\n");
    // Taking input from the user
    scanf("%d",&x);

    printf("Enter the power of 'x'\n");
    // Taking input from the user
    scanf("%d",&power);

    // By using the while loop statement we're printing the value of x^n by multiplying the 'x' with itself till the argument states true.
    value=1;
    i=0;
    while(i<power){

        value = value * x;
        i++;

    }

    printf("\nx^n= %d",value);

    printf("\n\n<--- End of Code --->");

    return 0;

}