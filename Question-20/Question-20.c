/* To find grades on the basis of marks, using if-else and relational operators
Average marks grades
80 - 100 Honours
60 - 79 First Division
50 -59 Second Division
40 - 49 Third Division
0 - 39 Fail
*/

#include<stdio.h>

 int main(){

    // Assigning the variables
    int avg_marks;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("To find grades on the basis of marks, using if-else and relational operators Average marks grades\n80 - 100 Honours\n60 - 79 First Division\n50 -59 Second Division\n40 - 49 Third Division\n0 - 39 Fail\n\n");

    // Taking the input from the user
    printf("Enter average marks to check the grades accordingly: \n");
    scanf("%d",&avg_marks);

    // Checking the marks entered by the user and executing the block according to the logic
    if(avg_marks >= 80 && avg_marks <= 100){

        printf("You're awarded with Honours based on your marks:-> %d",avg_marks);

    }

    else if(avg_marks >= 60 && avg_marks <= 79){

        printf("You're awarded with First Division based on your marks:-> %d",avg_marks);

    }

        else if(avg_marks >= 50 && avg_marks <= 59){

        printf("You're awarded with Second Division based on your marks:-> %d",avg_marks);

    }
     
     else if(avg_marks >= 40 && avg_marks <= 49){

        printf("You're awarded with Third Division based on your marks:-> %d",avg_marks);

    }

        else if(avg_marks >= 0 && avg_marks <= 39){

        printf("You're failed based on your marks:-> %d",avg_marks);

    }

        // If user entered input other than integer value 0-100 it shows error to the user and ask to try again.
        else{

        printf("The value entered is invalid!!\nPlease check and try again.");

    }

    printf("\n\n<--- End of Code --->");

    return 0;

 }