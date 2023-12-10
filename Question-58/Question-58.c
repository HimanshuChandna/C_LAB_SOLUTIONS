// Write a program to enter employee salary using structures. Create array of structures.

#include <stdio.h>

// Define a structure for employee salary details
struct Employee {
    char name[100];
    int employeeId;
    float salary;
};

int main() {
    // Declare variables
    int n;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to enter employee salary using structures. Create an array of structures.\n\n");

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Check if the entered number is non-negative
    if (n <= 0) {
        printf("Please enter a valid number of employees.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of structures to store employee salary details
    struct Employee employees[n];

    // Input employee details
    printf("Enter salary details for %d employees:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeId);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display entered employee salary details
    printf("\nEntered employee salary details:\n");
    for (int i = 0; i < n; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeId);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
