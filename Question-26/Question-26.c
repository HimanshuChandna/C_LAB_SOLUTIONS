// Write a program to generate multiplication tables using nested do-while statements

#include <stdio.h>

int main() {
    
    // Assigning the variables
    int n;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Write a program to generate multiplication tables using nested do-while statements\n\n");

    printf("Enter the number of tables to generate: ");
    scanf("%d", &n);

    int c = 1, r;

    // Outer do-while loop to generate tables from 1 to n
    do {
        r = 1;

        // Inner do-while loop to print the multiplication table for the current 'c'
        do {
            printf("%d\t",c * r);
            r++;
        } while (r <= 10);

        printf("\n");
        c++;
    } while (c <= n);

    printf("\n\n<--- End of Code --->");

    return 0;
}