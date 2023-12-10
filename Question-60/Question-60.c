// Program to open a file, read character data from keyboard and write it into the file. Close the file and reopen it to print the contents.

#include <stdio.h>

int main() {
    // Declare variables
    FILE *filePointer;
    char fileName[100], data;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to open a file, read character data from keyboard, write it into the file,\n");
    printf("close the file, and reopen it to print the contents.\n\n");

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file for writing
    filePointer = fopen(fileName, "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file for writing.\n");
        return 1; // Exit with an error code
    }

    // Input character data from the keyboard and write it into the file
    printf("Enter character data (press Enter followed by Ctrl+D on Linux or Ctrl+Z on Windows to end input):\n");
    while ((data = getchar()) != EOF) {
        fputc(data, filePointer);
    }

    // Close the file
    fclose(filePointer);

    // Reopen the file for reading
    filePointer = fopen(fileName, "r");

    // Check if the file was reopened successfully
    if (filePointer == NULL) {
        printf("Error reopening the file for reading.\n");
        return 1; // Exit with an error code
    }

    // Display the contents of the file
    printf("\nContents of the file:\n");
    while ((data = fgetc(filePointer)) != EOF) {
        printf("%c", data);
    }

    // Close the file
    fclose(filePointer);

    printf("\n\n<--- End of Code --->");

    return 0;
}
