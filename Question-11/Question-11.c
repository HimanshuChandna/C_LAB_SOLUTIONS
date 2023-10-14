// To find the area and perimeter of rectangle. Read input from user.

#include<stdio.h>

int main()
{

    float area, perimeter, length, width;
    int option;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find the area and perimeter of rectangle. Read input from user.\n\n");

    printf("Choose from the below options:\n\n");
    printf("1-Area of the Rectangle\n2-Perimeter of the Rectangle\n\n:-");

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

        printf("Error!!!");

    }

    printf("<--- End of Code --->");

    return 0;

}
