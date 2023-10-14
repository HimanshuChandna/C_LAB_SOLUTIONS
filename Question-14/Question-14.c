// Mathematical operation on character to get other character

#include<stdio.h>

int main(){

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Mathematical operation on character to get other character\n\n");

    char c1, c2, sum, diff, prod, div;

    printf("Enter the characters\n\n");
    scanf("%c %c",&c1,&c2);

    sum = c1 + c2;

    printf("\nThe ASCII equivalent for the sum of %c and %c is %c\n\n",c1, c2, sum);

    diff = c1 - c2;

    printf("The ASCII equivalent for the difference of %c and %c is %c\n\n",c1, c2, diff);
    
    prod = c1 * c2;

    printf("The ASCII equivalent for the product of %c and %c is %c\n\n",c1, c2, prod);

    div = c1 / c2;

    printf("The ASCII equivalent for the division of %c and %c is %c\n\n",c1, c2, div);

    printf("\n\n<--- End of Code --->");
    
    return 0;

}