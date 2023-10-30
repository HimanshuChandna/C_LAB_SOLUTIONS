// To apply mathematical operation on ASCII value of character variables

#include<stdio.h>

int main(){

    // Assigning the variables
    char c1, c2, sum, diff, prod, div;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To apply mathematical operation on ASCII value of character variables\n\n");

    printf("Enter the characters\n\n");

    // Taking input from the user
    scanf("%c %c",&c1,&c2);

    // This block performing summation operation on the ASCII values of entered charcter values and outputting the result in ASCII values  
    sum = c1 + c2;
    printf("\nThe ASCII equivalent for the sum of %c and %c is %d\n\n",c1, c2, sum);

    // This block performing subtraction operation on the ASCII values of entered charcter values and outputting the result in ASCII values
    diff = c1 - c2;
    printf("The ASCII equivalent for the difference of %c and %c is %d\n\n",c1, c2, diff);
    
    // This block performing multiplication operation on the ASCII values of entered charcter values and outputting the result in ASCII values
    prod = c1 * c2;
    printf("The ASCII equivalent for the product of %c and %c is %d\n\n",c1, c2, prod);

    // This block performing division operation on the ASCII values of entered charcter values and outputting the result in ASCII values
    div = c1 / c2;
    printf("The ASCII equivalent for the division of %c and %c is %d\n\n",c1, c2, div);

    printf("\n\n<--- End of Code --->");

    return 0;

}