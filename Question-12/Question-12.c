// To print perimeter and area of circle. Read input from user.

#include<stdio.h>

int main(){

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To print perimeter and area of circle. Read input from user.\n\n");

    printf("Choose from the below options:\n\n");
    printf("1-Area of the Circle\n2-Perimeter of the Circle\n\n:-");

    float radius, area, perimeter;
    int option;

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

        printf("Error!!!\n\n");

    }

    printf("<--- End of Code --->");

    return 0;

}