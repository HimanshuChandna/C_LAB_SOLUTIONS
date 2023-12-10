// Write a program to enter book records using structures.

#include <stdio.h>

// Define a structure for book records
struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    // Declare variables
    int n;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to enter book records using structures.\n\n");

    // Input the number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Check if the entered number is non-negative
    if (n <= 0) {
        printf("Please enter a valid number of books.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of structures to store book records
    struct Book books[n];

    // Input book records
    printf("Enter book details for %d books:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Year of Publication: ");
        scanf("%d", &books[i].year);
    }

    // Display entered book records
    printf("\nEntered book records:\n");
    for (int i = 0; i < n; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year of Publication: %d\n", books[i].year);
        printf("\n");
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}

