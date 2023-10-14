// Write a program to read numbers for five subjects and print their sum.

#include<stdio.h>

int main(){

    int s1, s2, s3, s4, s5, sum;

    printf("Name-Himanshu Chandna, Class-1B\n\n");
    
    printf("Write a program to read numbers for five subjects and print their sum.\n\n");

    printf("Please Enter your subjects marks below in Integers Only!\n");

    printf("Subject-1:\n");
    scanf("%d",&s1);
    printf("\nSubject-2:\n");
    scanf("%d",&s2);
    printf("\nSubject-3:\n");
    scanf("%d",&s3);
    printf("\nSubject-4:\n");
    scanf("%d",&s4);
    printf("\nSubject-5:\n");
    scanf("%d",&s5);

    sum = s1 + s2 + s3 + s4 + s5;

    printf("\nThe sum of all the five subjects: %d\n",sum);

    printf("\n\n<--- End of Code --->");

    return 0;

}