/*  To find electricity charges based on consumption
    Consumption Units Rate of Charge
    0 - 200 (0.50 Rs per unit)
    201 - 400 (Rs. 100 + Rs. 0.65 per unit)
    401 - 600 (Rs. 230 + Rs. 0.80 per unit)
    601 - above (Rs. 390 + Rs. 1.00 per unit)
*/

#include<stdio.h>

int main(){

    // Assigning the variables
    float units, charges;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find maximum of three numbers by using if else statement\n\n");

    // Taking input from the user
    printf("Enter your electricity consumption in units to check the electricity charges\n\n");
    scanf("%f",&units);

    // Checking the electricity units entered by the user and executing the block according to the logic for printing the final calculations on the basis of units entered.
    if(units >= 0 && units <= 200){

        charges = units * 0.50;
        printf("Your electricity charges based on usage provided %f is %f\n",units,charges);

    }

    else if(units >= 201 && units <= 400){

        charges = (units * 0.65) + 100;
        printf("Your electricity charges based on usage provided %f is %f\n",units,charges);

    }

    else if(units >= 401 && units <= 600){   

        charges = (units * 0.80) + 230;
        printf("Your electricity charges based on usage provided %f is %f\n",units,charges);

    }

    else if(units >= 601){

        charges = (units * 1.0) + 390;
        printf("Your electricity charges based on usage provided %f is %f\n",units,charges);

    }

     // If user entered input other than integer value 0-100 it shows error to the user and ask to try again.
    else{

        printf("The value entered is invalid!!\nPlease check and try again.");

    }

    printf("\n\n<--- End of Code --->");

    return 0;

}