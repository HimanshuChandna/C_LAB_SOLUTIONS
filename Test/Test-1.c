#include<stdio.h>
int main(){

    int x, y;

    printf("Please enter the value of X: ");
    scanf("%d", &x);
    printf("Please enter the value of Y: ");
    scanf("%d", &y);

    if (x == y){

        printf("X is equal to Y\n");

    }

    else if (x > y){

        printf("X is greater than Y\n");

    }

    else if (x < y){

        printf("X is lesser than Y\n");

    }

    else if (x != y){

        printf("X is not equal to Y\n");

    }

    else if (x <= y){

        printf("X is less than equal to Y\n");

    }

    else if (x >= y){

        printf("X is greater than equal to Y\n");

    }

    else{

        printf("Invalid value!!!");

    }

    return 0;

}