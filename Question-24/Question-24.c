// WAP to print natural numbers till n using while loop. Also print reverse counting from m to 1. Get n, m from user at runtime

#include<stdio.h>

int main(){

    // Assigning the variables
    int i, n, m;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("WAP to print natural numbers till n using while loop. Also print reverse counting from m to 1. Get n, m from user at runtime\n\n");

    printf("Enter the value of 'n':\n");
    // Taking input from the user in runtime
    scanf("%d",&n);

    // By using while loop statement we're printing the value of 'ii with an increment on each iteration till the argument states true value.
    i=0;
    while(i <= n){

        printf("%d\n",i);
        i++;

    } 

    printf("Enter the value of 'm':\n");
    
    // Taking input from the user in runtime
    scanf("%d",&m);

    // By using while loop statement we're printing the value of 'm' with an decrement on each iteration till the argument states true value.
    while(m >= 1){

        printf("%d\n",m);
        m--;

    }

    printf("\n\n<--- End of Code --->");

    return 0;

}