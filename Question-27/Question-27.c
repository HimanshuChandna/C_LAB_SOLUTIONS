// Write a program to print following patterns: Triangle of '*' , triangle of digits

#include <stdio.h>

int main() {

    // Assigning the variables
    int n;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Write a program to print following patterns: Triangle of * , triangle of digits\n\n");

    printf("Enter the number of rows for the triangle: ");
    // Taking input from the user
    scanf("%d", &n);

    // This do while loop statement prints the triangle pattern with '*'
    int i = 1;
    do {
        int j = 1;
        do {
            printf("* ");
            j++;
        } while (j <= i);

        printf("\n");
        i++;
    } while (i <= n);

    // Assigning the variables
    int k;

    printf("Enter the number of rows for the triangle: ");
    // Taking input from the user
    scanf("%d", &k);

    // This do while loop statement prints the triangle with digits
    int l = 1;
    int num = 1; // Initialize the starting number
    do {
        int m = 1;
        
        do {
            printf("%d ", num);
            // num++;
            m++;
        } while (m <= l);
        num++;
        printf("\n");
        l++;
    } while (l <= k);

    printf("\n\n<--- End of Code --->");

    return 0;
}