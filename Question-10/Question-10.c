/* Read input user at runtime and covert time from
    -hours to seconds
    -hours to minutes
    -minutes to seconds
    -days to seconds
*/

#include<stdio.h>

int main(){

    float days, hour, minute, second;

    int  option;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Read input user at runtime and covert time from\n-hours to seconds\n-hours to minutes\n-minutes to seconds\n-days to seconds\n\n");

    printf("Choose the following options for conversion:\n\n");
    printf("1-Hours -> Seconds\n2-Hours -> Minutes\n3-Minutes -> Seconds\n4-Days -> Seconds\n\n:-");

    scanf("%d",&option);


    if(option == 1){

        printf("Please Enter the time in Hours:\n");
        scanf("%f",&hour);
        second = hour * 60 * 60;
        printf("Hours %f -> Seconds %f",hour,second);

    }


    else if(option == 2){

        printf("Please Enter the time in Hours:\n");
        scanf("%f",&hour);
        second = hour * 60;
        printf("Hours %f -> Minutes %f",hour,second);

    }

    else if(option == 3){

        printf("Please Enter the time in Minutes:\n");
        scanf("%f",&minute);
        second = minute * 60;
        printf("Minues %f -> Seconds %f",minute,second);

    }

    else if(option == 4){

        printf("Please Enter the time in Days:\n");
        scanf("%f",&days);
        second = days * 12 * 60 * 60;
        printf("Days %f -> Seconds %f",days,second);

    }

    else{

        printf("Error!!!");

    }

    printf("\n\n<--- End of Code --->");

    return 0;

}