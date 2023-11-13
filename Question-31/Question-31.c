// To print sum of series: 1+1/2+…..+1/n

#include <stdio.h>

int main() {
    // Declare variables for user input and sum
    int n;
    float sum = 0.0;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Calculate the sum of the series 1 + 1/2 + ... + 1/n.\n\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Print the sum
    printf("Sum of the series 1 + 1/2 + ... + 1/%d is: %.2f\n", n, sum);

    printf("\n\n<--- End of Code --->");

    return 0;
}

