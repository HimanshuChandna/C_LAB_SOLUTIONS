// To print perimeter and area of circle. Read input from user.

#include<stdio.h>

int main(){

    // Assigning the variables
    float radius, area, perimeter;

    printf("Name-Himanshu Chandna, Class-1B\n\n");
    
    printf("To print perimeter and area of circle. Read input from user.\n\n");

    // This block calculating the Area of the Circle:
    printf("Calculating the Area of the Circle\n");
    printf("Enter the Radius of the Circle\n");
    scanf("%f",&radius);
    area = (22/7) * (radius * radius);
    printf("The Area of Circle %f with radius %f\n\n", area, radius);

    // This block calculating the Perimeter of the Circle:
    printf("Calculating the Perimeter of the Circle\n");
    printf("Enter the Radius of the Circle\n");
    scanf("%f",&radius);
    area = 2 * (22/7) * radius;
    printf("The Perimeter of Circle %f with radius %f\n\n", perimeter, radius);

    // Alternate approach for solving or executing the code:

    printf("Alternate approach for solving or executing the code:\n\n");

    // Assigning the variable
    int option;

    printf("Choose from the below options:\n\n");
    printf("1-Area of the Circle\n2-Perimeter of the Circle\n\n:-");

    // Taking input from the user about the operations the user want to perform
    scanf("%d",&option);

    if(option == 1){

        printf("Enter the Radius of the Circle\n\n");
        scanf("%f",&radius);

        area = (22/7) * (radius * radius);

        printf("The Area of Circle %f with radius %f\n\n", area, radius);

    }

    else if(option == 2){

        printf("Enter the Radius of the Circle\n\n");
        scanf("%f",&radius);

        area = 2 * (22/7) * radius;

        printf("The Perimeter of Circle %f with radius %f\n\n", perimeter, radius);

    }

    
    else{

        // If the user enters value other than the inputs assigned for each operation it returns the error to the user.
        printf("Error!!!\n\n");

    }

    printf("<--- End of Code --->");

    return 0;

}