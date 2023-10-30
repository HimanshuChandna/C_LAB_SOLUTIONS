// Write a program to read from user the values for 3 products (item_no, quantity, price). Find the total bill value and display. Also, allow a discount of 10% on the total bill and display net bill value.

#include<stdio.h>

int main(){

    // Assigning the variables
    int item_1, item_2, item_3, quantity_1, quantity_2, quantity_3, price_1, price_2, price_3, t1, t2, t3, net_total_value, option;
    float discount_value, total_bill_value;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Write a program to read from user the values for 3 products (item_no, quantity, price). Find the total bill value and display. Also, allow a discount of 10%% on the total bill and display net bill value.\n\n");

    // This block handles the first item 
    printf("Enter the Item Number: ");
    scanf("%d",&item_1);
    printf("Enter the Item Quantity: ");
    scanf("%d",&quantity_1);
    printf("Enter the Item Price: ");
    scanf("%d",&price_1);

    // This block handles the second item
    printf("Enter the Item Number: ");
    scanf("%d",&item_2);
    printf("Enter the Item Quantity: ");
    scanf("%d",&quantity_2);
    printf("Enter the Item Price: ");
    scanf("%d",&price_2);

    // This block handles the third item
    printf("Enter the Item Number: ");
    scanf("%d",&item_3);
    printf("Enter the Item Quantity: ");
    scanf("%d",&quantity_3);
    printf("Enter the Item Price: ");
    scanf("%d",&price_3);

    // This block calculating the item total of each item bu multiplying the quantity of the item with its price
    t1 = quantity_1 * price_1;
    t2 = quantity_2 * price_2;
    t3 = quantity_3 * price_3;
    
    // Calculating the net total amount by adding all the item total values
    net_total_value = t1 + t2 + t3;

    // Calculating the discount amount which needs to be lessed from the net total amount
    discount_value = 0.1 * net_total_value;

    // Calculating the final total amount by subtracting the net total amount to discount amount
    total_bill_value = net_total_value - discount_value;
    
    printf("\nTotal Bill Amount without discount: %d\n\n", net_total_value);

    printf("Net Bill Amount After discount is: %f",total_bill_value);

    return 0;

}