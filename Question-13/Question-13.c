// To apply mathematical operation on ASCII value of character variables

#include<stdio.h>

int main(){

        
    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To apply mathematical operation on ASCII value of character variables\n\n");

   char c1, c2, sum, diff, prod, div;

    printf("Enter the characters\n\n");
    scanf("%c %c",&c1,&c2);

    sum = c1 + c2;

    printf("\nThe ASCII equivalent for the sum of %c and %c is %d\n\n",c1, c2, sum);

    diff = c1 - c2;

    printf("The ASCII equivalent for the difference of %c and %c is %d\n\n",c1, c2, diff);
    
    prod = c1 * c2;

    printf("The ASCII equivalent for the product of %c and %c is %d\n\n",c1, c2, prod);

    div = c1 / c2;

    printf("The ASCII equivalent for the division of %c and %c is %d\n\n",c1, c2, div);

    printf("\n\n<--- End of Code --->");

    return 0;

    printf("\n\n<--- End of Code --->");

}