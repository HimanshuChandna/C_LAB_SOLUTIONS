// To find the area and perimeter of rectangle. Read input from user.

#include<stdio.h>

int main()
{

    // Assigning the variables
    float area, perimeter, length, width;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find the area and perimeter of rectangle. Read input from user.\n\n");

    // This block calculating the Area of the Rectangle:
    printf("Calculating the Area of the Rectangle\n");
    printf("Enter the Lenght of Rectangle\n");
    scanf("%f",&length);
    printf("Enter the Width of Rectangle\n");
    scanf("%f",&width);
    area = length * width;
    printf("Area of Rectangle %f with length %f and width %f\n\n",area,length,width);

    // This block calculating the Perimeter of the Rectangle:
    printf("Calculating the Perimeter of the Rectangle\n");
    printf("Enter the Lenght of Rectangle\n");
    scanf("%f",&length);
    printf("Enter the Width of Rectangle\n");
    scanf("%f",&width);
    perimeter = 2 * (length + width);
    printf("Perimeter of Rectangle %f with length %f and width %f\n\n",area,length,width);

    // Alternate approach for solving or executing the code:

    printf("Alternate approach for solving or executing the code:\n\n");

    // Assigning the variable
    int option;

    printf("Choose from the below options:\n\n");
    printf("1-Area of the Rectangle\n2-Perimeter of the Rectangle\n\n:-");

    // Taking input from the user about the operations the user want to perform
    scanf("%d",&option);

    if(option == 1){

        printf("Enter the Lenght of Rectangle\n");
        scanf("%f",&length);
        printf("Enter the Width of Rectangle\n");
        scanf("%f",&width);

        area = length * width;

        printf("Area of Rectangle %f with length %f and width %f\n\n",area,length,width);

    }

    else if(option == 2){

        printf("Enter the Lenght of Rectangle\n");
        scanf("%f",&length);
        printf("Enter the Width of Rectangle\n");
        scanf("%f",&width);

        perimeter = 2 * (length + width);

        printf("Perimeter of Rectangle %f with length %f and width %f\n\n",area,length,width);

    }

    else{

        // If the user enters value other than the inputs assigned for each operation it returns the error to the user.
        printf("Error!!!");

    }

    printf("<--- End of Code --->");

    return 0;

}
