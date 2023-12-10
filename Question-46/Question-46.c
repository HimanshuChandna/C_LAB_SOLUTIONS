// Write a program Matrix Operations (switch-case): Addition, Subtraction, Multiplication and Transpose

#include <stdio.h>

// Function to input a matrix from the user
void inputMatrix(int matrix[][100], int rows, int columns) {
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element at (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int columns1, int rows2, int columns2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[][100], int transposedMatrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
}

int main() {
    // Declare variables
    int choice, rows1, columns1, rows2, columns2;
    int matrix1[100][100], matrix2[100][100], result[100][100], transposedMatrix[100][100];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program for Matrix Operations (switch-case): Addition, Subtraction, Multiplication, and Transpose.\n\n");

    // Input details of the first matrix
    printf("Enter the number of rows for Matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for Matrix 1: ");
    scanf("%d", &columns1);

    inputMatrix(matrix1, rows1, columns1);

    // Input details of the second matrix
    printf("\nEnter the number of rows for Matrix 2: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for Matrix 2: ");
    scanf("%d", &columns2);

    inputMatrix(matrix2, rows2, columns2);

    // Display the matrices
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows1, columns1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows2, columns2);

    // Menu for matrix operations
    printf("\nChoose Matrix Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose (Matrix 1)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the selected matrix operation using switch-case
    switch (choice) {
        case 1:
            // Addition
            if (rows1 == rows2 && columns1 == columns2) {
                addMatrices(matrix1, matrix2, result, rows1, columns1);
                printf("\nResultant Matrix (Addition):\n");
                displayMatrix(result, rows1, columns1);
            } else {
                printf("\nMatrices are not compatible for addition.\n");
            }
            break;
        case 2:
            // Subtraction
            if (rows1 == rows2 && columns1 == columns2) {
                subtractMatrices(matrix1, matrix2, result, rows1, columns1);
                printf("\nResultant Matrix (Subtraction):\n");
                displayMatrix(result, rows1, columns1);
            } else {
                printf("\nMatrices are not compatible for subtraction.\n");
            }
            break;
        case 3:
            // Multiplication
            if (columns1 == rows2) {
                multiplyMatrices(matrix1, matrix2, result, rows1, columns1, rows2, columns2);
                printf("\nResultant Matrix (Multiplication):\n");
                displayMatrix(result, rows1, columns2);
            } else {
                printf("\nMatrices are not compatible for multiplication.\n");
            }
            break;
        case 4:
            // Transpose (Matrix 1)
            transposeMatrix(matrix1, transposedMatrix, rows1, columns1);
            printf("\nTransposed Matrix (Matrix 1):\n");
            displayMatrix(transposedMatrix, columns1, rows1);
            break;
        default:
            printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
            break;
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
