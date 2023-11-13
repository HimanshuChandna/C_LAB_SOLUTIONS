// WAP to implement a function printline(int n,char ch) to print 'ch' n-times

#include <stdio.h>

// Function to print 'ch' n times
void printline(int n, char ch) {
    for (int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    // Declare variables for user input
    int n;
    char ch;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to print a character n times using a function.\n\n");
    printf("Enter the number of times to print: ");
    scanf("%d", &n);

    // Input the character to print
    printf("Enter the character to print: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    // Call the printline function
    printline(n, ch);

    printf("\n\n<--- End of Code --->");

    return 0;
}
