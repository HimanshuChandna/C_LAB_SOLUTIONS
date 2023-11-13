#include<stdio.h>

int main(){

    int x, y, a, b;

    printf("Enter tha value of X: ");
    scanf("%d", &x);
    printf("Enter tha value of Y: ");
    scanf("%d", &y);
    printf("Enter tha value of A: ");
    scanf("%d", &a);
    printf("Enter tha value of B: ");
    scanf("%d", &b);

    if (x < y && a == b){

        printf("X is less than Y AND A is equal to B\n");

    }

    else if (x < y || a == b){

        printf("X is less than Y OR A is equal to B\n");

    }

    else if ((x == y) && (a != b)){

        printf("X is equal to Y AND A is not equal to B\n");

    }

    else{

        printf("Invalid Value!!!\n");

    } 

    return 0;

}